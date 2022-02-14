
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {int status; } ;
struct iwl_trans {int op_mode; } ;
struct fw_img {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (struct iwl_trans*) ;
 int FUNC_6 (struct iwl_trans*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct iwl_trans*,struct fw_img const*) ;
 int FUNC_9 (struct iwl_trans*) ;
 scalar_t__ FUNC_10 (struct iwl_trans*) ;
 int FUNC_11 (struct iwl_trans*,int ,int) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct iwl_trans *VAR_8,
       const struct fw_img *VAR_9, bool VAR_10)
{
 struct iwl_trans_pcie *VAR_11 = FUNC_1(VAR_8);
 int VAR_12;
 bool VAR_13;


 if (FUNC_10(VAR_8)) {
  FUNC_2(VAR_8, "Exit HW not ready\n");
  return -VAR_4;
 }

 FUNC_3(VAR_6, &VAR_11->status);

 FUNC_5(VAR_8);


 VAR_13 = FUNC_6(VAR_8);
 if (VAR_13)
  FUNC_12(VAR_7, &VAR_11->status);
 else
  FUNC_3(VAR_7, &VAR_11->status);
 FUNC_7(VAR_8->op_mode, VAR_13);
 if (VAR_13 && !VAR_10)
  return -VAR_5;

 FUNC_11(VAR_8, VAR_0, 0xFFFFFFFF);

 VAR_12 = FUNC_9(VAR_8);
 if (VAR_12) {
  FUNC_0(VAR_8, "Unable to init nic\n");
  return VAR_12;
 }


 FUNC_11(VAR_8, VAR_2, VAR_3);
 FUNC_11(VAR_8, VAR_2,
      VAR_1);


 FUNC_11(VAR_8, VAR_0, 0xFFFFFFFF);
 FUNC_4(VAR_8);


 FUNC_11(VAR_8, VAR_2, VAR_3);
 FUNC_11(VAR_8, VAR_2, VAR_3);


 return FUNC_8(VAR_8, VAR_9);
}
