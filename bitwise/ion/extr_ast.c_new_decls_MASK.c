
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t num_decls; int decls; } ;
typedef TYPE_1__ Decls ;
typedef int Decl ;


 int FUNC_0 (int **) ;
 TYPE_1__* FUNC_1 (int) ;

Decls *FUNC_2(Decl **VAR_0, size_t VAR_1) {
    Decls *VAR_2 = FUNC_1(sizeof(Decls));
    VAR_2->decls = FUNC_0(VAR_0);
    VAR_2->num_decls = VAR_1;
    return VAR_2;
}
