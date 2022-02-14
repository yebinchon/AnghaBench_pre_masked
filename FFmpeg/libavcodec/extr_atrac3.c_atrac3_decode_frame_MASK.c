
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {int * decoded_bytes_buffer; scalar_t__ scrambled_stream; } ;
struct TYPE_13__ {int block_align; TYPE_4__* priv_data; } ;
struct TYPE_12__ {scalar_t__ extended_data; int nb_samples; } ;
struct TYPE_11__ {int size; int * data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;
typedef TYPE_4__ ATRAC3Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,char*,...) ;
 int FUNC_1 (int const*,int *,int) ;
 int FUNC_2 (TYPE_3__*,int const*,float**) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_3, void *VAR_4,
                               int *VAR_5, AVPacket *VAR_6)
{
    AVFrame *VAR_7 = VAR_4;
    const uint8_t *VAR_8 = VAR_6->data;
    int VAR_9 = VAR_6->size;
    ATRAC3Context *VAR_10 = VAR_3->priv_data;
    int VAR_11;
    const uint8_t *VAR_12;

    if (VAR_9 < VAR_3->block_align) {
        FUNC_0(VAR_3, VAR_1,
               "Frame too small (%d bytes). Truncated file?\n", VAR_9);
        return VAR_0;
    }


    VAR_7->nb_samples = VAR_2;
    if ((VAR_11 = FUNC_3(VAR_3, VAR_7, 0)) < 0)
        return VAR_11;


    if (VAR_10->scrambled_stream) {
        FUNC_1(VAR_8, VAR_10->decoded_bytes_buffer, VAR_3->block_align);
        VAR_12 = VAR_10->decoded_bytes_buffer;
    } else {
        VAR_12 = VAR_8;
    }

    VAR_11 = FUNC_2(VAR_3, VAR_12, (float **)VAR_7->extended_data);
    if (VAR_11) {
        FUNC_0(VAR_3, VAR_1, "Frame decoding error!\n");
        return VAR_11;
    }

    *VAR_5 = 1;

    return VAR_3->block_align;
}
