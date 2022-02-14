
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {double blknum; int* rms; scalar_t__* peaks; } ;
struct TYPE_7__ {int nb_channels; TYPE_2__* chstats; } ;
typedef TYPE_1__ DRMeterContext ;
typedef TYPE_2__ ChannelStats ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 float FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ,char*,float,...) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (float) ;
 float FUNC_4 (float) ;

__attribute__((used)) static void FUNC_5(AVFilterContext *VAR_1)
{
    DRMeterContext *VAR_2 = VAR_1->priv;
    float VAR_3 = 0;
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2->nb_channels; VAR_4++) {
        ChannelStats *VAR_5 = &VAR_2->chstats[VAR_4];
        float VAR_6, VAR_7, VAR_8 = 0;
        int VAR_9, VAR_10, VAR_11 = 0;

        FUNC_2(VAR_5);

        for (VAR_9 = 0; VAR_9 <= 10000; VAR_9++) {
            if (VAR_5->peaks[10000 - VAR_9]) {
                if (VAR_11)
                    break;
                VAR_11 = 1;
            }
        }

        VAR_7 = (10000 - VAR_9) / 10000.;

        for (VAR_9 = 10000, VAR_10 = 0; VAR_9 >= 0 && VAR_10 < 0.2 * VAR_5->blknum; VAR_9--) {
            if (VAR_5->rms[VAR_9]) {
                VAR_8 += FUNC_0(VAR_9 / 10000.) * VAR_5->rms[VAR_9];
                VAR_10 += VAR_5->rms[VAR_9];
            }
        }

        VAR_6 = 20 * FUNC_3(VAR_7 / FUNC_4(VAR_8 / (0.2 * VAR_5->blknum)));
        VAR_3 += VAR_6;
        FUNC_1(VAR_1, VAR_0, "Channel %d: DR: %.1f\n", VAR_4 + 1, VAR_6);
    }

    FUNC_1(VAR_1, VAR_0, "Overall DR: %.1f\n", VAR_3 / VAR_2->nb_channels);
}
