
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int is_vararg; int position; int space; int bol; int * hideset; int kind; } ;
typedef TYPE_1__ Token ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static Token *FUNC_1(int VAR_1, bool VAR_2) {
    Token *VAR_3 = FUNC_0(sizeof(Token));
    VAR_3->kind = VAR_0;
    VAR_3->is_vararg = VAR_2;
    VAR_3->hideset = ((void*)0);
    VAR_3->position = VAR_1;
    VAR_3->space = 0;
    VAR_3->bol = 0;
    return VAR_3;
}
