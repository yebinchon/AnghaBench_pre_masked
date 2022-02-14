
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {TYPE_2__* priv; } ;
struct TYPE_17__ {TYPE_5__* src; } ;
struct TYPE_16__ {scalar_t__ format; scalar_t__ pts; scalar_t__* extended_data; } ;
struct TYPE_15__ {int* input_state; int nb_inputs; scalar_t__ next_pts; int nb_channels; int * input_scale; TYPE_1__* fdsp; scalar_t__ planar; int * fifos; int frame_list; } ;
struct TYPE_14__ {int (* vector_dmac_scalar ) (double*,double*,int ,int) ;int (* vector_fmac_scalar ) (float*,float*,int ,int) ;} ;
typedef TYPE_2__ MixContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,void**,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__**) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (TYPE_4__*,int ,scalar_t__) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (float*,float*,int ,int) ;
 int FUNC_14 (double*,double*,int ,int) ;

__attribute__((used)) static int FUNC_15(AVFilterLink *VAR_8)
{
    AVFilterContext *VAR_9 = VAR_8->src;
    MixContext *VAR_10 = VAR_9->priv;
    AVFrame *VAR_11, *VAR_12;
    int VAR_13, VAR_14, VAR_15;

    if (VAR_10->input_state[0] & VAR_6) {

        VAR_13 = FUNC_10(VAR_10->frame_list);
        for (VAR_15 = 1; VAR_15 < VAR_10->nb_inputs; VAR_15++) {
            if (VAR_10->input_state[VAR_15] & VAR_6) {
                VAR_14 = FUNC_4(VAR_10->fifos[VAR_15]);
                if (VAR_14 < VAR_13) {
                    if (!(VAR_10->input_state[VAR_15] & VAR_5))

                        return 0;

                    VAR_13 = VAR_14;
                }
            }
        }
    } else {

        VAR_13 = VAR_7;
        for (VAR_15 = 1; VAR_15 < VAR_10->nb_inputs; VAR_15++) {
            if (VAR_10->input_state[VAR_15] & VAR_6) {
                VAR_14 = FUNC_4(VAR_10->fifos[VAR_15]);
                VAR_13 = FUNC_2(VAR_13, VAR_14);
            }
        }
        if (VAR_13 == VAR_7) {
            FUNC_9(VAR_8, VAR_0, VAR_10->next_pts);
            return 0;
        }
    }

    VAR_10->next_pts = FUNC_11(VAR_10->frame_list);
    FUNC_12(VAR_10->frame_list, VAR_13);

    FUNC_6(VAR_10, VAR_13);

    if (VAR_13 == 0)
        return 0;

    VAR_11 = FUNC_8(VAR_8, VAR_13);
    if (!VAR_11)
        return FUNC_0(VAR_4);

    VAR_12 = FUNC_8(VAR_8, VAR_13);
    if (!VAR_12) {
        FUNC_5(&VAR_11);
        return FUNC_0(VAR_4);
    }

    for (VAR_15 = 0; VAR_15 < VAR_10->nb_inputs; VAR_15++) {
        if (VAR_10->input_state[VAR_15] & VAR_6) {
            int VAR_16, VAR_17, VAR_18;

            FUNC_3(VAR_10->fifos[VAR_15], (void **)VAR_12->extended_data,
                               VAR_13);

            VAR_16 = VAR_10->planar ? VAR_10->nb_channels : 1;
            VAR_17 = VAR_13 * (VAR_10->planar ? 1 : VAR_10->nb_channels);
            VAR_17 = FUNC_1(VAR_17, 16);

            if (VAR_11->format == VAR_2 ||
                VAR_11->format == VAR_3) {
                for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++) {
                    VAR_10->fdsp->vector_fmac_scalar((float *)VAR_11->extended_data[VAR_18],
                                                (float *) VAR_12->extended_data[VAR_18],
                                                VAR_10->input_scale[VAR_15], VAR_17);
                }
            } else {
                for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++) {
                    VAR_10->fdsp->vector_dmac_scalar((double *)VAR_11->extended_data[VAR_18],
                                                (double *) VAR_12->extended_data[VAR_18],
                                                VAR_10->input_scale[VAR_15], VAR_17);
                }
            }
        }
    }
    FUNC_5(&VAR_12);

    VAR_11->pts = VAR_10->next_pts;
    if (VAR_10->next_pts != VAR_1)
        VAR_10->next_pts += VAR_13;

    return FUNC_7(VAR_8, VAR_11);
}
