
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {int irq_lock; } ;
struct iwl_trans {int dummy; } ;


 int VAR_0 ;
 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (struct iwl_trans*,int ) ;
 int FUNC_2 (struct iwl_trans*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct iwl_trans *VAR_1)
{
 struct iwl_trans_pcie *VAR_2 = FUNC_0(VAR_1);
 unsigned long VAR_3;

 FUNC_1(VAR_1, VAR_0);

 FUNC_3(&VAR_2->irq_lock, VAR_3);
 FUNC_2(VAR_1);
 FUNC_4(&VAR_2->irq_lock, VAR_3);
}
