
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int sliding; int xpos; int xend; scalar_t__ phase; scalar_t__ magnitude; } ;
typedef TYPE_1__ SpectrumSynthContext ;
typedef TYPE_2__ AVFilterContext ;






 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_0)
{
    SpectrumSynthContext *VAR_1 = VAR_0->priv;
    int VAR_2, VAR_3;

    if (!(VAR_1->magnitude && VAR_1->phase))
        return 0;

    switch (VAR_1->sliding) {
    case 130:
        VAR_2 = FUNC_2(VAR_0, VAR_1->xpos);
        VAR_1->xpos++;
        if (VAR_1->xpos >= VAR_1->xend)
            VAR_1->xpos = 0;
        break;
    case 128:
        VAR_1->xpos = VAR_1->xend - 1;
        VAR_2 = FUNC_2(VAR_0, VAR_1->xpos);
        break;
    case 129:
        VAR_1->xpos = 0;
        VAR_2 = FUNC_2(VAR_0, VAR_1->xpos);
        break;
    case 131:
        for (VAR_3 = 0; VAR_3 < VAR_1->xend; VAR_3++) {
            VAR_2 = FUNC_2(VAR_0, VAR_3);
            if (VAR_2 < 0)
                break;
        }
        break;
    default:
        FUNC_0(0);
    }

    FUNC_1(&VAR_1->magnitude);
    FUNC_1(&VAR_1->phase);
    return VAR_2;
}
