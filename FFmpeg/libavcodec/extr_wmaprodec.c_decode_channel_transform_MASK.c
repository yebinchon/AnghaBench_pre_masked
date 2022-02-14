
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ num_chgroups; int nb_channels; int channels_for_cur_subframe; int* channel_indexes_for_cur_subframe; int num_bands; int gb; int avctx; TYPE_1__* channel; TYPE_3__* chgroup; } ;
typedef TYPE_2__ WMAProDecodeCtx ;
struct TYPE_9__ {float** channel_data; int num_channels; int transform; double* decorrelation_matrix; scalar_t__* transform_band; } ;
typedef TYPE_3__ WMAProChannelGrp ;
struct TYPE_7__ {int grouped; int coeffs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int * VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (double*,int ,int) ;
 int FUNC_4 (scalar_t__*,int,int) ;

__attribute__((used)) static int FUNC_5(WMAProDecodeCtx* VAR_2)
{
    int VAR_3;






    VAR_2->num_chgroups = 0;
    if (VAR_2->nb_channels > 1) {
        int VAR_4 = VAR_2->channels_for_cur_subframe;

        if (FUNC_2(&VAR_2->gb)) {
            FUNC_0(VAR_2->avctx,
                                  "Channel transform bit");
            return VAR_0;
        }

        for (VAR_2->num_chgroups = 0; VAR_4 &&
             VAR_2->num_chgroups < VAR_2->channels_for_cur_subframe; VAR_2->num_chgroups++) {
            WMAProChannelGrp* VAR_5 = &VAR_2->chgroup[VAR_2->num_chgroups];
            float** VAR_6 = VAR_5->channel_data;
            VAR_5->num_channels = 0;
            VAR_5->transform = 0;


            if (VAR_4 > 2) {
                for (VAR_3 = 0; VAR_3 < VAR_2->channels_for_cur_subframe; VAR_3++) {
                    int VAR_7 = VAR_2->channel_indexes_for_cur_subframe[VAR_3];
                    if (!VAR_2->channel[VAR_7].grouped
                        && FUNC_2(&VAR_2->gb)) {
                        ++VAR_5->num_channels;
                        VAR_2->channel[VAR_7].grouped = 1;
                        *VAR_6++ = VAR_2->channel[VAR_7].coeffs;
                    }
                }
            } else {
                VAR_5->num_channels = VAR_4;
                for (VAR_3 = 0; VAR_3 < VAR_2->channels_for_cur_subframe; VAR_3++) {
                    int VAR_8 = VAR_2->channel_indexes_for_cur_subframe[VAR_3];
                    if (!VAR_2->channel[VAR_8].grouped)
                        *VAR_6++ = VAR_2->channel[VAR_8].coeffs;
                    VAR_2->channel[VAR_8].grouped = 1;
                }
            }


            if (VAR_5->num_channels == 2) {
                if (FUNC_2(&VAR_2->gb)) {
                    if (FUNC_2(&VAR_2->gb)) {
                        FUNC_0(VAR_2->avctx,
                                              "Unknown channel transform type");
                        return VAR_0;
                    }
                } else {
                    VAR_5->transform = 1;
                    if (VAR_2->nb_channels == 2) {
                        VAR_5->decorrelation_matrix[0] = 1.0;
                        VAR_5->decorrelation_matrix[1] = -1.0;
                        VAR_5->decorrelation_matrix[2] = 1.0;
                        VAR_5->decorrelation_matrix[3] = 1.0;
                    } else {

                        VAR_5->decorrelation_matrix[0] = 0.70703125;
                        VAR_5->decorrelation_matrix[1] = -0.70703125;
                        VAR_5->decorrelation_matrix[2] = 0.70703125;
                        VAR_5->decorrelation_matrix[3] = 0.70703125;
                    }
                }
            } else if (VAR_5->num_channels > 2) {
                if (FUNC_2(&VAR_2->gb)) {
                    VAR_5->transform = 1;
                    if (FUNC_2(&VAR_2->gb)) {
                        FUNC_1(VAR_2, VAR_5);
                    } else {

                        if (VAR_5->num_channels > 6) {
                            FUNC_0(VAR_2->avctx,
                                                  "Coupled channels > 6");
                        } else {
                            FUNC_3(VAR_5->decorrelation_matrix,
                                   VAR_1[VAR_5->num_channels],
                                   VAR_5->num_channels * VAR_5->num_channels *
                                   sizeof(*VAR_5->decorrelation_matrix));
                        }
                    }
                }
            }


            if (VAR_5->transform) {
                if (!FUNC_2(&VAR_2->gb)) {
                    int VAR_9;

                    for (VAR_9 = 0; VAR_9 < VAR_2->num_bands; VAR_9++) {
                        VAR_5->transform_band[VAR_9] = FUNC_2(&VAR_2->gb);
                    }
                } else {
                    FUNC_4(VAR_5->transform_band, 1, VAR_2->num_bands);
                }
            }
            VAR_4 -= VAR_5->num_channels;
        }
    }
    return 0;
}
