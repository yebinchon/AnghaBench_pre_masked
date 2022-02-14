
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int dtshd_start_code ;
struct TYPE_9__ {TYPE_1__* priv_data; } ;
struct TYPE_8__ {int size; char const* data; } ;
struct TYPE_7__ {int dtshd_rate; int pkt_offset; int data_type; int dtshd_skip; int dtshd_fallback; int out_bytes; scalar_t__ hd_buf; scalar_t__ out_buf; int hd_buf_size; scalar_t__ length_code; } ;
typedef TYPE_1__ IEC61937Context ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__*,int *,int) ;
 int FUNC_4 (TYPE_3__*,int ,char*,...) ;
 int FUNC_5 (scalar_t__,char const*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_7, AVPacket *VAR_8, int VAR_9,
                             int VAR_10, int VAR_11)
{
    IEC61937Context *VAR_12 = VAR_7->priv_data;
    static const char VAR_13[10] = { 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe };
    int VAR_14 = VAR_8->size;
    int VAR_15;
    int VAR_16;

    if (!VAR_9) {
        FUNC_4(VAR_7, VAR_1, "HD mode not supported for this format\n");
        return FUNC_0(VAR_4);
    }

    if (!VAR_10) {
        FUNC_4(VAR_7, VAR_1, "Unknown DTS sample rate for HD\n");
        return VAR_0;
    }

    VAR_15 = VAR_12->dtshd_rate * (VAR_11 << 5) / VAR_10;
    VAR_16 = FUNC_6(VAR_15);

    if (VAR_16 < 0) {
        FUNC_4(VAR_7, VAR_1, "Specified HD rate of %d Hz would require an "
               "impossible repetition period of %d for the current DTS stream"
               " (blocks = %d, sample rate = %d)\n", VAR_12->dtshd_rate, VAR_15,
               VAR_11 << 5, VAR_10);
        return FUNC_0(VAR_4);
    }



    VAR_12->pkt_offset = VAR_15 * 4;
    VAR_12->data_type = VAR_6 | VAR_16 << 8;






    if (sizeof(VAR_13) + 2 + VAR_14
            > VAR_12->pkt_offset - VAR_3 && VAR_9) {
        if (!VAR_12->dtshd_skip)
            FUNC_4(VAR_7, VAR_2, "DTS-HD bitrate too high, "
                                      "temporarily sending core only\n");
        if (VAR_12->dtshd_fallback > 0)
            VAR_12->dtshd_skip = VAR_10 * VAR_12->dtshd_fallback / (VAR_11 << 5);
        else


            VAR_12->dtshd_skip = 1;
    }
    if (VAR_12->dtshd_skip && VAR_9) {
        VAR_14 = VAR_9;
        if (VAR_12->dtshd_fallback >= 0)
            --VAR_12->dtshd_skip;
    }

    VAR_12->out_bytes = sizeof(VAR_13) + 2 + VAR_14;



    VAR_12->length_code = FUNC_2(VAR_12->out_bytes + 0x8, 0x10) - 0x8;

    FUNC_3(&VAR_12->hd_buf, &VAR_12->hd_buf_size, VAR_12->out_bytes);
    if (!VAR_12->hd_buf)
        return FUNC_0(VAR_5);

    VAR_12->out_buf = VAR_12->hd_buf;

    FUNC_5(VAR_12->hd_buf, VAR_13, sizeof(VAR_13));
    FUNC_1(VAR_12->hd_buf + sizeof(VAR_13), VAR_14);
    FUNC_5(VAR_12->hd_buf + sizeof(VAR_13) + 2, VAR_8->data, VAR_14);

    return 0;
}
