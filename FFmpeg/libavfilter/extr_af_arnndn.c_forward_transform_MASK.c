
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {float re; scalar_t__ im; } ;
struct TYPE_9__ {int tx; int (* tx_fn ) (int ,TYPE_2__*,TYPE_2__*,int) ;} ;
typedef TYPE_1__ DenoiseState ;
typedef TYPE_2__ AVComplexFloat ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_2__*,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_2(DenoiseState *VAR_2, AVComplexFloat *VAR_3, const float *VAR_4)
{
    AVComplexFloat VAR_5[VAR_1];
    AVComplexFloat VAR_6[VAR_1];

    for (int VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
        VAR_5[VAR_7].re = VAR_4[VAR_7];
        VAR_5[VAR_7].im = 0;
    }

    VAR_2->tx_fn(VAR_2->tx, VAR_6, VAR_5, sizeof(float));

    FUNC_0(VAR_3, VAR_6, VAR_0);
}
