
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* priv; } ;
struct TYPE_10__ {scalar_t__ eval_mode; int gamma_weight_expr; int gamma_weight_pexpr; int gamma_b_expr; int gamma_b_pexpr; int gamma_g_expr; int gamma_g_pexpr; int gamma_r_expr; int gamma_r_pexpr; int gamma_expr; int gamma_pexpr; int saturation_expr; int saturation_pexpr; int brightness_expr; int brightness_pexpr; int contrast_expr; int contrast_pexpr; } ;
typedef TYPE_1__ EQContext ;
typedef TYPE_2__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ,char*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_1)
{
    EQContext *VAR_2 = VAR_1->priv;
    int VAR_3;
    FUNC_0(VAR_2);

    if ((VAR_3 = FUNC_3(&VAR_2->contrast_pexpr, VAR_2->contrast_expr, "contrast", VAR_1)) < 0 ||
        (VAR_3 = FUNC_3(&VAR_2->brightness_pexpr, VAR_2->brightness_expr, "brightness", VAR_1)) < 0 ||
        (VAR_3 = FUNC_3(&VAR_2->saturation_pexpr, VAR_2->saturation_expr, "saturation", VAR_1)) < 0 ||
        (VAR_3 = FUNC_3(&VAR_2->gamma_pexpr, VAR_2->gamma_expr, "gamma", VAR_1)) < 0 ||
        (VAR_3 = FUNC_3(&VAR_2->gamma_r_pexpr, VAR_2->gamma_r_expr, "gamma_r", VAR_1)) < 0 ||
        (VAR_3 = FUNC_3(&VAR_2->gamma_g_pexpr, VAR_2->gamma_g_expr, "gamma_g", VAR_1)) < 0 ||
        (VAR_3 = FUNC_3(&VAR_2->gamma_b_pexpr, VAR_2->gamma_b_expr, "gamma_b", VAR_1)) < 0 ||
        (VAR_3 = FUNC_3(&VAR_2->gamma_weight_pexpr, VAR_2->gamma_weight_expr, "gamma_weight", VAR_1)) < 0 )
        return VAR_3;

    if (VAR_2->eval_mode == VAR_0) {
        FUNC_4(VAR_2);
        FUNC_2(VAR_2);
        FUNC_1(VAR_2);
        FUNC_5(VAR_2);
    }

    return 0;
}
