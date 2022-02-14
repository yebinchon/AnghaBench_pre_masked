
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ kind; int count; int file; int sval; } ;
typedef TYPE_1__ Token ;
struct TYPE_8__ {int file; int include_guard; } ;
typedef TYPE_2__ CondIncl ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_2__* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7() {
    Token *VAR_3 = FUNC_3();
    if (VAR_3->kind != VAR_0)
        FUNC_1(VAR_3, "identifier expected, but got %s", FUNC_5(VAR_3));
    FUNC_2();
    FUNC_0(!FUNC_4(VAR_2, VAR_3->sval));
    if (VAR_3->count == 2) {


        CondIncl *VAR_4 = FUNC_6(VAR_1);
        VAR_4->include_guard = VAR_3->sval;
        VAR_4->file = VAR_3->file;
    }
}
