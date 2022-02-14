
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int gamma; scalar_t__ lut_clean; void* gamma_weight; } ;
struct TYPE_6__ {int gamma; int gamma_r; int gamma_g; int gamma_b; TYPE_3__* param; void* gamma_weight; int var_values; int gamma_weight_pexpr; int gamma_b_pexpr; int gamma_g_pexpr; int gamma_r_pexpr; int gamma_pexpr; } ;
typedef TYPE_1__ EQContext ;


 void* FUNC_0 (int ,double,double) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 void* FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(EQContext *VAR_0)
{
    int VAR_1;

    VAR_0->gamma = FUNC_0(FUNC_1(VAR_0->gamma_pexpr, VAR_0->var_values, VAR_0), 0.1, 10.0);
    VAR_0->gamma_r = FUNC_0(FUNC_1(VAR_0->gamma_r_pexpr, VAR_0->var_values, VAR_0), 0.1, 10.0);
    VAR_0->gamma_g = FUNC_0(FUNC_1(VAR_0->gamma_g_pexpr, VAR_0->var_values, VAR_0), 0.1, 10.0);
    VAR_0->gamma_b = FUNC_0(FUNC_1(VAR_0->gamma_b_pexpr, VAR_0->var_values, VAR_0), 0.1, 10.0);
    VAR_0->gamma_weight = FUNC_0(FUNC_1(VAR_0->gamma_weight_pexpr, VAR_0->var_values, VAR_0), 0.0, 1.0);

    VAR_0->param[0].gamma = VAR_0->gamma * VAR_0->gamma_g;
    VAR_0->param[1].gamma = FUNC_3(VAR_0->gamma_b / VAR_0->gamma_g);
    VAR_0->param[2].gamma = FUNC_3(VAR_0->gamma_r / VAR_0->gamma_g);

    for (VAR_1 = 0; VAR_1 < 3; VAR_1++) {
        VAR_0->param[VAR_1].gamma_weight = VAR_0->gamma_weight;
        VAR_0->param[VAR_1].lut_clean = 0;
        FUNC_2(&VAR_0->param[VAR_1], VAR_0);
    }
}
