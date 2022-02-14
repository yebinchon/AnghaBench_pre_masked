
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ lut_clean; int contrast; } ;
struct TYPE_6__ {TYPE_3__* param; int contrast; int var_values; int contrast_pexpr; } ;
typedef TYPE_1__ EQContext ;


 int FUNC_0 (int ,double,double) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(EQContext *VAR_0)
{
    VAR_0->contrast = FUNC_0(FUNC_1(VAR_0->contrast_pexpr, VAR_0->var_values, VAR_0), -1000.0, 1000.0);
    VAR_0->param[0].contrast = VAR_0->contrast;
    VAR_0->param[0].lut_clean = 0;
    FUNC_2(&VAR_0->param[0], VAR_0);
}
