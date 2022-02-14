
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ i; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
typedef TYPE_2__ Walker ;
struct TYPE_8__ {scalar_t__ op; int op2; } ;
typedef TYPE_3__ Expr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(Walker *VAR_2, Expr *VAR_3){
  if( VAR_3->op==VAR_0 ) VAR_3->op2 += VAR_2->u.i;
  return VAR_1;
}
