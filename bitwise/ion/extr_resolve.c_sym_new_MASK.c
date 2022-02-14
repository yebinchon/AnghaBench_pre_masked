
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* name; int home_package; int * decl; int kind; } ;
typedef int SymKind ;
typedef TYPE_1__ Sym ;
typedef int Decl ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int) ;

Sym *FUNC_2(SymKind VAR_1, const char *VAR_2, Decl *VAR_3) {
    Sym *VAR_4 = FUNC_1(1, sizeof(Sym));
    VAR_4->kind = VAR_1;
    VAR_4->name = VAR_2;
    VAR_4->decl = VAR_3;
    VAR_4->home_package = VAR_0;
    FUNC_0(VAR_4, VAR_4);
    return VAR_4;
}
