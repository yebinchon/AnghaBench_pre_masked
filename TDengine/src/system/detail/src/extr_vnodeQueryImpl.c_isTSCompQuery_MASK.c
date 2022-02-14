
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* pSelectExpr; } ;
struct TYPE_5__ {scalar_t__ functionId; } ;
struct TYPE_6__ {TYPE_1__ pBase; } ;
typedef TYPE_3__ SQuery ;


 scalar_t__ VAR_0 ;

bool FUNC_0(SQuery *VAR_1) { return VAR_1->pSelectExpr[0].pBase.functionId == VAR_0; }
