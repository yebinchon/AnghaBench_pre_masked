
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct il_priv {int restart; int workqueue; TYPE_5__* cfg; int status; int wait_command_queue; TYPE_3__* ops; TYPE_2__* hw; } ;
struct TYPE_10__ {TYPE_4__* mod_params; } ;
struct TYPE_9__ {scalar_t__ restart_fw; } ;
struct TYPE_8__ {int (* dump_fh ) (struct il_priv*,int *,int) ;int (* dump_nic_error_log ) (struct il_priv*) ;} ;
struct TYPE_7__ {TYPE_1__* wiphy; } ;
struct TYPE_6__ {int fw_version; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct il_priv*) ;
 int FUNC_4 (struct il_priv*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct il_priv*) ;
 int FUNC_8 (struct il_priv*,int *,int) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;

void
FUNC_11(struct il_priv *VAR_5)
{

 FUNC_6(VAR_2, &VAR_5->status);


 FUNC_2(VAR_3, &VAR_5->status);

 FUNC_1("Loaded firmware version: %s\n", VAR_5->hw->wiphy->fw_version);

 VAR_5->ops->dump_nic_error_log(VAR_5);
 if (VAR_5->ops->dump_fh)
  VAR_5->ops->dump_fh(VAR_5, ((void*)0), 0);





 FUNC_10(&VAR_5->wait_command_queue);



 FUNC_2(VAR_4, &VAR_5->status);

 if (!FUNC_9(VAR_1, &VAR_5->status)) {
  FUNC_0(VAR_0,
         "Restarting adapter due to uCode error.\n");

  if (VAR_5->cfg->mod_params->restart_fw)
   FUNC_5(VAR_5->workqueue, &VAR_5->restart);
 }
}
