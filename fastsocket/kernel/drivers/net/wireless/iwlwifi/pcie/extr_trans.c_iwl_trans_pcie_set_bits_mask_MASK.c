
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans_pcie {int reg_lock; } ;
struct iwl_trans {int dummy; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (struct iwl_trans*,int ,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct iwl_trans *VAR_0, u32 VAR_1,
      u32 VAR_2, u32 VAR_3)
{
 struct iwl_trans_pcie *VAR_4 = FUNC_0(VAR_0);
 unsigned long VAR_5;

 FUNC_2(&VAR_4->reg_lock, VAR_5);
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_3(&VAR_4->reg_lock, VAR_5);
}
