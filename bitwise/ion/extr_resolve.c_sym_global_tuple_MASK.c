
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int Type ;
struct TYPE_6__ {char const* external_name; int reachable; int * type; int state; } ;
typedef TYPE_1__ Sym ;
typedef int Package ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_3 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char const*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,char const*,int *) ;

Sym *FUNC_5(const char *VAR_6, Type *VAR_7) {
    Sym *VAR_8 = FUNC_4(VAR_2, VAR_6, ((void*)0));
    VAR_8->state = VAR_1;
    VAR_8->type = VAR_7;
    VAR_8->external_name = VAR_6;
    Package *VAR_9 = FUNC_1(VAR_3);
    FUNC_3(VAR_6, VAR_8);
    FUNC_2(VAR_9);
    FUNC_0(VAR_5, VAR_8);
    FUNC_0(VAR_4, VAR_8);
    VAR_8->reachable = VAR_0;
    return VAR_8;
}
