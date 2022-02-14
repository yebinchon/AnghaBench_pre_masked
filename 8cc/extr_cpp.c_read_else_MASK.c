
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Token ;
struct TYPE_3__ {scalar_t__ ctx; scalar_t__ wastrue; int * include_guard; } ;
typedef TYPE_1__ CondIncl ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(Token *VAR_2) {
    if (FUNC_3(VAR_1) == 0)
        FUNC_0(VAR_2, "stray #else");
    CondIncl *VAR_3 = FUNC_4(VAR_1);
    if (VAR_3->ctx == VAR_0)
        FUNC_0(VAR_2, "#else appears in #else");
    FUNC_1();
    VAR_3->ctx = VAR_0;
    VAR_3->include_guard = ((void*)0);
    if (VAR_3->wastrue)
        FUNC_2();
}
