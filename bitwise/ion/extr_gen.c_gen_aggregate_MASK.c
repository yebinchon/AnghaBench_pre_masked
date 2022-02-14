
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; int aggregate; scalar_t__ is_incomplete; } ;
typedef TYPE_1__ Decl ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(Decl *VAR_2) {
    FUNC_0(VAR_2->kind == VAR_0 || VAR_2->kind == VAR_1);
    if (VAR_2->is_incomplete) {
        return;
    }
    FUNC_2("%s %s {", VAR_2->kind == VAR_0 ? "struct" : "union", FUNC_3(VAR_2));
    FUNC_1(VAR_2->aggregate);
    FUNC_2("};");
}
