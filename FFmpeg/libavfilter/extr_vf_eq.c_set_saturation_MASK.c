
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ lut_clean; int contrast; } ;
struct TYPE_6__ {TYPE_3__* param; int saturation; int var_values; int saturation_pexpr; } ;
typedef TYPE_1__ EQContext ;


 int FUNC_0 (int ,double,double) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(EQContext *VAR_0)
{
    int VAR_1;

    VAR_0->saturation = FUNC_0(FUNC_1(VAR_0->saturation_pexpr, VAR_0->var_values, VAR_0), 0.0, 3.0);

    for (VAR_1 = 1; VAR_1 < 3; VAR_1++) {
        VAR_0->param[VAR_1].contrast = VAR_0->saturation;
        VAR_0->param[VAR_1].lut_clean = 0;
        FUNC_2(&VAR_0->param[VAR_1], VAR_0);
    }
}
