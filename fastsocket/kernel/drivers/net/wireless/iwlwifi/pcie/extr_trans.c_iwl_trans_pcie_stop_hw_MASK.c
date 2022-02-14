
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {int status; int irq_lock; } ;
struct iwl_trans {int op_mode; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct iwl_trans*) ;
 int FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct iwl_trans*) ;
 int FUNC_7 (struct iwl_trans*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_11(struct iwl_trans *VAR_1,
       bool VAR_2)
{
 struct iwl_trans_pcie *VAR_3 = FUNC_0(VAR_1);
 bool VAR_4;
 unsigned long VAR_5;

 FUNC_9(&VAR_3->irq_lock, VAR_5);
 FUNC_2(VAR_1);
 FUNC_10(&VAR_3->irq_lock, VAR_5);

 FUNC_6(VAR_1);

 FUNC_9(&VAR_3->irq_lock, VAR_5);
 FUNC_2(VAR_1);
 FUNC_10(&VAR_3->irq_lock, VAR_5);

 FUNC_7(VAR_1);

 if (!VAR_2) {




  FUNC_3(VAR_1);







  VAR_4 = FUNC_4(VAR_1);
  if (VAR_4)
   FUNC_8(VAR_0, &VAR_3->status);
  else
   FUNC_1(VAR_0, &VAR_3->status);
  FUNC_5(VAR_1->op_mode, VAR_4);
 }
}
