
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctx; } ;
typedef TYPE_1__ CACAContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,...) ;
 char** FUNC_1 () ;

__attribute__((used)) static void FUNC_2(CACAContext *VAR_1)
{
    const char *const *VAR_2 = FUNC_1();
    int VAR_3;

    FUNC_0(VAR_1->ctx, VAR_0, "Available drivers:\n");
    for (VAR_3 = 0; VAR_2[VAR_3]; VAR_3 += 2)
        FUNC_0(VAR_1->ctx, VAR_0, "%s: %s\n", VAR_2[VAR_3], VAR_2[VAR_3 + 1]);
}
