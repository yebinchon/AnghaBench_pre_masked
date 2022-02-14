
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_23__ {int unit_type; } ;
struct TYPE_22__ {int num_channel_blocks; int* channel_blocks; int * outp_buf; TYPE_6__* ch_units; int samples; int gb; } ;
struct TYPE_21__ {scalar_t__ codec_id; int block_align; TYPE_4__* priv_data; } ;
struct TYPE_20__ {int nb_samples; scalar_t__ extended_data; } ;
struct TYPE_19__ {int size; int data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;
typedef TYPE_4__ ATRAC3PContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_4__*,TYPE_6__*,int ,int,TYPE_3__*) ;
 int FUNC_4 (int *,TYPE_6__*,int,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (float*,int ,int) ;
 int FUNC_11 (TYPE_4__*,TYPE_6__*,int,TYPE_3__*) ;

__attribute__((used)) static int FUNC_12(AVCodecContext *VAR_7, void *VAR_8,
                                int *VAR_9, AVPacket *VAR_10)
{
    ATRAC3PContext *VAR_11 = VAR_7->priv_data;
    AVFrame *VAR_12 = VAR_8;
    int VAR_13, VAR_14, VAR_15, VAR_16 = 0, VAR_17 = 0, VAR_18;
    float **VAR_19 = (float **)VAR_12->extended_data;

    VAR_12->nb_samples = VAR_0;
    if ((VAR_14 = FUNC_5(VAR_7, VAR_12, 0)) < 0)
        return VAR_14;

    if ((VAR_14 = FUNC_9(&VAR_11->gb, VAR_10->data, VAR_10->size)) < 0)
        return VAR_14;

    if (FUNC_7(&VAR_11->gb)) {
        FUNC_1(VAR_7, VAR_4, "Invalid start bit!\n");
        return VAR_1;
    }

    while (FUNC_8(&VAR_11->gb) >= 2 &&
           (VAR_15 = FUNC_6(&VAR_11->gb, 2)) != VAR_6) {
        if (VAR_15 == VAR_5) {
            FUNC_2(VAR_7, "Channel unit extension");
            return VAR_2;
        }
        if (VAR_16 >= VAR_11->num_channel_blocks ||
            VAR_11->channel_blocks[VAR_16] != VAR_15) {
            FUNC_1(VAR_7, VAR_4,
                   "Frame data doesn't match channel configuration!\n");
            return VAR_1;
        }

        VAR_11->ch_units[VAR_16].unit_type = VAR_15;
        VAR_18 = VAR_15 + 1;

        if ((VAR_14 = FUNC_4(&VAR_11->gb,
                                                  &VAR_11->ch_units[VAR_16],
                                                  VAR_18,
                                                  VAR_7)) < 0)
            return VAR_14;

        FUNC_3(VAR_11, &VAR_11->ch_units[VAR_16], VAR_11->samples,
                                 VAR_18, VAR_7);
        FUNC_11(VAR_11, &VAR_11->ch_units[VAR_16],
                          VAR_18, VAR_7);

        for (VAR_13 = 0; VAR_13 < VAR_18; VAR_13++)
            FUNC_10(VAR_19[VAR_17 + VAR_13], VAR_11->outp_buf[VAR_13],
                   VAR_0 * sizeof(**VAR_19));

        VAR_16++;
        VAR_17 += VAR_18;
    }

    *VAR_9 = 1;

    return VAR_7->codec_id == VAR_3 ? FUNC_0(VAR_7->block_align, VAR_10->size) : VAR_10->size;
}
