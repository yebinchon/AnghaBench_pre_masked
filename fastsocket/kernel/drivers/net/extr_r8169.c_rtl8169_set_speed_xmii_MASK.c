
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ supports_gmii; } ;
struct rtl8169_private {scalar_t__ mac_version; TYPE_1__ mii; } ;
struct net_device {int dummy; } ;


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
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 struct rtl8169_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct rtl8169_private*,int ,struct net_device*,char*) ;
 int FUNC_2 (struct rtl8169_private*,int) ;
 int FUNC_3 (struct rtl8169_private*,int,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_29,
      u8 VAR_30, u16 VAR_31, u8 VAR_32, u32 VAR_33)
{
 struct rtl8169_private *VAR_34 = FUNC_0(VAR_29);
 int VAR_35, VAR_36;
 int VAR_37 = -VAR_20;

 FUNC_3(VAR_34, 0x1f, 0x0000);

 if (VAR_30 == VAR_14) {
  int VAR_38;

  VAR_38 = FUNC_2(VAR_34, VAR_21);
  VAR_38 &= ~(VAR_11 | VAR_10 |
    VAR_9 | VAR_8);

  if (VAR_33 & VAR_5)
   VAR_38 |= VAR_11;
  if (VAR_33 & VAR_4)
   VAR_38 |= VAR_10;
  if (VAR_33 & VAR_3)
   VAR_38 |= VAR_9;
  if (VAR_33 & VAR_2)
   VAR_38 |= VAR_8;

  VAR_38 |= VAR_13 | VAR_12;

  VAR_35 = FUNC_2(VAR_34, VAR_23);
  VAR_35 &= ~(VAR_6 | VAR_7);


  if (VAR_34->mii.supports_gmii) {
   if (VAR_33 & VAR_1)
    VAR_35 |= VAR_7;
   if (VAR_33 & VAR_0)
    VAR_35 |= VAR_6;
  } else if (VAR_33 & (VAR_1 |
      VAR_0)) {
   FUNC_1(VAR_34, VAR_28, VAR_29,
       "PHY does not support 1000Mbps\n");
   goto out;
  }

  VAR_36 = VAR_15 | VAR_16;

  FUNC_3(VAR_34, VAR_21, VAR_38);
  FUNC_3(VAR_34, VAR_23, VAR_35);
 } else {
  VAR_35 = 0;

  if (VAR_31 == VAR_26)
   VAR_36 = 0;
  else if (VAR_31 == VAR_27)
   VAR_36 = VAR_18;
  else
   goto out;

  if (VAR_32 == VAR_19)
   VAR_36 |= VAR_17;
 }

 FUNC_3(VAR_34, VAR_22, VAR_36);

 if (VAR_34->mac_version == VAR_24 ||
     VAR_34->mac_version == VAR_25) {
  if ((VAR_31 == VAR_27) && (VAR_30 != VAR_14)) {
   FUNC_3(VAR_34, 0x17, 0x2138);
   FUNC_3(VAR_34, 0x0e, 0x0260);
  } else {
   FUNC_3(VAR_34, 0x17, 0x2108);
   FUNC_3(VAR_34, 0x0e, 0x0000);
  }
 }

 VAR_37 = 0;
out:
 return VAR_37;
}
