
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_op_mode {int dummy; } ;
struct iwl_mvm {int* queue_to_mac80211; int hw; int transport_queue_stop; int * queue_stop_count; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int,int) ;
 int VAR_0 ;
 struct iwl_mvm* FUNC_1 (struct iwl_op_mode*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct iwl_op_mode *VAR_1, int VAR_2)
{
 struct iwl_mvm *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = VAR_3->queue_to_mac80211[VAR_2];

 if (FUNC_2(VAR_4 == VAR_0))
  return;

 if (FUNC_3(&VAR_3->queue_stop_count[VAR_4]) > 0) {
  FUNC_0(VAR_3,
        "queue %d (mac80211 %d) already awake\n",
        VAR_2, VAR_4);
  return;
 }

 FUNC_4(VAR_4, &VAR_3->transport_queue_stop);

 FUNC_5(VAR_3->hw, VAR_4);
}
