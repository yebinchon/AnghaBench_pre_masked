
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {int inta_mask; int status; } ;
struct iwl_trans {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_1 ;
 int FUNC_2 (struct iwl_trans*,int ,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static inline void FUNC_4(struct iwl_trans *VAR_2)
{
 struct iwl_trans_pcie *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_2, "Enabling interrupts\n");
 FUNC_3(VAR_1, &VAR_3->status);
 FUNC_2(VAR_2, VAR_0, VAR_3->inta_mask);
}
