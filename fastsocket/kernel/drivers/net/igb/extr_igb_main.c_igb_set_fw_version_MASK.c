
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int fw_version; struct e1000_hw hw; } ;
struct e1000_fw_version {int invm_major; int invm_minor; int invm_img_type; int eep_major; int eep_minor; int etrack_id; int or_major; int or_build; int or_patch; int eep_build; int or_valid; } ;




 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*,struct e1000_fw_version*) ;
 int FUNC_2 (int ,int,char*,int,int,int,...) ;

void FUNC_3(struct igb_adapter *VAR_0)
{
 struct e1000_hw *VAR_1 = &VAR_0->hw;
 struct e1000_fw_version VAR_2;

 FUNC_1(VAR_1, &VAR_2);

 switch (VAR_1->mac.type) {
 case 129:
 case 128:
  if (!(FUNC_0(VAR_1))) {
   FUNC_2(VAR_0->fw_version,
     sizeof(VAR_0->fw_version),
     "%2d.%2d-%d",
     VAR_2.invm_major, VAR_2.invm_minor,
     VAR_2.invm_img_type);
   break;
  }

 default:

  if (VAR_2.or_valid) {
   FUNC_2(VAR_0->fw_version,
     sizeof(VAR_0->fw_version),
     "%d.%d, 0x%08x, %d.%d.%d",
     VAR_2.eep_major, VAR_2.eep_minor, VAR_2.etrack_id,
     VAR_2.or_major, VAR_2.or_build, VAR_2.or_patch);

  } else if (VAR_2.etrack_id != 0X0000) {
   FUNC_2(VAR_0->fw_version,
       sizeof(VAR_0->fw_version),
       "%d.%d, 0x%08x",
       VAR_2.eep_major, VAR_2.eep_minor, VAR_2.etrack_id);
  } else {
  FUNC_2(VAR_0->fw_version,
      sizeof(VAR_0->fw_version),
      "%d.%d.%d",
      VAR_2.eep_major, VAR_2.eep_minor, VAR_2.eep_build);
  }
  break;
 }
 return;
}
