
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct AVFormatContext {int pb; TYPE_1__* priv_data; } ;
struct TYPE_7__ {int* data; int size; } ;
struct TYPE_6__ {int* out_buf; int out_bytes; int length_code; int use_preamble; int extra_bswap; int (* header_info ) (struct AVFormatContext*,TYPE_2__*) ;int pkt_offset; int data_type; int spdif_flags; int* buffer; int buffer_size; } ;
typedef TYPE_1__ IEC61937Context ;
typedef TYPE_2__ AVPacket ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int**,int *,scalar_t__) ;
 int FUNC_3 (struct AVFormatContext*,int ,char*,...) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (struct AVFormatContext*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(struct AVFormatContext *VAR_9, AVPacket *VAR_10)
{
    IEC61937Context *VAR_11 = VAR_9->priv_data;
    int VAR_12, VAR_13;

    VAR_11->out_buf = VAR_10->data;
    VAR_11->out_bytes = VAR_10->size;
    VAR_11->length_code = FUNC_1(VAR_10->size, 2) << 3;
    VAR_11->use_preamble = 1;
    VAR_11->extra_bswap = 0;

    VAR_12 = VAR_11->header_info(VAR_9, VAR_10);
    if (VAR_12 < 0)
        return VAR_12;
    if (!VAR_11->pkt_offset)
        return 0;

    VAR_13 = (VAR_11->pkt_offset - VAR_11->use_preamble * VAR_3 - VAR_11->out_bytes) & ~1;
    if (VAR_13 < 0) {
        FUNC_3(VAR_9, VAR_2, "bitrate is too high\n");
        return FUNC_0(VAR_4);
    }

    if (VAR_11->use_preamble) {
        FUNC_7(VAR_11, VAR_9->pb, VAR_7);
        FUNC_7(VAR_11, VAR_9->pb, VAR_8);
        FUNC_7(VAR_11, VAR_9->pb, VAR_11->data_type);
        FUNC_7(VAR_11, VAR_9->pb, VAR_11->length_code);
    }

    if (VAR_11->extra_bswap ^ (VAR_11->spdif_flags & VAR_6)) {
        FUNC_4(VAR_9->pb, VAR_11->out_buf, VAR_11->out_bytes & ~1);
    } else {
        FUNC_2(&VAR_11->buffer, &VAR_11->buffer_size, VAR_11->out_bytes + VAR_0);
        if (!VAR_11->buffer)
            return FUNC_0(VAR_5);
        FUNC_5((uint16_t *)VAR_11->buffer, (uint16_t *)VAR_11->out_buf, VAR_11->out_bytes >> 1);
        FUNC_4(VAR_9->pb, VAR_11->buffer, VAR_11->out_bytes & ~1);
    }


    if (VAR_11->out_bytes & 1)
        FUNC_7(VAR_11, VAR_9->pb, VAR_11->out_buf[VAR_11->out_bytes - 1] << 8);

    FUNC_6(VAR_9->pb, 0, VAR_13);

    FUNC_3(VAR_9, VAR_1, "type=%x len=%i pkt_offset=%i\n",
           VAR_11->data_type, VAR_11->out_bytes, VAR_11->pkt_offset);

    return 0;
}
