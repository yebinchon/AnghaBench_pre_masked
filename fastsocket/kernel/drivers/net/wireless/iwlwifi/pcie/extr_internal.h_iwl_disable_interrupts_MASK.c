
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {int status; } ;
struct iwl_trans {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct iwl_trans*,int ,int) ;

__attribute__((used)) static inline void FUNC_4(struct iwl_trans *VAR_4)
{
 struct iwl_trans_pcie *VAR_5 = FUNC_1(VAR_4);
 FUNC_2(VAR_3, &VAR_5->status);


 FUNC_3(VAR_4, VAR_2, 0x00000000);



 FUNC_3(VAR_4, VAR_1, 0xffffffff);
 FUNC_3(VAR_4, VAR_0, 0xffffffff);
 FUNC_0(VAR_4, "Disabled interrupts\n");
}
