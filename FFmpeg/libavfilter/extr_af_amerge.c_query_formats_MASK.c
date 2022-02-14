
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int64_t ;
typedef int buf ;
struct TYPE_16__ {int nb_inputs; int* route; TYPE_2__* in; } ;
struct TYPE_15__ {TYPE_4__** outputs; TYPE_3__** inputs; TYPE_6__* priv; } ;
struct TYPE_14__ {int in_channel_layouts; } ;
struct TYPE_13__ {int out_channel_layouts; TYPE_1__* in_channel_layouts; } ;
struct TYPE_12__ {int nb_ch; } ;
struct TYPE_11__ {int nb_channel_layouts; int* channel_layouts; } ;
typedef int AVFilterFormats ;
typedef TYPE_5__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;
typedef TYPE_6__ AMergeContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_5__*,int ,char*,...) ;
 int FUNC_6 (int **,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int *) ;
 int * FUNC_9 (int ) ;
 int VAR_6 ;
 int FUNC_10 (TYPE_5__*,int *) ;
 int FUNC_11 (TYPE_5__*,int ) ;

__attribute__((used)) static int FUNC_12(AVFilterContext *VAR_7)
{
    AMergeContext *VAR_8 = VAR_7->priv;
    int64_t VAR_9[VAR_5], VAR_10 = 0;
    AVFilterFormats *VAR_11;
    AVFilterChannelLayouts *VAR_12;
    int VAR_13, VAR_14, VAR_15 = 0, VAR_16 = 0;

    for (VAR_13 = 0; VAR_13 < VAR_8->nb_inputs; VAR_13++) {
        if (!VAR_7->inputs[VAR_13]->in_channel_layouts ||
            !VAR_7->inputs[VAR_13]->in_channel_layouts->nb_channel_layouts) {
            FUNC_5(VAR_7, VAR_2,
                   "No channel layout for input %d\n", VAR_13 + 1);
            return FUNC_0(VAR_3);
        }
        VAR_9[VAR_13] = VAR_7->inputs[VAR_13]->in_channel_layouts->channel_layouts[0];
        if (VAR_7->inputs[VAR_13]->in_channel_layouts->nb_channel_layouts > 1) {
            char VAR_17[256];
            FUNC_3(VAR_17, sizeof(VAR_17), 0, VAR_9[VAR_13]);
            FUNC_5(VAR_7, VAR_1, "Using \"%s\" for input %d\n", VAR_17, VAR_13 + 1);
        }
        VAR_8->in[VAR_13].nb_ch = FUNC_1(VAR_9[VAR_13]);
        if (VAR_8->in[VAR_13].nb_ch) {
            VAR_15++;
        } else {
            VAR_8->in[VAR_13].nb_ch = FUNC_2(VAR_9[VAR_13]);
            if (VAR_10 & VAR_9[VAR_13])
                VAR_15++;
            VAR_10 |= VAR_9[VAR_13];
        }
        VAR_16 += VAR_8->in[VAR_13].nb_ch;
    }
    if (VAR_16 > VAR_5) {
        FUNC_5(VAR_7, VAR_0, "Too many channels (max %d)\n", VAR_5);
        return FUNC_0(VAR_4);
    }
    if (VAR_15) {
        FUNC_5(VAR_7, VAR_2,
               "Input channel layouts overlap: "
               "output layout will be determined by the number of distinct input channels\n");
        for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++)
            VAR_8->route[VAR_13] = VAR_13;
        VAR_10 = FUNC_4(VAR_16);
        if (!VAR_10 && VAR_16)
            VAR_10 = 0xFFFFFFFFFFFFFFFFULL >> (64 - VAR_16);
    } else {
        int *VAR_18[VAR_5];
        int VAR_19, VAR_20 = 0;

        VAR_18[0] = VAR_8->route;
        for (VAR_13 = 1; VAR_13 < VAR_8->nb_inputs; VAR_13++)
            VAR_18[VAR_13] = VAR_18[VAR_13 - 1] + VAR_8->in[VAR_13 - 1].nb_ch;
        for (VAR_19 = 0; VAR_19 < 64; VAR_19++)
            for (VAR_13 = 0; VAR_13 < VAR_8->nb_inputs; VAR_13++)
                if ((VAR_9[VAR_13] >> VAR_19) & 1)
                    *(VAR_18[VAR_13]++) = VAR_20++;
    }
    VAR_11 = FUNC_9(VAR_6);
    if ((VAR_14 = FUNC_10(VAR_7, VAR_11)) < 0)
        return VAR_14;
    for (VAR_13 = 0; VAR_13 < VAR_8->nb_inputs; VAR_13++) {
        VAR_12 = ((void*)0);
        if ((VAR_14 = FUNC_6(&VAR_12, VAR_9[VAR_13])) < 0)
            return VAR_14;
        if ((VAR_14 = FUNC_8(VAR_12, &VAR_7->inputs[VAR_13]->out_channel_layouts)) < 0)
            return VAR_14;
    }
    VAR_12 = ((void*)0);
    if ((VAR_14 = FUNC_6(&VAR_12, VAR_10)) < 0)
        return VAR_14;
    if ((VAR_14 = FUNC_8(VAR_12, &VAR_7->outputs[0]->in_channel_layouts)) < 0)
        return VAR_14;

    return FUNC_11(VAR_7, FUNC_7());
}
