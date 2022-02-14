
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* orderType; } ;
struct TYPE_8__ {int orderColId; void* order; } ;
struct TYPE_9__ {TYPE_1__ groupbyExpr; TYPE_2__ order; } ;
typedef TYPE_3__ SSqlCmd ;
typedef int SMeterMetaInfo ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int * FUNC_2 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_3(SSqlCmd* VAR_2) {

  VAR_2->order.order = VAR_1;
  SMeterMetaInfo* VAR_3 = FUNC_2(VAR_2, 0);

  if (FUNC_1(VAR_2)) {
    VAR_2->order.order = VAR_1;
    VAR_2->order.orderColId = VAR_0;
  } else {
    VAR_2->order.orderColId = -1;
  }


  if (FUNC_0(VAR_3)) {
    VAR_2->groupbyExpr.orderType = VAR_1;
  }
}
