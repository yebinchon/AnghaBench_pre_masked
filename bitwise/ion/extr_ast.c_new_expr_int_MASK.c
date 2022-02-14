
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TokenSuffix ;
typedef int TokenMod ;
struct TYPE_5__ {unsigned long long val; int suffix; int mod; } ;
struct TYPE_6__ {TYPE_1__ int_lit; } ;
typedef int SrcPos ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ) ;

Expr *FUNC_1(SrcPos VAR_1, unsigned long long VAR_2, TokenMod VAR_3, TokenSuffix VAR_4) {
    Expr *VAR_5 = FUNC_0(VAR_0, VAR_1);
    VAR_5->int_lit.val = VAR_2;
    VAR_5->int_lit.mod = VAR_3;
    VAR_5->int_lit.suffix = VAR_4;
    return VAR_5;
}
