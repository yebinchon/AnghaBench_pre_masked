
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {int status; int irq_lock; } ;
struct iwl_trans {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct iwl_trans*,int ,int ) ;
 int FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (struct iwl_trans*) ;
 int FUNC_6 (struct iwl_trans*) ;
 int FUNC_7 (struct iwl_trans*) ;
 int FUNC_8 (struct iwl_trans*) ;
 int FUNC_9 (struct iwl_trans*,int ,int ) ;
 int FUNC_10 (struct iwl_trans*,int ,int ) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(struct iwl_trans *VAR_11)
{
 struct iwl_trans_pcie *VAR_12 = FUNC_0(VAR_11);
 unsigned long VAR_13;


 FUNC_11(&VAR_12->irq_lock, VAR_13);
 FUNC_3(VAR_11);
 FUNC_12(&VAR_12->irq_lock, VAR_13);


 FUNC_6(VAR_11);
 if (FUNC_13(VAR_6, &VAR_12->status)) {
  FUNC_8(VAR_11);
  FUNC_7(VAR_11);


  FUNC_10(VAR_11, VAR_0,
          VAR_1);
  FUNC_14(5);
 }


 FUNC_2(VAR_11, VAR_2,
        VAR_3);


 FUNC_5(VAR_11);




 FUNC_11(&VAR_12->irq_lock, VAR_13);
 FUNC_3(VAR_11);
 FUNC_12(&VAR_12->irq_lock, VAR_13);

 FUNC_4(VAR_11);


 FUNC_9(VAR_11, VAR_4, VAR_5);


 FUNC_1(VAR_7, &VAR_12->status);
 FUNC_1(VAR_8, &VAR_12->status);
 FUNC_1(VAR_6, &VAR_12->status);
 FUNC_1(VAR_10, &VAR_12->status);
 FUNC_1(VAR_9, &VAR_12->status);
}
