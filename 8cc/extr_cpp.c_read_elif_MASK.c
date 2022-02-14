
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Token ;
struct TYPE_3__ {scalar_t__ ctx; int wastrue; int * include_guard; } ;
typedef TYPE_1__ CondIncl ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(Token *VAR_3) {
    if (FUNC_3(VAR_2) == 0)
        FUNC_0(VAR_3, "stray #elif");
    CondIncl *VAR_4 = FUNC_4(VAR_2);
    if (VAR_4->ctx == VAR_1)
        FUNC_0(VAR_3, "#elif after #else");
    VAR_4->ctx = VAR_0;
    VAR_4->include_guard = ((void*)0);
    if (VAR_4->wastrue || !FUNC_1()) {
        FUNC_2();
        return;
    }
    VAR_4->wastrue = 1;
}
