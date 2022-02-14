
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int tx_type; int rx_filter; scalar_t__ flags; } ;
typedef int config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
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
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;
 int VAR_19 ;
 scalar_t__ FUNC_4 (struct hwtstamp_config*,int ,int) ;
 scalar_t__ FUNC_5 (int ,struct hwtstamp_config*,int) ;
 scalar_t__ VAR_20 ;

int FUNC_6(struct ixgbe_adapter *VAR_21,
        struct ifreq *VAR_22, int VAR_23)
{
 struct ixgbe_hw *VAR_24 = &VAR_21->hw;
 struct hwtstamp_config VAR_25;
 u32 VAR_26 = VAR_17;
 u32 VAR_27 = VAR_12;
 u32 VAR_28 = VAR_19 << 16;
 bool VAR_29 = 0;
 u32 VAR_30;

 if (FUNC_4(&VAR_25, VAR_22->ifr_data, sizeof(VAR_25)))
  return -VAR_0;


 if (VAR_25.flags)
  return -VAR_1;

 switch (VAR_25.tx_type) {
 case 129:
  VAR_26 = 0;
 case 128:
  break;
 default:
  return -VAR_2;
 }

 switch (VAR_25.rx_filter) {
 case 142:
  VAR_27 = 0;
  VAR_28 = 0;
  break;
 case 139:
  VAR_27 |= VAR_14;
  VAR_28 |= VAR_9;
  break;
 case 141:
  VAR_27 |= VAR_14;
  VAR_28 |= VAR_8;
  break;
 case 137:
 case 135:
 case 132:
 case 130:
 case 134:
 case 131:
 case 138:
 case 136:
 case 133:
  VAR_27 |= VAR_13;
  VAR_29 = 1;
  VAR_25.rx_filter = 137;
  break;
 case 140:
 case 143:
 default:






  VAR_25.rx_filter = 142;
  return -VAR_2;
 }

 if (VAR_24->mac.type == VAR_20) {
  if (VAR_27 | VAR_26)
   return -VAR_2;
  return 0;
 }


 if (VAR_29)
  FUNC_3(VAR_24, FUNC_0(VAR_5),
    (VAR_6 |
     VAR_4 |
     VAR_3));
 else
  FUNC_3(VAR_24, FUNC_0(VAR_5), 0);



 VAR_30 = FUNC_1(VAR_24, VAR_16);
 VAR_30 &= ~VAR_17;
 VAR_30 |= VAR_26;
 FUNC_3(VAR_24, VAR_16, VAR_30);


 VAR_30 = FUNC_1(VAR_24, VAR_11);
 VAR_30 &= ~(VAR_12 | VAR_15);
 VAR_30 |= VAR_27;
 FUNC_3(VAR_24, VAR_11, VAR_30);


 FUNC_3(VAR_24, VAR_7, VAR_28);

 FUNC_2(VAR_24);


 VAR_30 = FUNC_1(VAR_24, VAR_18);
 VAR_30 = FUNC_1(VAR_24, VAR_10);

 return FUNC_5(VAR_22->ifr_data, &VAR_25, sizeof(VAR_25)) ?
  -VAR_0 : 0;
}
