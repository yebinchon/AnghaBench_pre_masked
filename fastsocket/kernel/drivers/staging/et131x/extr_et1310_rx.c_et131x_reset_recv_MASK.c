
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_7__ {struct list_head* next; } ;
struct TYPE_5__ {TYPE_3__ RecvList; TYPE_3__ RecvPendingList; } ;
struct et131x_adapter {TYPE_1__ RxRing; } ;
struct TYPE_6__ {int list_node; } ;
typedef TYPE_2__* PMP_RFD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (struct list_head*,int ,int ) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int VAR_1 ;

void FUNC_4(struct et131x_adapter *VAR_2)
{
 PMP_RFD VAR_3;
 struct list_head *VAR_4;

 FUNC_0(FUNC_1(&VAR_2->RxRing.RecvList));




 while (!FUNC_1(&VAR_2->RxRing.RecvPendingList)) {
  VAR_4 = VAR_2->RxRing.RecvPendingList.next;

  VAR_3 = (PMP_RFD) FUNC_2(VAR_4, VAR_0, VAR_1);

  FUNC_3(&VAR_3->list_node, &VAR_2->RxRing.RecvList);
 }
}
