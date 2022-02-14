
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbevf_ring {int queue_index; int netdev; } ;
struct ixgbevf_adapter {int restart_queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbevf_ring*) ;
 scalar_t__ FUNC_1 (int) ;
 struct ixgbevf_adapter* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct ixgbevf_ring *VAR_1, int VAR_2)
{
 struct ixgbevf_adapter *VAR_3 = FUNC_2(VAR_1->netdev);

 FUNC_4(VAR_1->netdev, VAR_1->queue_index);



 FUNC_5();



 if (FUNC_1(FUNC_0(VAR_1) < VAR_2))
  return -VAR_0;


 FUNC_3(VAR_1->netdev, VAR_1->queue_index);
 ++VAR_3->restart_queue;
 return 0;
}
