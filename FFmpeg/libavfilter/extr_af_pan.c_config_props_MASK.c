
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int buf ;
struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {int channel_layout; int channels; int sample_rate; int format; TYPE_3__* dst; } ;
struct TYPE_7__ {int nb_output_channels; int** gain; int out_channel_layout; int* channel_map; int need_renorm; scalar_t__ pure_gains; int swr; scalar_t__ need_renumber; } ;
typedef TYPE_1__ PanContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int) ;
 int VAR_7 ;
 int FUNC_2 (TYPE_3__*,int ,char*,...) ;
 scalar_t__ FUNC_3 (int ,char*,int,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*,int,char*,char*,double,int) ;
 int FUNC_6 (int ,int,int ,int ,int,int ,int ,int ,TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int*) ;
 int FUNC_9 (int ,double*,int) ;

__attribute__((used)) static int FUNC_10(AVFilterLink *VAR_8)
{
    AVFilterContext *VAR_9 = VAR_8->dst;
    PanContext *VAR_10 = VAR_9->priv;
    char VAR_11[1024], *VAR_12;
    int VAR_13, VAR_14, VAR_15, VAR_16;
    double VAR_17;

    if (VAR_10->need_renumber) {

        for (VAR_13 = VAR_14 = 0; VAR_13 < VAR_7; VAR_13++) {
            if ((VAR_8->channel_layout >> VAR_13) & 1) {
                for (VAR_15 = 0; VAR_15 < VAR_10->nb_output_channels; VAR_15++)
                    VAR_10->gain[VAR_15][VAR_14] = VAR_10->gain[VAR_15][VAR_13];
                VAR_14++;
            }
        }
    }



    if (VAR_8->channels > VAR_7 ||
        VAR_10->nb_output_channels > VAR_7) {
        FUNC_2(VAR_9, VAR_1,
               "af_pan supports a maximum of %d channels. "
               "Feel free to ask for a higher limit.\n", VAR_7);
        return VAR_0;
    }


    VAR_10->swr = FUNC_6(VAR_10->swr,
                                  VAR_10->out_channel_layout, VAR_8->format, VAR_8->sample_rate,
                                  VAR_8->channel_layout, VAR_8->format, VAR_8->sample_rate,
                                  0, VAR_9);
    if (!VAR_10->swr)
        return FUNC_0(VAR_6);
    if (!VAR_8->channel_layout) {
        if (FUNC_3(VAR_10->swr, "ich", VAR_8->channels, 0) < 0)
            return FUNC_0(VAR_5);
    }
    if (!VAR_10->out_channel_layout) {
        if (FUNC_3(VAR_10->swr, "och", VAR_10->nb_output_channels, 0) < 0)
            return FUNC_0(VAR_5);
    }


    if (VAR_10->pure_gains) {


        for (VAR_13 = 0; VAR_13 < VAR_10->nb_output_channels; VAR_13++) {
            int VAR_18 = -1;
            for (VAR_14 = 0; VAR_14 < VAR_8->channels; VAR_14++) {
                if (VAR_10->gain[VAR_13][VAR_14]) {
                    VAR_18 = VAR_14;
                    break;
                }
            }
            VAR_10->channel_map[VAR_13] = VAR_18;
        }

        FUNC_3(VAR_10->swr, "icl", VAR_10->out_channel_layout, 0);
        FUNC_3(VAR_10->swr, "uch", VAR_10->nb_output_channels, 0);
        FUNC_8(VAR_10->swr, VAR_10->channel_map);
    } else {

        for (VAR_13 = 0; VAR_13 < VAR_10->nb_output_channels; VAR_13++) {
            if (!((VAR_10->need_renorm >> VAR_13) & 1))
                continue;
            VAR_17 = 0;
            for (VAR_14 = 0; VAR_14 < VAR_8->channels; VAR_14++)
                VAR_17 += FUNC_4(VAR_10->gain[VAR_13][VAR_14]);
            if (VAR_17 > -1E-5 && VAR_17 < 1E-5) {

                if (VAR_17)
                    FUNC_2(VAR_9, VAR_4,
                           "Degenerate coefficients while renormalizing\n");
                continue;
            }
            for (VAR_14 = 0; VAR_14 < VAR_8->channels; VAR_14++)
                VAR_10->gain[VAR_13][VAR_14] /= VAR_17;
        }
        FUNC_3(VAR_10->swr, "icl", VAR_8->channel_layout, 0);
        FUNC_3(VAR_10->swr, "ocl", VAR_10->out_channel_layout, 0);
        FUNC_9(VAR_10->swr, VAR_10->gain[0], VAR_10->gain[1] - VAR_10->gain[0]);
    }

    VAR_16 = FUNC_7(VAR_10->swr);
    if (VAR_16 < 0)
        return VAR_16;


    for (VAR_13 = 0; VAR_13 < VAR_10->nb_output_channels; VAR_13++) {
        VAR_12 = VAR_11;
        for (VAR_14 = 0; VAR_14 < VAR_8->channels; VAR_14++) {
            VAR_16 = FUNC_5(VAR_12, VAR_11 + sizeof(VAR_11) - VAR_12, "%s%.3g i%d",
                         VAR_14 ? " + " : "", VAR_10->gain[VAR_13][VAR_14], VAR_14);
            VAR_12 += FUNC_1(VAR_11 + sizeof(VAR_11) - VAR_12, VAR_16);
        }
        FUNC_2(VAR_9, VAR_3, "o%d = %s\n", VAR_13, VAR_11);
    }

    if (VAR_10->pure_gains) {
        FUNC_2(VAR_9, VAR_2, "Pure channel mapping detected:");
        for (VAR_13 = 0; VAR_13 < VAR_10->nb_output_channels; VAR_13++)
            if (VAR_10->channel_map[VAR_13] < 0)
                FUNC_2(VAR_9, VAR_2, " M");
            else
                FUNC_2(VAR_9, VAR_2, " %d", VAR_10->channel_map[VAR_13]);
        FUNC_2(VAR_9, VAR_2, "\n");
        return 0;
    }
    return 0;
}
