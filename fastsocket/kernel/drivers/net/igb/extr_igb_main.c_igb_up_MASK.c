
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int get_link_status; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int num_q_vectors; int watchdog_task; int netdev; scalar_t__ vfs_allocated_count; TYPE_2__** q_vector; scalar_t__ msix_entries; int state; struct e1000_hw hw; } ;
struct TYPE_4__ {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (struct igb_adapter*) ;
 int FUNC_3 (struct igb_adapter*) ;
 int FUNC_4 (struct igb_adapter*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;

int FUNC_10(struct igb_adapter *VAR_4)
{
 struct e1000_hw *VAR_5 = &VAR_4->hw;
 int VAR_6;


 FUNC_2(VAR_4);

 FUNC_0(VAR_3, &VAR_4->state);

 for (VAR_6 = 0; VAR_6 < VAR_4->num_q_vectors; VAR_6++)
  FUNC_5(&(VAR_4->q_vector[VAR_6]->napi));

 if (VAR_4->msix_entries)
  FUNC_3(VAR_4);
 else
  FUNC_1(VAR_4->q_vector[0], 0);


 FUNC_7(VAR_2);
 FUNC_4(VAR_4);


 if (VAR_4->vfs_allocated_count) {
  u32 VAR_7 = FUNC_7(VAR_0);
  VAR_7 |= VAR_1;
  FUNC_9(VAR_0, VAR_7);
 }

 FUNC_6(VAR_4->netdev);


 VAR_5->mac.get_link_status = 1;
 FUNC_8(&VAR_4->watchdog_task);

 return 0;
}
