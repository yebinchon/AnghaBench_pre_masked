
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_2__ phy; } ;
struct TYPE_6__ {scalar_t__ receive_errors; } ;
struct e1000_adapter {TYPE_3__ phy_stats; struct e1000_hw hw; TYPE_1__* pdev; } ;
struct TYPE_4__ {int revision; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (void*,int ,int) ;
 struct e1000_adapter* FUNC_9 (struct net_device*) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_11,
      struct ethtool_regs *VAR_12, void *VAR_13)
{
 struct e1000_adapter *VAR_14 = FUNC_9(VAR_11);
 struct e1000_hw *VAR_15 = &VAR_14->hw;
 u32 *VAR_16 = VAR_13;
 u16 VAR_17;

 FUNC_8(VAR_13, 0, VAR_1 * sizeof(u32));

 VAR_12->version = (1 << 24) | (VAR_14->pdev->revision << 16) |
     VAR_14->pdev->device;

 VAR_16[0] = FUNC_7(VAR_0);
 VAR_16[1] = FUNC_7(VAR_7);

 VAR_16[2] = FUNC_7(VAR_5);
 VAR_16[3] = FUNC_7(FUNC_1(0));
 VAR_16[4] = FUNC_7(FUNC_0(0));
 VAR_16[5] = FUNC_7(FUNC_2(0));
 VAR_16[6] = FUNC_7(VAR_6);

 VAR_16[7] = FUNC_7(VAR_8);
 VAR_16[8] = FUNC_7(FUNC_4(0));
 VAR_16[9] = FUNC_7(FUNC_3(0));
 VAR_16[10] = FUNC_7(FUNC_5(0));
 VAR_16[11] = FUNC_7(VAR_9);

 VAR_16[12] = VAR_14->hw.phy.type;




 if (VAR_15->phy.type == VAR_10) {
  FUNC_6(VAR_15, VAR_3, &VAR_17);
  VAR_16[13] = (u32)VAR_17;
  VAR_16[14] = 0;
  VAR_16[15] = 0;
  VAR_16[16] = 0;
  FUNC_6(VAR_15, VAR_2, &VAR_17);
  VAR_16[17] = (u32)VAR_17;
  VAR_16[18] = VAR_16[13];
  VAR_16[19] = 0;
  VAR_16[20] = VAR_16[17];

  VAR_16[22] = VAR_14->phy_stats.receive_errors;
  VAR_16[23] = VAR_16[13];
 }
 VAR_16[21] = 0;
 FUNC_6(VAR_15, VAR_4, &VAR_17);
 VAR_16[24] = (u32)VAR_17;
 VAR_16[25] = VAR_16[24];
}
