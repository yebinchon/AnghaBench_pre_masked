
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* sval; scalar_t__ kind; } ;
typedef TYPE_1__ Token ;
struct TYPE_9__ {int line; char* name; } ;
typedef TYPE_2__ File ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (char*) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(Token *VAR_2) {
    if (!FUNC_3(VAR_2->sval))
        FUNC_2(VAR_2, "line number expected, but got %s", FUNC_5(VAR_2));
    int VAR_3 = FUNC_0(VAR_2->sval);
    VAR_2 = FUNC_4();
    if (VAR_2->kind != VAR_1)
        FUNC_2(VAR_2, "filename expected, but got %s", FUNC_5(VAR_2));
    char *VAR_4 = VAR_2->sval;
    do {
        VAR_2 = FUNC_4();
    } while (VAR_2->kind != VAR_0);
    File *VAR_5 = FUNC_1();
    VAR_5->line = VAR_3;
    VAR_5->name = VAR_4;
}
