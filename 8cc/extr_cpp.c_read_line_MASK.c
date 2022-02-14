
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ kind; char* sval; } ;
typedef TYPE_1__ Token ;
struct TYPE_8__ {int line; char* name; } ;
typedef TYPE_2__ File ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7() {
    Token *VAR_3 = FUNC_5();
    if (VAR_3->kind != VAR_1 || !FUNC_4(VAR_3->sval))
        FUNC_2(VAR_3, "number expected after #line, but got %s", FUNC_6(VAR_3));
    int VAR_4 = FUNC_0(VAR_3->sval);
    VAR_3 = FUNC_5();
    char *VAR_5 = ((void*)0);
    if (VAR_3->kind == VAR_2) {
        VAR_5 = VAR_3->sval;
        FUNC_3();
    } else if (VAR_3->kind != VAR_0) {
        FUNC_2(VAR_3, "newline or a source name are expected, but got %s", FUNC_6(VAR_3));
    }
    File *VAR_6 = FUNC_1();
    VAR_6->line = VAR_4;
    if (VAR_5)
        VAR_6->name = VAR_5;
}
