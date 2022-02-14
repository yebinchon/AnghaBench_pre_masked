
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_adapter {int req_pages; int cmp_pages; int msg_pages; int msgRingPA; scalar_t__ msg_ring; int dev; int cmpRingPA; scalar_t__ cmp_ring; int reqRingPA; scalar_t__ req_ring; int ringStatePA; scalar_t__ rings_state; scalar_t__ cmd_map; scalar_t__ mmioBase; scalar_t__ workqueue; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int,scalar_t__,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct pvscsi_adapter*) ;
 int FUNC_6 (struct pvscsi_adapter*) ;

__attribute__((used)) static void FUNC_7(struct pvscsi_adapter *VAR_1)
{
 FUNC_6(VAR_1);

 if (VAR_1->workqueue)
  FUNC_0(VAR_1->workqueue);

 if (VAR_1->mmioBase)
  FUNC_3(VAR_1->dev, VAR_1->mmioBase);

 FUNC_4(VAR_1->dev);

 if (VAR_1->cmd_map) {
  FUNC_5(VAR_1);
  FUNC_1(VAR_1->cmd_map);
 }

 if (VAR_1->rings_state)
  FUNC_2(VAR_1->dev, VAR_0,
        VAR_1->rings_state, VAR_1->ringStatePA);

 if (VAR_1->req_ring)
  FUNC_2(VAR_1->dev,
        VAR_1->req_pages * VAR_0,
        VAR_1->req_ring, VAR_1->reqRingPA);

 if (VAR_1->cmp_ring)
  FUNC_2(VAR_1->dev,
        VAR_1->cmp_pages * VAR_0,
        VAR_1->cmp_ring, VAR_1->cmpRingPA);

 if (VAR_1->msg_ring)
  FUNC_2(VAR_1->dev,
        VAR_1->msg_pages * VAR_0,
        VAR_1->msg_ring, VAR_1->msgRingPA);
}
