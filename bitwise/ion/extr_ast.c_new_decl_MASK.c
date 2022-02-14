
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* name; int pos; int kind; } ;
typedef int SrcPos ;
typedef int DeclKind ;
typedef TYPE_1__ Decl ;


 TYPE_1__* FUNC_0 (int) ;

Decl *FUNC_1(DeclKind VAR_0, SrcPos VAR_1, const char *VAR_2) {
    Decl *VAR_3 = FUNC_0(sizeof(Decl));
    VAR_3->kind = VAR_0;
    VAR_3->pos = VAR_1;
    VAR_3->name = VAR_2;
    return VAR_3;
}
