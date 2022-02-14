
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int kind; char* sval; int enc; scalar_t__ slen; } ;
typedef TYPE_1__ Token ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(Token *VAR_1, int VAR_2, char *VAR_3) {
    Token *VAR_4 = FUNC_0(VAR_1);
    VAR_4->kind = VAR_2;
    VAR_4->sval = VAR_3;
    VAR_4->slen = FUNC_1(VAR_3) + 1;
    VAR_4->enc = VAR_0;
    FUNC_2(VAR_4);
}
