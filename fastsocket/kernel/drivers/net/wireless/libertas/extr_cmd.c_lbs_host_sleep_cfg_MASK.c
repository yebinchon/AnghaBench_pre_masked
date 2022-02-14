
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct wol_config {int dummy; } ;
struct lbs_private {scalar_t__ wol_criteria; int wol_gap; int wol_gpio; } ;
struct TYPE_4__ {int action; } ;
struct TYPE_3__ {int size; } ;
struct cmd_ds_host_sleep {TYPE_2__ wol_conf; int gap; int gpio; int criteria; TYPE_1__ hdr; } ;
typedef int cmd_config ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct lbs_private*,int ,struct cmd_ds_host_sleep*) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *,int *,int) ;

int FUNC_6(struct lbs_private *VAR_2, uint32_t VAR_3,
  struct wol_config *VAR_4)
{
 struct cmd_ds_host_sleep VAR_5;
 int VAR_6;

 VAR_5.hdr.size = FUNC_0(sizeof(VAR_5));
 VAR_5.criteria = FUNC_1(VAR_3);
 VAR_5.gpio = VAR_2->wol_gpio;
 VAR_5.gap = VAR_2->wol_gap;

 if (VAR_4 != ((void*)0))
  FUNC_5((uint8_t *)&VAR_5.wol_conf, (uint8_t *)VAR_4,
    sizeof(struct wol_config));
 else
  VAR_5.wol_conf.action = VAR_1;

 VAR_6 = FUNC_2(VAR_2, VAR_0, &VAR_5);
 if (!VAR_6) {
  if (VAR_3) {
   FUNC_3("Set WOL criteria to %x\n", VAR_3);
   VAR_2->wol_criteria = VAR_3;
  } else
   FUNC_5((uint8_t *) VAR_4,
     (uint8_t *)&VAR_5.wol_conf,
     sizeof(struct wol_config));
 } else {
  FUNC_4("HOST_SLEEP_CFG failed %d\n", VAR_6);
 }

 return VAR_6;
}
