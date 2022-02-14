
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_drv {int fw_index; TYPE_2__* trans; int firmware_name; TYPE_1__* cfg; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {char* fw_name_pre; int ucode_api_max; int ucode_api_min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_drv*,char*,char*,int ) ;
 int FUNC_1 (struct iwl_drv*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int,int ,int ,int ,struct iwl_drv*,int ) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static int FUNC_5(struct iwl_drv *VAR_6, bool VAR_7)
{
 const char *VAR_8 = VAR_6->cfg->fw_name_pre;
 char VAR_9[8];

 if (VAR_7) {





  VAR_6->fw_index = VAR_6->cfg->ucode_api_max;
  FUNC_3(VAR_9, "%d", VAR_6->fw_index);
 } else {
  VAR_6->fw_index--;
  FUNC_3(VAR_9, "%d", VAR_6->fw_index);
 }

 if (VAR_6->fw_index < VAR_6->cfg->ucode_api_min) {
  FUNC_1(VAR_6, "no suitable firmware found!\n");
  return -VAR_0;
 }

 FUNC_3(VAR_6->firmware_name, "%s%s%s", VAR_8, VAR_9, ".ucode");

 FUNC_0(VAR_6, "attempting to load firmware %s'%s'\n",
         (VAR_6->fw_index == VAR_3)
    ? "EXPERIMENTAL " : "",
         VAR_6->firmware_name);

 return FUNC_2(VAR_2, 1, VAR_6->firmware_name,
           VAR_6->trans->dev,
           VAR_1, VAR_6, VAR_5);
}
