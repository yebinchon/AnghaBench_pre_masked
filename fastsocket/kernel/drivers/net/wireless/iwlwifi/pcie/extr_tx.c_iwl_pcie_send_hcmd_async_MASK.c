
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {int dummy; } ;
struct iwl_trans {int dummy; } ;
struct iwl_host_cmd {int flags; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_trans*,char*,int ,int) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct iwl_trans_pcie*,int ) ;
 int FUNC_4 (struct iwl_trans*,struct iwl_host_cmd*) ;

__attribute__((used)) static int FUNC_5(struct iwl_trans *VAR_2,
        struct iwl_host_cmd *VAR_3)
{
 struct iwl_trans_pcie *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;


 if (FUNC_2(VAR_3->flags & VAR_0))
  return -VAR_1;

 VAR_5 = FUNC_4(VAR_2, VAR_3);
 if (VAR_5 < 0) {
  FUNC_0(VAR_2,
   "Error sending %s: enqueue_hcmd failed: %d\n",
   FUNC_3(VAR_4, VAR_3->id), VAR_5);
  return VAR_5;
 }
 return 0;
}
