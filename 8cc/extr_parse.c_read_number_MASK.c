
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* sval; } ;
typedef TYPE_1__ Token ;
typedef int Node ;


 int * FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static Node *FUNC_4(Token *VAR_0) {
    char *VAR_1 = VAR_0->sval;
    bool VAR_2 = FUNC_3(VAR_1, ".pP") || (FUNC_2(VAR_1, "0x", 2) && FUNC_3(VAR_1, "eE"));
    return VAR_2 ? FUNC_0(VAR_0) : FUNC_1(VAR_0);
}
