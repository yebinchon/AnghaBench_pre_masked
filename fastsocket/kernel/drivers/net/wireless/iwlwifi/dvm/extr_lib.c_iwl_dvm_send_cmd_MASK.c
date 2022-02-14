
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {scalar_t__ ucode_owner; int trans; int mutex; int ucode_loaded; int status; } ;
struct iwl_host_cmd {int flags; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,char*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct iwl_priv*,char*,char*) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct iwl_priv*) ;
 scalar_t__ FUNC_5 (struct iwl_priv*) ;
 int FUNC_6 (int ,struct iwl_host_cmd*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

int FUNC_9(struct iwl_priv *VAR_5, struct iwl_host_cmd *VAR_6)
{
 if (FUNC_5(VAR_5) || FUNC_4(VAR_5)) {
  FUNC_2(VAR_5, "Not sending command - %s KILL\n",
    FUNC_5(VAR_5) ? "RF" : "CT");
  return -VAR_2;
 }

 if (FUNC_8(VAR_4, &VAR_5->status)) {
  FUNC_1(VAR_5, "Command %s failed: FW Error\n",
   FUNC_3(VAR_6->id));
  return -VAR_2;
 }





 if (!VAR_5->ucode_loaded) {
  FUNC_1(VAR_5, "Fw not loaded - dropping CMD: %x\n", VAR_6->id);
  return -VAR_2;
 }






 if (!(VAR_6->flags & VAR_0))
  FUNC_7(&VAR_5->mutex);

 if (VAR_5->ucode_owner == VAR_3 &&
     !(VAR_6->flags & VAR_1)) {
  FUNC_0(VAR_5, "tm own the uCode, no regular hcmd send\n");
  return -VAR_2;
 }

 return FUNC_6(VAR_5->trans, VAR_6);
}
