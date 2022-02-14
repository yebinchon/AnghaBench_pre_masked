
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {int status; } ;
struct iwl_trans {int op_mode; } ;


 int FUNC_0 (struct iwl_trans*,char*,int) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct iwl_trans*) ;
 int FUNC_7 (struct iwl_trans*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct iwl_trans *VAR_1)
{
 struct iwl_trans_pcie *VAR_2 = FUNC_1(VAR_1);
 bool VAR_3;
 int VAR_4;

 VAR_4 = FUNC_7(VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_1, "Error while preparing HW: %d\n", VAR_4);
  return VAR_4;
 }

 FUNC_6(VAR_1);


 FUNC_3(VAR_1);

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3)
  FUNC_8(VAR_0, &VAR_2->status);
 else
  FUNC_2(VAR_0, &VAR_2->status);
 FUNC_5(VAR_1->op_mode, VAR_3);

 return 0;
}
