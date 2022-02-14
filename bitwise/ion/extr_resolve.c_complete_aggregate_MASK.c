
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* sym; } ;
typedef TYPE_2__ Type ;
struct TYPE_7__ {int decl; } ;
typedef int Aggregate ;


 TYPE_2__* FUNC_0 (TYPE_2__*,int *,int) ;
 scalar_t__ FUNC_1 (int ) ;

Type *FUNC_2(Type *VAR_0, Aggregate *VAR_1) {
    return FUNC_0(VAR_0, VAR_1, VAR_0->sym && FUNC_1(VAR_0->sym->decl));
}
