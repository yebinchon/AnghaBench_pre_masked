
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union e1000_adv_tx_desc {int dummy; } e1000_adv_tx_desc ;
typedef int u32 ;
struct pci_dev {int dev; } ;
struct TYPE_5__ {scalar_t__ func; } ;
struct TYPE_6__ {int (* init_thermal_sensor_thresh ) (struct e1000_hw*) ;scalar_t__ (* init_hw ) (struct e1000_hw*) ;int (* reset_hw ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {int type; TYPE_3__ ops; int autoneg; } ;
struct e1000_fc_info {int high_water; int low_water; int pause_time; int send_xon; int requested_mode; int current_mode; } ;
struct e1000_hw {TYPE_2__ bus; struct e1000_mac_info mac; struct e1000_fc_info fc; } ;
struct igb_adapter {int max_frame_size; int vfs_allocated_count; int netdev; scalar_t__ ets; int state; TYPE_1__* vf_data; struct e1000_hw hw; struct pci_dev* pdev; } ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *,char*) ;







 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct igb_adapter*,int) ;
 int FUNC_5 (struct igb_adapter*) ;
 int FUNC_6 (struct igb_adapter*) ;
 int FUNC_7 (struct igb_adapter*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct igb_adapter*) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct e1000_hw*) ;
 scalar_t__ FUNC_14 (struct e1000_hw*) ;
 int FUNC_15 (struct e1000_hw*) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int ,int) ;

void FUNC_18(struct igb_adapter *VAR_13)
{
 struct pci_dev *VAR_14 = VAR_13->pdev;
 struct e1000_hw *VAR_15 = &VAR_13->hw;
 struct e1000_mac_info *VAR_16 = &VAR_15->mac;
 struct e1000_fc_info *VAR_17 = &VAR_15->fc;
 u32 VAR_18 = 0, VAR_19, VAR_20, VAR_21, VAR_22;




 switch (VAR_16->type) {
 case 129:
 case 128:
 case 132:
  VAR_18 = FUNC_12(VAR_2);
  VAR_18 = FUNC_8(VAR_18);
  break;
 case 133:
  VAR_18 = FUNC_12(VAR_2);
  VAR_18 &= VAR_3;
  break;
 case 134:
 case 131:
 case 130:
 default:
  VAR_18 = VAR_1;
  break;
 }

 if ((VAR_13->max_frame_size > VAR_10 + VAR_9) &&
     (VAR_16->type < 133)) {

  FUNC_17(VAR_0, VAR_18);
  VAR_18 = FUNC_12(VAR_0);

  VAR_19 = VAR_18 >> 16;

  VAR_18 &= 0xffff;



  VAR_20 = (VAR_13->max_frame_size +
    sizeof(union e1000_adv_tx_desc) -
    VAR_9) * 2;
  VAR_20 = FUNC_0(VAR_20, 1024);
  VAR_20 >>= 10;

  VAR_21 = VAR_13->max_frame_size;
  VAR_21 = FUNC_0(VAR_21, 1024);
  VAR_21 >>= 10;





  if (VAR_19 < VAR_20 &&
      ((VAR_20 - VAR_19) < VAR_18)) {
   VAR_18 = VAR_18 - (VAR_20 - VAR_19);




   if (VAR_18 < VAR_21)
    VAR_18 = VAR_21;
  }
  FUNC_17(VAR_0, VAR_18);
 }
 VAR_22 = FUNC_10(((VAR_18 << 10) * 9 / 10),
   ((VAR_18 << 10) - 2 * VAR_13->max_frame_size));

 VAR_17->high_water = VAR_22 & 0xFFFFFFF0;
 VAR_17->low_water = VAR_17->high_water - 16;
 VAR_17->pause_time = 0xFFFF;
 VAR_17->send_xon = 1;
 VAR_17->current_mode = VAR_17->requested_mode;


 if (VAR_13->vfs_allocated_count) {
  int VAR_23;
  for (VAR_23 = 0 ; VAR_23 < VAR_13->vfs_allocated_count; VAR_23++)
   VAR_13->vf_data[VAR_23].flags &= VAR_11;


  FUNC_5(VAR_13);


  FUNC_17(VAR_5, 0);
  FUNC_17(VAR_6, 0);
 }


 VAR_15->mac.ops.reset_hw(VAR_15);
 FUNC_17(VAR_7, 0);

 if (VAR_15->mac.ops.init_hw(VAR_15))
  FUNC_1(&VAR_14->dev, "Hardware Error\n");




 if (!VAR_15->mac.autoneg)
  FUNC_2(VAR_15);

 FUNC_4(VAR_13, VAR_18);
 if (!FUNC_11(VAR_13->netdev))
  FUNC_6(VAR_13);

 FUNC_9(VAR_13);


 FUNC_17(VAR_4, VAR_8);


 FUNC_7(VAR_13);

 FUNC_3(VAR_15);
}
