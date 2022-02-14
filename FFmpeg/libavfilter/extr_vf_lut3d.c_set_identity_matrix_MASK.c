
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rgbvec {int r; int g; int b; } ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {struct rgbvec* lut; } ;
typedef TYPE_1__ LUT3DContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0, int VAR_1)
{
    LUT3DContext *VAR_2 = VAR_0->priv;
    int VAR_3, VAR_4, VAR_5, VAR_6;
    const int VAR_7 = VAR_1 * VAR_1;
    const float VAR_8 = 1. / (VAR_1 - 1);

    VAR_3 = FUNC_0(VAR_0, VAR_1);
    if (VAR_3 < 0)
        return VAR_3;

    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
        for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
            for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
                struct rgbvec *VAR_9 = &VAR_2->lut[VAR_6 * VAR_7 + VAR_5 * VAR_1 + VAR_4];
                VAR_9->r = VAR_6 * VAR_8;
                VAR_9->g = VAR_5 * VAR_8;
                VAR_9->b = VAR_4 * VAR_8;
            }
        }
    }

    return 0;
}
