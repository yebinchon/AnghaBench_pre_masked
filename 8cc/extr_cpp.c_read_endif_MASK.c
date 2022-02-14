
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* file; } ;
typedef TYPE_2__ Token ;
struct TYPE_10__ {int include_guard; TYPE_1__* file; } ;
struct TYPE_8__ {int name; } ;
typedef TYPE_3__ CondIncl ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_2__* FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(Token *VAR_2) {
    if (FUNC_4(VAR_0) == 0)
        FUNC_0(VAR_2, "stray #endif");
    CondIncl *VAR_3 = FUNC_5(VAR_0);
    FUNC_1();




    if (!VAR_3->include_guard || VAR_3->file != VAR_2->file)
        return;
    Token *VAR_4 = FUNC_3();
    if (VAR_3->file != VAR_4->file)
        FUNC_2(VAR_1, VAR_3->file->name, VAR_3->include_guard);
}
