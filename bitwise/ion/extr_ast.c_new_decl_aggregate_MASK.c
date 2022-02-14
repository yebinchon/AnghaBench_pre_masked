
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * aggregate; } ;
typedef int SrcPos ;
typedef scalar_t__ DeclKind ;
typedef TYPE_1__ Decl ;
typedef int Aggregate ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (scalar_t__,int ,char const*) ;

Decl *FUNC_2(SrcPos VAR_2, DeclKind VAR_3, const char *VAR_4, Aggregate *VAR_5) {
    FUNC_0(VAR_3 == VAR_0 || VAR_3 == VAR_1);
    Decl *VAR_6 = FUNC_1(VAR_3, VAR_2, VAR_4);
    VAR_6->aggregate = VAR_5;
    return VAR_6;
}
