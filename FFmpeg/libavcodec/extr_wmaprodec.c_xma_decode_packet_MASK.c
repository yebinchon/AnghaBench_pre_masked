
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {size_t current_stream; int* start_channel; int* offset; int num_streams; int ** samples; TYPE_8__* xma; TYPE_2__** frames; } ;
typedef TYPE_1__ XMADecodeCtx ;
struct TYPE_13__ {int nb_channels; scalar_t__ skip_packets; scalar_t__ packet_loss; scalar_t__ packet_done; } ;
struct TYPE_12__ {TYPE_1__* priv_data; } ;
struct TYPE_11__ {int nb_samples; int ** extended_data; int * data; } ;
typedef int AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*,TYPE_8__*,TYPE_2__*,int*,int *) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int*,int ,int) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_1, void *VAR_2,
                             int *VAR_3, AVPacket *VAR_4)
{
    XMADecodeCtx *VAR_5 = VAR_1->priv_data;
    int VAR_6 = 0;
    AVFrame *VAR_7 = VAR_2;
    int VAR_8, VAR_9, VAR_10 = VAR_0;

    if (!VAR_5->frames[VAR_5->current_stream]->data[0]) {
        VAR_5->frames[VAR_5->current_stream]->nb_samples = 512;
        if ((VAR_9 = FUNC_3(VAR_1, VAR_5->frames[VAR_5->current_stream], 0)) < 0) {
            return VAR_9;
        }
    }

    VAR_9 = FUNC_2(VAR_1, &VAR_5->xma[VAR_5->current_stream], VAR_5->frames[VAR_5->current_stream],
                        &VAR_6, VAR_4);


    if (VAR_6) {
        int VAR_11 = VAR_5->start_channel[VAR_5->current_stream];
        FUNC_4(&VAR_5->samples[VAR_11 + 0][VAR_5->offset[VAR_5->current_stream] * 512],
               VAR_5->frames[VAR_5->current_stream]->extended_data[0], 512 * 4);
        if (VAR_5->xma[VAR_5->current_stream].nb_channels > 1)
            FUNC_4(&VAR_5->samples[VAR_11 + 1][VAR_5->offset[VAR_5->current_stream] * 512],
                   VAR_5->frames[VAR_5->current_stream]->extended_data[1], 512 * 4);
        VAR_5->offset[VAR_5->current_stream]++;
    } else if (VAR_9 < 0) {
        FUNC_6(VAR_5->offset, 0, sizeof(VAR_5->offset));
        VAR_5->current_stream = 0;
        return VAR_9;
    }




    if (VAR_5->xma[VAR_5->current_stream].packet_done ||
        VAR_5->xma[VAR_5->current_stream].packet_loss) {


        if (VAR_5->xma[VAR_5->current_stream].skip_packets != 0) {
            int VAR_12[2];

            VAR_12[0] = VAR_5->xma[0].skip_packets;
            VAR_12[1] = VAR_8 = 0;

            for (VAR_8 = 1; VAR_8 < VAR_5->num_streams; VAR_8++) {
                if (VAR_5->xma[VAR_8].skip_packets < VAR_12[0]) {
                    VAR_12[0] = VAR_5->xma[VAR_8].skip_packets;
                    VAR_12[1] = VAR_8;
                }
            }

            VAR_5->current_stream = VAR_12[1];
        }


        for (VAR_8 = 0; VAR_8 < VAR_5->num_streams; VAR_8++) {
            VAR_5->xma[VAR_8].skip_packets = FUNC_0(0, VAR_5->xma[VAR_8].skip_packets - 1);
        }


        for (VAR_8 = 0; VAR_8 < VAR_5->num_streams; VAR_8++) {
            VAR_10 = FUNC_1(VAR_10, VAR_5->offset[VAR_8]);
        }
        if (VAR_10 > 0) {
            int VAR_13;

            VAR_7->nb_samples = 512 * VAR_10;
            if ((VAR_13 = FUNC_3(VAR_1, VAR_7, 0)) < 0)
                return VAR_13;


            for (VAR_8 = 0; VAR_8 < VAR_5->num_streams; VAR_8++) {
                int VAR_14 = VAR_5->start_channel[VAR_8];
                FUNC_4(VAR_7->extended_data[VAR_14 + 0], VAR_5->samples[VAR_14 + 0], VAR_7->nb_samples * 4);
                if (VAR_5->xma[VAR_8].nb_channels > 1)
                    FUNC_4(VAR_7->extended_data[VAR_14 + 1], VAR_5->samples[VAR_14 + 1], VAR_7->nb_samples * 4);

                VAR_5->offset[VAR_8] -= VAR_10;
                if (VAR_5->offset[VAR_8]) {
                    FUNC_5(VAR_5->samples[VAR_14 + 0], VAR_5->samples[VAR_14 + 0] + VAR_7->nb_samples, VAR_5->offset[VAR_8] * 4 * 512);
                    if (VAR_5->xma[VAR_8].nb_channels > 1)
                        FUNC_5(VAR_5->samples[VAR_14 + 1], VAR_5->samples[VAR_14 + 1] + VAR_7->nb_samples, VAR_5->offset[VAR_8] * 4 * 512);
                }
            }

            *VAR_3 = 1;
        }
    }

    return VAR_9;
}
