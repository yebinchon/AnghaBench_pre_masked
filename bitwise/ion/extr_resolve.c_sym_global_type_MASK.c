
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Type ;
struct TYPE_5__ {char const* external_name; int * type; int state; } ;
typedef TYPE_1__ Sym ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char const*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,char const*,int *) ;

Sym *FUNC_3(const char *VAR_2, Type *VAR_3) {
    VAR_2 = FUNC_0(VAR_2);
    Sym *VAR_4 = FUNC_2(VAR_1, VAR_2, ((void*)0));
    VAR_4->state = VAR_0;
    VAR_4->type = VAR_3;
    VAR_4->external_name = VAR_2;
    FUNC_1(VAR_2, VAR_4);
    return VAR_4;
}
