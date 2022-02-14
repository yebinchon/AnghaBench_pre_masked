
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mod; } ;
struct TYPE_5__ {scalar_t__ kind; TYPE_1__ int_lit; } ;
typedef TYPE_2__ Expr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(Expr *VAR_2) {
    return VAR_2->kind == VAR_0 && VAR_2->int_lit.mod == VAR_1;
}
