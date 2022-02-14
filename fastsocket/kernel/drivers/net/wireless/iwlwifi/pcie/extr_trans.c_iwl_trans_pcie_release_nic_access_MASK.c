
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {int reg_lock; } ;
struct iwl_trans {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iwl_trans*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct iwl_trans *VAR_2,
           unsigned long *VAR_3)
{
 struct iwl_trans_pcie *VAR_4 = FUNC_0(VAR_2);

 FUNC_3(&VAR_4->reg_lock);





 FUNC_1(&VAR_4->reg_lock);

 FUNC_2(VAR_2, VAR_0,
       VAR_1);






 FUNC_4();
 FUNC_5(&VAR_4->reg_lock, *VAR_3);
}
