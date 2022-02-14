
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {int status; } ;
struct iwl_trans {int dummy; } ;
struct iwl_host_cmd {int flags; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_trans*,char*,int ) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct iwl_trans*,struct iwl_host_cmd*) ;
 int FUNC_3 (struct iwl_trans*,struct iwl_host_cmd*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

int FUNC_5(struct iwl_trans *VAR_5, struct iwl_host_cmd *VAR_6)
{
 struct iwl_trans_pcie *VAR_7 = FUNC_1(VAR_5);

 if (FUNC_4(VAR_3, &VAR_7->status))
  return -VAR_1;

 if (FUNC_4(VAR_4, &VAR_7->status)) {
  FUNC_0(VAR_5, "Dropping CMD 0x%x: RF KILL\n",
      VAR_6->id);
  return -VAR_2;
 }

 if (VAR_6->flags & VAR_0)
  return FUNC_2(VAR_5, VAR_6);


 return FUNC_3(VAR_5, VAR_6);
}
