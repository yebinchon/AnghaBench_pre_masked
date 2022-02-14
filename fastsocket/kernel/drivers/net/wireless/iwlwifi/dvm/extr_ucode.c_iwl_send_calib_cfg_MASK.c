
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_priv {int dummy; } ;
struct iwl_host_cmd {int data; int len; int id; } ;
struct TYPE_4__ {void* send_res; void* start; void* is_enable; } ;
struct TYPE_3__ {int flags; TYPE_2__ once; } ;
struct iwl_calib_cfg_cmd {TYPE_1__ ucd_calib_cfg; } ;
typedef int calib_cfg_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct iwl_priv*,struct iwl_host_cmd*) ;
 int FUNC_1 (struct iwl_calib_cfg_cmd*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct iwl_priv *VAR_3)
{
 struct iwl_calib_cfg_cmd VAR_4;
 struct iwl_host_cmd VAR_5 = {
  .id = VAR_0,
  .len = sizeof(struct iwl_calib_cfg_cmd), 
  .data = &VAR_4, 
 };

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.ucd_calib_cfg.once.is_enable = VAR_2;
 VAR_4.ucd_calib_cfg.once.start = VAR_2;
 VAR_4.ucd_calib_cfg.once.send_res = VAR_2;
 VAR_4.ucd_calib_cfg.flags =
  VAR_1;

 return FUNC_0(VAR_3, &VAR_5);
}
