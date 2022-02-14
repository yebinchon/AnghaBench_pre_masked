
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__** inputs; TYPE_1__* priv; } ;
struct TYPE_7__ {int channels; TYPE_3__* src; } ;
struct TYPE_6__ {scalar_t__ hrir_fmt; int gain; int lfe_gain; int gain_lfe; } ;
typedef TYPE_1__ HeadphoneContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ,char*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_4->src;
    HeadphoneContext *VAR_6 = VAR_5->priv;
    AVFilterLink *VAR_7 = VAR_5->inputs[0];

    if (VAR_6->hrir_fmt == VAR_2) {
        AVFilterLink *VAR_8 = VAR_5->inputs[1];

        if (VAR_8->channels < VAR_7->channels * 2) {
            FUNC_1(VAR_5, VAR_0, "Number of channels in HRIR stream must be >= %d.\n", VAR_7->channels * 2);
            return FUNC_0(VAR_1);
        }
    }

    VAR_6->gain_lfe = FUNC_2((VAR_6->gain - 3 * VAR_7->channels + VAR_6->lfe_gain) / 20 * VAR_3);

    return 0;
}
