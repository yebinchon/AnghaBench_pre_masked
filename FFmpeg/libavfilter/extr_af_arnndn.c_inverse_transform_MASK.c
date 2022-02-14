
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int re; int im; } ;
struct TYPE_7__ {int txi; int (* txi_fn ) (int ,TYPE_2__*,TYPE_2__*,int) ;} ;
typedef TYPE_1__ DenoiseState ;
typedef TYPE_2__ AVComplexFloat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_1(DenoiseState *VAR_2, float *VAR_3, const AVComplexFloat *VAR_4)
{
    AVComplexFloat VAR_5[VAR_1];
    AVComplexFloat VAR_6[VAR_1];

    for (int VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
        VAR_5[VAR_7] = VAR_4[VAR_7];

    for (int VAR_8 = VAR_0; VAR_8 < VAR_1; VAR_8++) {
        VAR_5[VAR_8].re = VAR_5[VAR_1 - VAR_8].re;
        VAR_5[VAR_8].im = -VAR_5[VAR_1 - VAR_8].im;
    }

    VAR_2->txi_fn(VAR_2->txi, VAR_6, VAR_5, sizeof(float));

    for (int VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
        VAR_3[VAR_9] = VAR_6[VAR_9].re / VAR_1;
}
