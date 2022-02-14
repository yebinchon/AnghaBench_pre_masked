
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mat_start_code ;
typedef int mat_middle_code ;
typedef int mat_end_code ;
struct TYPE_9__ {TYPE_1__* priv_data; } ;
struct TYPE_8__ {int size; char const* data; } ;
struct TYPE_7__ {int hd_buf_count; int pkt_offset; int out_bytes; int length_code; int * hd_buf; int * out_buf; int data_type; } ;
typedef TYPE_1__ IEC61937Context ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,char*,int) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int *,int ,size_t) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_6, AVPacket *VAR_7)
{
    IEC61937Context *VAR_8 = VAR_6->priv_data;
    int VAR_9 = 0;
    static const char VAR_10[16] = { 0xC3, 0xC2, 0xC0, 0xC4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x97, 0x11 };

    if (!VAR_8->hd_buf_count) {
        static const char VAR_11[20] = { 0x07, 0x9E, 0x00, 0x03, 0x84, 0x01, 0x01, 0x01, 0x80, 0x00, 0x56, 0xA5, 0x3B, 0xF4, 0x81, 0x83, 0x49, 0x80, 0x77, 0xE0 };
        VAR_9 = sizeof(VAR_11) + VAR_1;
        FUNC_1(VAR_8->hd_buf, VAR_11, sizeof(VAR_11));

    } else if (VAR_8->hd_buf_count == 12) {
        static const char VAR_12[12] = { 0xC3, 0xC1, 0x42, 0x49, 0x3B, 0xFA, 0x82, 0x83, 0x49, 0x80, 0x77, 0xE0 };
        VAR_9 = sizeof(VAR_12) + VAR_4;
        FUNC_1(&VAR_8->hd_buf[12 * VAR_5 - VAR_1 + VAR_4],
               VAR_12, sizeof(VAR_12));
    }

    if (VAR_7->size > VAR_5 - VAR_9) {


        FUNC_0(VAR_6, "Too large TrueHD frame of %d bytes",
                              VAR_7->size);
        return VAR_0;
    }

    FUNC_1(&VAR_8->hd_buf[VAR_8->hd_buf_count * VAR_5 - VAR_1 + VAR_9],
           VAR_7->data, VAR_7->size);
    if (VAR_8->hd_buf_count < 23) {
        FUNC_2(&VAR_8->hd_buf[VAR_8->hd_buf_count * VAR_5 - VAR_1 + VAR_9 + VAR_7->size],
               0, VAR_5 - VAR_7->size - VAR_9);
    } else {
        size_t VAR_13 = VAR_3 - (VAR_8->hd_buf_count * VAR_5 - VAR_1 + VAR_7->size);
        FUNC_2(&VAR_8->hd_buf[VAR_3 - VAR_13], 0, VAR_13);
    }

    if (++VAR_8->hd_buf_count < 24){
        VAR_8->pkt_offset = 0;
        return 0;
    }
    FUNC_1(&VAR_8->hd_buf[VAR_3 - sizeof(VAR_10)], VAR_10, sizeof(VAR_10));
    VAR_8->hd_buf_count = 0;

    VAR_8->data_type = VAR_2;
    VAR_8->pkt_offset = 61440;
    VAR_8->out_buf = VAR_8->hd_buf;
    VAR_8->out_bytes = VAR_3;
    VAR_8->length_code = VAR_3;
    return 0;
}
