
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {struct e1000_hw hw; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int tx_type; int rx_filter; scalar_t__ flags; } ;
typedef int config ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int) ;
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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ FUNC_5 (struct hwtstamp_config*,int ,int) ;
 scalar_t__ FUNC_6 (int ,struct hwtstamp_config*,int) ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int FUNC_7 (int ) ;
 struct igb_adapter* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 () ;

int FUNC_12(struct net_device *VAR_37,
      struct ifreq *VAR_38, int VAR_39)
{
 struct igb_adapter *VAR_40 = FUNC_8(VAR_37);
 struct e1000_hw *VAR_41 = &VAR_40->hw;
 struct hwtstamp_config VAR_42;
 u32 VAR_43 = VAR_23;
 u32 VAR_44 = VAR_17;
 u32 VAR_45 = 0;
 bool VAR_46 = 0;
 bool VAR_47 = 0;
 u32 VAR_48;

 if (FUNC_5(&VAR_42, VAR_38->ifr_data, sizeof(VAR_42)))
  return -VAR_26;


 if (VAR_42.flags)
  return -VAR_27;

 switch (VAR_42.tx_type) {
 case 129:
  VAR_43 = 0;
 case 128:
  break;
 default:
  return -VAR_28;
 }

 switch (VAR_42.rx_filter) {
 case 142:
  VAR_44 = 0;
  break;
 case 139:
  VAR_44 |= VAR_20;
  VAR_45 = VAR_15;
  VAR_46 = 1;
  break;
 case 141:
  VAR_44 |= VAR_20;
  VAR_45 = VAR_14;
  VAR_46 = 1;
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
  VAR_44 |= VAR_19;
  VAR_42.rx_filter = 137;
  VAR_47 = 1;
  VAR_46 = 1;
  break;
 case 140:
 case 143:



  if (VAR_41->mac.type != VAR_33) {
   VAR_44 |= VAR_18;
   VAR_42.rx_filter = 143;
   break;
  }

 default:
  VAR_42.rx_filter = 142;
  return -VAR_28;
 }

 if (VAR_41->mac.type == VAR_32) {
  if (VAR_44 | VAR_43)
   return -VAR_27;
  return 0;
 }





 if ((VAR_41->mac.type >= VAR_34) && VAR_44) {
  VAR_44 = VAR_17;
  VAR_44 |= VAR_18;
  VAR_42.rx_filter = 143;
  VAR_47 = 1;
  VAR_46 = 1;

  if ((VAR_41->mac.type == VAR_35) ||
      (VAR_41->mac.type == VAR_36)) {
   VAR_48 = FUNC_9(VAR_9);
   VAR_48 |= VAR_10;
   FUNC_10(VAR_9, VAR_48);
  }
 }


 VAR_48 = FUNC_9(VAR_22);
 VAR_48 &= ~VAR_23;
 VAR_48 |= VAR_43;
 FUNC_10(VAR_22, VAR_48);


 VAR_48 = FUNC_9(VAR_16);
 VAR_48 &= ~(VAR_17 | VAR_21);
 VAR_48 |= VAR_44;
 FUNC_10(VAR_16, VAR_48);


 FUNC_10(VAR_13, VAR_45);


 if (VAR_47)
  FUNC_10(FUNC_0(3),
       (VAR_1 |
        VAR_0 |
        VAR_29));
 else
  FUNC_10(FUNC_0(3), 0);


 if (VAR_46) {
  u32 VAR_49 = (VAR_30
   | VAR_6
   | VAR_2
   | VAR_3);
  VAR_49 &= ~VAR_4;

  FUNC_10(FUNC_2(3), FUNC_7(VAR_31));
  FUNC_10(FUNC_3(3),
       (VAR_8 | VAR_7));
  if (VAR_41->mac.type == VAR_33) {

   FUNC_10(FUNC_4(3), FUNC_7(VAR_31));
   VAR_49 &= ~VAR_5;
  }
  FUNC_10(FUNC_1(3), VAR_49);
 } else {
  FUNC_10(FUNC_1(3), VAR_3);
 }
 FUNC_11();


 VAR_48 = FUNC_9(VAR_25);
 VAR_48 = FUNC_9(VAR_24);
 VAR_48 = FUNC_9(VAR_12);
 VAR_48 = FUNC_9(VAR_11);

 return FUNC_6(VAR_38->ifr_data, &VAR_42, sizeof(VAR_42)) ?
  -VAR_26 : 0;
}
