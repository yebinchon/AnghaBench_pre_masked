
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct et131x_adapter {TYPE_1__* pdev; int RxRing; } ;
struct TYPE_9__ {int list_node; } ;
struct TYPE_8__ {scalar_t__ NumRfd; int RecvLookaside; int nReadyRecv; int RecvList; } ;
struct TYPE_7__ {int dev; } ;
typedef TYPE_2__ RX_RING_t ;
typedef TYPE_3__* PMP_RFD ;
typedef TYPE_3__ MP_RFD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct et131x_adapter*,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(struct et131x_adapter *VAR_4)
{
 int VAR_5 = -VAR_0;
 PMP_RFD VAR_6 = ((void*)0);
 uint32_t VAR_7;
 uint32_t VAR_8 = 0;
 RX_RING_t *VAR_9 = ((void*)0);


 VAR_9 = (RX_RING_t *) &VAR_4->RxRing;


 for (VAR_7 = 0; VAR_7 < VAR_9->NumRfd; VAR_7++) {
  VAR_6 = (MP_RFD *) FUNC_2(VAR_9->RecvLookaside,
           VAR_1 | VAR_2);

  if (!VAR_6) {
   FUNC_0(&VAR_4->pdev->dev,
      "Couldn't alloc RFD out of kmem_cache\n");
   VAR_5 = -VAR_0;
   continue;
  }

  VAR_5 = FUNC_1(VAR_4, VAR_6);
  if (VAR_5 != 0) {
   FUNC_0(&VAR_4->pdev->dev,
      "Couldn't alloc packet for RFD\n");
   FUNC_3(VAR_9->RecvLookaside, VAR_6);
   continue;
  }


  FUNC_4(&VAR_6->list_node, &VAR_9->RecvList);


  VAR_9->nReadyRecv++;
  VAR_8++;
 }

 if (VAR_8 > VAR_3)
  VAR_5 = 0;

 VAR_9->NumRfd = VAR_8;

 if (VAR_5 != 0) {
  FUNC_3(VAR_9->RecvLookaside, VAR_6);
  FUNC_0(&VAR_4->pdev->dev,
     "Allocation problems in et131x_init_recv\n");
 }
 return VAR_5;
}
