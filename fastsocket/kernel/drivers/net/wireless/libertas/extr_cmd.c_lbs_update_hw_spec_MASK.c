
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct lbs_private {int* current_addr; int fwcapinfo; int fwrelease; int regioncode; TYPE_3__* mesh_dev; TYPE_2__* dev; int mesh_fw_ver; } ;
struct TYPE_4__ {int size; } ;
struct cmd_ds_get_hw_spec {int permanentaddr; int regioncode; int version; int hwifversion; int fwrelease; int fwcapinfo; TYPE_1__ hdr; } ;
typedef int cmd ;
struct TYPE_6__ {int dev_addr; } ;
struct TYPE_5__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct lbs_private*,int ,struct cmd_ds_get_hw_spec*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int* VAR_11 ;
 scalar_t__ FUNC_7 (struct lbs_private*,int,int ) ;
 scalar_t__ FUNC_8 (struct lbs_private*,int ) ;
 int FUNC_9 (int ) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (int ,int*,int ) ;
 int FUNC_12 (int*,int ,int ) ;
 int FUNC_13 (struct cmd_ds_get_hw_spec*,int ,int) ;

int FUNC_14(struct lbs_private *VAR_12)
{
 struct cmd_ds_get_hw_spec VAR_13;
 int VAR_14 = -1;
 u32 VAR_15;

 FUNC_4(VAR_2);

 FUNC_13(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.hdr.size = FUNC_1(sizeof(VAR_13));
 FUNC_11(VAR_13.permanentaddr, VAR_12->current_addr, VAR_1);
 VAR_14 = FUNC_2(VAR_12, VAR_0, &VAR_13);
 if (VAR_14)
  goto out;

 VAR_12->fwcapinfo = FUNC_10(VAR_13.fwcapinfo);



 VAR_12->fwrelease = FUNC_10(VAR_13.fwrelease);
 VAR_12->fwrelease = (VAR_12->fwrelease << 8) |
  (VAR_12->fwrelease >> 24 & 0xff);





 FUNC_6("%pM, fw %u.%u.%up%u, cap 0x%08x\n",
  VAR_13.permanentaddr,
  VAR_12->fwrelease >> 24 & 0xff,
  VAR_12->fwrelease >> 16 & 0xff,
  VAR_12->fwrelease >> 8 & 0xff,
  VAR_12->fwrelease & 0xff,
  VAR_12->fwcapinfo);
 FUNC_3("GET_HW_SPEC: hardware interface 0x%x, hardware spec 0x%04x\n",
      VAR_13.hwifversion, VAR_13.version);






 if (FUNC_0(VAR_12->fwrelease) == VAR_10)
  VAR_12->mesh_fw_ver = VAR_5;
 else if ((FUNC_0(VAR_12->fwrelease) >= VAR_8) &&
  (VAR_12->fwcapinfo & VAR_3))
  VAR_12->mesh_fw_ver = VAR_4;
 else
  VAR_12->mesh_fw_ver = VAR_6;
 if (FUNC_0(VAR_12->fwrelease) == VAR_9)
  VAR_12->regioncode = (FUNC_9(VAR_13.regioncode) >> 8) & 0xFF;
 else
  VAR_12->regioncode = FUNC_9(VAR_13.regioncode) & 0xFF;

 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {

  if (VAR_12->regioncode == VAR_11[VAR_15])
   break;
 }


 if (VAR_15 >= VAR_7) {
  VAR_12->regioncode = 0x10;
  FUNC_6("unidentified region code; using the default (USA)\n");
 }

 if (VAR_12->current_addr[0] == 0xff)
  FUNC_12(VAR_12->current_addr, VAR_13.permanentaddr, VAR_1);

 FUNC_11(VAR_12->dev->dev_addr, VAR_12->current_addr, VAR_1);
 if (VAR_12->mesh_dev)
  FUNC_11(VAR_12->mesh_dev->dev_addr, VAR_12->current_addr, VAR_1);

 if (FUNC_7(VAR_12, VAR_12->regioncode, 0)) {
  VAR_14 = -1;
  goto out;
 }

 if (FUNC_8(VAR_12, 0)) {
  VAR_14 = -1;
  goto out;
 }

out:
 FUNC_5(VAR_2);
 return VAR_14;
}
