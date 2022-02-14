
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* cscheme_v; int ctx; int cscheme; } ;
typedef TYPE_1__ ShowCQTContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ FUNC_2 (float) ;
 int FUNC_3 (int ,char*,float*,float*,float*,float*,float*,float*,char*) ;

__attribute__((used)) static int FUNC_4(ShowCQTContext *VAR_2)
{
    char VAR_3[2];
    int VAR_4;

    if (FUNC_3(VAR_2->cscheme, " %f | %f | %f | %f | %f | %f %1s", &VAR_2->cscheme_v[0],
        &VAR_2->cscheme_v[1], &VAR_2->cscheme_v[2], &VAR_2->cscheme_v[3], &VAR_2->cscheme_v[4],
        &VAR_2->cscheme_v[5], VAR_3) != 6)
        goto fail;

    for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
        if (FUNC_2(VAR_2->cscheme_v[VAR_4]) || VAR_2->cscheme_v[VAR_4] < 0.0f || VAR_2->cscheme_v[VAR_4] > 1.0f)
            goto fail;

    return 0;

fail:
    FUNC_1(VAR_2->ctx, VAR_0, "invalid cscheme.\n");
    return FUNC_0(VAR_1);
}
