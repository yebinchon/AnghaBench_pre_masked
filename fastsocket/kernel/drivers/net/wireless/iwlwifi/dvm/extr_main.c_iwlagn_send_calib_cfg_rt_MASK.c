
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iwl_priv {int dummy; } ;
struct iwl_host_cmd {int data; int len; int id; } ;
struct TYPE_3__ {int start; int is_enable; } ;
struct TYPE_4__ {TYPE_1__ once; } ;
struct iwl_calib_cfg_cmd {TYPE_2__ ucd_calib_cfg; } ;
typedef int calib_cfg_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iwl_priv*,struct iwl_host_cmd*) ;
 int FUNC_2 (struct iwl_calib_cfg_cmd*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct iwl_priv *VAR_2, u32 VAR_3)
{
 struct iwl_calib_cfg_cmd VAR_4;
 struct iwl_host_cmd VAR_5 = {
  .id = VAR_0,
  .len = sizeof(struct iwl_calib_cfg_cmd), 
  .data = &VAR_4, 
 };

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.ucd_calib_cfg.once.is_enable = VAR_1;
 VAR_4.ucd_calib_cfg.once.start = FUNC_0(VAR_3);

 return FUNC_1(VAR_2, &VAR_5);
}
