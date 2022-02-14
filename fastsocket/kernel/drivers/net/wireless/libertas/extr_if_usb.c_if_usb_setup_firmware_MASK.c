
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wake_method ;
struct wol_config {int dummy; } ;
struct lbs_private {int wol_gpio; int wol_gap; int fwcapinfo; struct if_usb_card* card; } ;
struct if_usb_card {int boot2_version; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_set_boot2_ver {int method; void* action; TYPE_1__ hdr; int version; } ;
struct cmd_ds_802_11_fw_wake_method {int method; void* action; TYPE_1__ hdr; int version; } ;
typedef int b2_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct lbs_private*,int ,struct cmd_ds_set_boot2_ver*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct lbs_private*,int ,struct wol_config*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct lbs_private *VAR_6)
{
 struct if_usb_card *VAR_7 = VAR_6->card;
 struct cmd_ds_set_boot2_ver VAR_8;
 struct cmd_ds_802_11_fw_wake_method VAR_9;

 VAR_8.hdr.size = FUNC_0(sizeof(VAR_8));
 VAR_8.action = 0;
 VAR_8.version = VAR_7->boot2_version;

 if (FUNC_1(VAR_6, VAR_2, &VAR_8))
  FUNC_2("Setting boot2 version failed\n");

 VAR_6->wol_gpio = 2;
 VAR_6->wol_gap = 20;
 FUNC_3(VAR_6, VAR_4,
   (struct wol_config *) ((void*)0));

 VAR_9.hdr.size = FUNC_0(sizeof(VAR_9));
 VAR_9.action = FUNC_0(VAR_1);
 if (FUNC_1(VAR_6, VAR_0, &VAR_9)) {
  FUNC_4("Firmware does not seem to support PS mode\n");
  VAR_6->fwcapinfo &= ~VAR_5;
 } else {
  if (FUNC_5(VAR_9.method) == VAR_3) {
   FUNC_2("Firmware seems to support PS with wake-via-command\n");
  } else {


   VAR_6->fwcapinfo &= ~VAR_5;
   FUNC_4("Firmware doesn't wake via command interrupt; disabling PS mode\n");
  }
 }
}
