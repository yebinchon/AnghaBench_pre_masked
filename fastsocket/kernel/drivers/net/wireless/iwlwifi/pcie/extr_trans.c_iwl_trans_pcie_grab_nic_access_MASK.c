
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans_pcie {int reg_lock; } ;
struct iwl_trans {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (struct iwl_trans*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct iwl_trans*,int ,int ,int,int) ;
 int FUNC_5 (struct iwl_trans*,int ) ;
 int FUNC_6 (struct iwl_trans*,int ,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static bool FUNC_10(struct iwl_trans *VAR_7, bool VAR_8,
      unsigned long *VAR_9)
{
 int VAR_10;
 struct iwl_trans_pcie *VAR_11 = FUNC_0(VAR_7);
 FUNC_7(&VAR_11->reg_lock, *VAR_9);


 FUNC_2(VAR_7, VAR_0,
     VAR_2);
 VAR_10 = FUNC_4(VAR_7, VAR_0,
      VAR_4,
      (VAR_3 |
       VAR_1), 15000);
 if (FUNC_9(VAR_10 < 0)) {
  FUNC_6(VAR_7, VAR_5, VAR_6);
  if (!VAR_8) {
   u32 VAR_12 = FUNC_5(VAR_7, VAR_0);
   FUNC_1(1,
      "Timeout waiting for hardware access (CSR_GP_CNTRL 0x%08x)\n",
      VAR_12);
   FUNC_8(&VAR_11->reg_lock, *VAR_9);
   return 0;
  }
 }





 FUNC_3(&VAR_11->reg_lock);
 return 1;
}
