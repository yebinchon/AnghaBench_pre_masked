
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* serio; } ;
struct psmouse {int pktsize; int reconnect; int disconnect; int protocol_handler; TYPE_3__ ps2dev; struct elantech_data* private; } ;
struct elantech_data {int* parity; unsigned char fw_version_maj; unsigned char fw_version_min; int hw_version; int debug; int paritycheck; unsigned char capabilities; int jumpy_cursor; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct psmouse*) ;
 int FUNC_1 (struct psmouse*) ;
 int FUNC_2 (struct elantech_data*) ;
 struct elantech_data* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (struct psmouse*,int ,unsigned char*) ;
 int FUNC_7 (int *,int *) ;

int FUNC_8(struct psmouse *VAR_7)
{
 struct elantech_data *VAR_8;
 int VAR_9, VAR_10;
 unsigned char VAR_11[3];

 VAR_7->private = VAR_8 = FUNC_3(sizeof(struct elantech_data), VAR_2);
 if (!VAR_8)
  return -1;

 VAR_8->parity[0] = 1;
 for (VAR_9 = 1; VAR_9 < 256; VAR_9++)
  VAR_8->parity[VAR_9] = VAR_8->parity[VAR_9 & (VAR_9 - 1)] ^ 1;




 if (FUNC_6(VAR_7, VAR_1, VAR_11)) {
  FUNC_4("elantech.c: failed to query firmware version.\n");
  goto init_fail;
 }
 VAR_8->fw_version_maj = VAR_11[0];
 VAR_8->fw_version_min = VAR_11[2];





 if (VAR_8->fw_version_maj >= 0x02 && VAR_8->fw_version_min >= 0x30) {
  VAR_8->hw_version = 2;

  VAR_8->debug = 1;

  VAR_8->paritycheck = 0;
 } else {
  VAR_8->hw_version = 1;
  VAR_8->paritycheck = 1;
 }
 FUNC_5("elantech.c: assuming hardware version %d, firmware version %d.%d\n",
  VAR_8->hw_version, VAR_8->fw_version_maj, VAR_8->fw_version_min);

 if (FUNC_6(VAR_7, VAR_0, VAR_11)) {
  FUNC_4("elantech.c: failed to query capabilities.\n");
  goto init_fail;
 }
 FUNC_5("elantech.c: Synaptics capabilities query result 0x%02x, 0x%02x, 0x%02x.\n",
  VAR_11[0], VAR_11[1], VAR_11[2]);
 VAR_8->capabilities = VAR_11[0];






 if (VAR_8->fw_version_maj == 0x02 && VAR_8->fw_version_min == 0x22) {
  FUNC_5("elantech.c: firmware version 2.34 detected, "
   "enabling jumpy cursor workaround\n");
  VAR_8->jumpy_cursor = 1;
 }

 if (FUNC_0(VAR_7)) {
  FUNC_4("elantech.c: failed to put touchpad into absolute mode.\n");
  goto init_fail;
 }

 FUNC_1(VAR_7);

 VAR_10 = FUNC_7(&VAR_7->ps2dev.serio->dev.kobj,
       &VAR_3);
 if (VAR_10) {
  FUNC_4("elantech.c: failed to create sysfs attributes, error: %d.\n",
   VAR_10);
  goto init_fail;
 }

 VAR_7->protocol_handler = VAR_5;
 VAR_7->disconnect = VAR_4;
 VAR_7->reconnect = VAR_6;
 VAR_7->pktsize = VAR_8->hw_version == 2 ? 6 : 4;

 return 0;

 init_fail:
 FUNC_2(VAR_8);
 return -1;
}
