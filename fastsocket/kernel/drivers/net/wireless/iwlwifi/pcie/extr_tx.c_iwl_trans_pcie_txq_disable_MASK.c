
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iwl_trans_pcie {int queue_used; scalar_t__ scd_base_addr; } ;
struct iwl_trans {int dummy; } ;


 int FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (struct iwl_trans*,char*,int) ;
 struct iwl_trans_pcie* FUNC_2 (struct iwl_trans*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (struct iwl_trans*,int) ;
 int FUNC_6 (struct iwl_trans*,int) ;
 int FUNC_7 (struct iwl_trans*,scalar_t__,void*,int ) ;
 int FUNC_8 (int,int ) ;

void FUNC_9(struct iwl_trans *VAR_0, int VAR_1)
{
 struct iwl_trans_pcie *VAR_2 = FUNC_2(VAR_0);
 u32 VAR_3 = VAR_2->scd_base_addr +
   FUNC_3(VAR_1);
 static const u32 VAR_4[4] = {};

 if (!FUNC_8(VAR_1, VAR_2->queue_used)) {
  FUNC_4(1, "queue %d not used", VAR_1);
  return;
 }

 FUNC_5(VAR_0, VAR_1);

 FUNC_7(VAR_0, VAR_3, (void *)VAR_4,
       FUNC_0(VAR_4));

 FUNC_6(VAR_0, VAR_1);

 FUNC_1(VAR_0, "Deactivate queue %d\n", VAR_1);
}
