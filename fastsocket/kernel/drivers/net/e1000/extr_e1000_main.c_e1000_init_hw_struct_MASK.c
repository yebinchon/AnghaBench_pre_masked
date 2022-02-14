
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int revision; int subsystem_device; int subsystem_vendor; int device; int vendor; } ;
struct e1000_hw {int mac_type; int phy_init_script; int wait_autoneg_complete; int tbi_compatibility_en; int adaptive_ifs; scalar_t__ media_type; int disable_polarity_correction; int master_slave; int mdix; int min_frame_size; scalar_t__ max_frame_size; int pci_cmd_word; int revision_id; int subsystem_id; int subsystem_vendor_id; int device_id; int vendor_id; } ;
struct e1000_adapter {TYPE_1__* netdev; struct pci_dev* pdev; } ;
struct TYPE_2__ {scalar_t__ mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (struct e1000_hw*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct pci_dev*,int ,int *) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_5(struct e1000_adapter *VAR_9,
    struct e1000_hw *VAR_10)
{
 struct pci_dev *VAR_11 = VAR_9->pdev;


 VAR_10->vendor_id = VAR_11->vendor;
 VAR_10->device_id = VAR_11->device;
 VAR_10->subsystem_vendor_id = VAR_11->subsystem_vendor;
 VAR_10->subsystem_id = VAR_11->subsystem_device;
 VAR_10->revision_id = VAR_11->revision;

 FUNC_4(VAR_11, VAR_6, &VAR_10->pci_cmd_word);

 VAR_10->max_frame_size = VAR_9->netdev->mtu +
        VAR_3 + VAR_4;
 VAR_10->min_frame_size = VAR_5;


 if (FUNC_1(VAR_10)) {
  FUNC_3(VAR_8, "Unknown MAC Type\n");
  return -VAR_2;
 }

 switch (VAR_10->mac_type) {
 default:
  break;
 case 131:
 case 129:
 case 130:
 case 128:
  VAR_10->phy_init_script = 1;
  break;
 }

 FUNC_2(VAR_10);
 FUNC_0(VAR_10);

 VAR_10->wait_autoneg_complete = 0;
 VAR_10->tbi_compatibility_en = 1;
 VAR_10->adaptive_ifs = 1;



 if (VAR_10->media_type == VAR_7) {
  VAR_10->mdix = VAR_0;
  VAR_10->disable_polarity_correction = 0;
  VAR_10->master_slave = VAR_1;
 }

 return 0;
}
