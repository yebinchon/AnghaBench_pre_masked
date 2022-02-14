
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;
struct e1000_hw {int revision_id; int device_id; scalar_t__ phy_type; scalar_t__ mac_type; scalar_t__ media_type; } ;
struct TYPE_2__ {scalar_t__ receive_errors; scalar_t__ idle_errors; } ;
struct e1000_adapter {TYPE_1__ phy_stats; struct e1000_hw hw; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_0 (struct e1000_hw*,int,scalar_t__*) ;
 int FUNC_1 (struct e1000_hw*,int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (void*,int ,int) ;
 struct e1000_adapter* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_27, struct ethtool_regs *VAR_28,
      void *VAR_29)
{
 struct e1000_adapter *VAR_30 = FUNC_4(VAR_27);
 struct e1000_hw *VAR_31 = &VAR_30->hw;
 u32 *VAR_32 = VAR_29;
 u16 VAR_33;

 FUNC_3(VAR_29, 0, VAR_1 * sizeof(u32));

 VAR_28->version = (1 << 24) | (VAR_31->revision_id << 16) | VAR_31->device_id;

 VAR_32[0] = FUNC_2(VAR_0);
 VAR_32[1] = FUNC_2(VAR_18);

 VAR_32[2] = FUNC_2(VAR_13);
 VAR_32[3] = FUNC_2(VAR_15);
 VAR_32[4] = FUNC_2(VAR_14);
 VAR_32[5] = FUNC_2(VAR_16);
 VAR_32[6] = FUNC_2(VAR_17);

 VAR_32[7] = FUNC_2(VAR_19);
 VAR_32[8] = FUNC_2(VAR_21);
 VAR_32[9] = FUNC_2(VAR_20);
 VAR_32[10] = FUNC_2(VAR_22);
 VAR_32[11] = FUNC_2(VAR_23);

 VAR_32[12] = VAR_31->phy_type;
 if (VAR_31->phy_type == VAR_26) {
  FUNC_1(VAR_31, VAR_6,
        VAR_2);
  FUNC_0(VAR_31, VAR_2 &
       VAR_6, &VAR_33);
  VAR_32[13] = (u32)VAR_33;
  FUNC_1(VAR_31, VAR_6,
        VAR_3);
  FUNC_0(VAR_31, VAR_3 &
       VAR_6, &VAR_33);
  VAR_32[14] = (u32)VAR_33;
  FUNC_1(VAR_31, VAR_6,
        VAR_4);
  FUNC_0(VAR_31, VAR_4 &
       VAR_6, &VAR_33);
  VAR_32[15] = (u32)VAR_33;
  FUNC_1(VAR_31, VAR_6,
        VAR_5);
  FUNC_0(VAR_31, VAR_5 &
       VAR_6, &VAR_33);
  VAR_32[16] = (u32)VAR_33;
  VAR_32[17] = 0;
  FUNC_1(VAR_31, VAR_6, 0x0);
  FUNC_0(VAR_31, VAR_8 &
       VAR_6, &VAR_33);
  VAR_32[18] = (u32)VAR_33;
  FUNC_1(VAR_31, VAR_6,
        VAR_7);
  FUNC_0(VAR_31, VAR_7 &
       VAR_6, &VAR_33);
  VAR_32[19] = (u32)VAR_33;
  VAR_32[20] = 0;
  VAR_32[22] = 0;
  VAR_32[23] = VAR_32[18];
  FUNC_1(VAR_31, VAR_6, 0x0);
 } else {
  FUNC_0(VAR_31, VAR_10, &VAR_33);
  VAR_32[13] = (u32)VAR_33;
  VAR_32[14] = 0;
  VAR_32[15] = 0;
  VAR_32[16] = 0;
  FUNC_0(VAR_31, VAR_9, &VAR_33);
  VAR_32[17] = (u32)VAR_33;
  VAR_32[18] = VAR_32[13];
  VAR_32[19] = 0;
  VAR_32[20] = VAR_32[17];

  VAR_32[22] = VAR_30->phy_stats.receive_errors;
  VAR_32[23] = VAR_32[13];
 }
 VAR_32[21] = VAR_30->phy_stats.idle_errors;
 FUNC_0(VAR_31, VAR_12, &VAR_33);
 VAR_32[24] = (u32)VAR_33;
 VAR_32[25] = VAR_32[24];
 if (VAR_31->mac_type >= VAR_24 &&
     VAR_31->media_type == VAR_25) {
  VAR_32[26] = FUNC_2(VAR_11);
 }
}
