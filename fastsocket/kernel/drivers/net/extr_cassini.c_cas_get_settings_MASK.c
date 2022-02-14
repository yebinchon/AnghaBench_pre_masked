
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int advertising; int supported; int duplex; void* speed; int autoneg; int phy_address; void* transceiver; int port; } ;
struct cas {int cas_flags; int lstate; int link_cntl; int lock; scalar_t__ regs; scalar_t__ hw_running; int phy_addr; int phy_type; } ;
typedef enum link_state { ____Placeholder_link_state } link_state ;


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
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 void* VAR_35 ;
 void* VAR_36 ;
 int FUNC_1 (struct cas*,int) ;
 int FUNC_2 (struct cas*,int ) ;
 int FUNC_3 (struct cas*,int*,int*,int*) ;
 int FUNC_4 (struct cas*,int*,int*,int*) ;
 int VAR_37 ;
 struct cas* FUNC_5 (struct net_device*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_38, struct ethtool_cmd *VAR_39)
{
 struct cas *VAR_40 = FUNC_5(VAR_38);
 u16 VAR_41;
 int VAR_42, VAR_43, VAR_44;
 unsigned long VAR_45;
 enum link_state VAR_46 = VAR_37;

 VAR_39->advertising = 0;
 VAR_39->supported = VAR_31;
 if (VAR_40->cas_flags & VAR_15) {
  VAR_39->supported |= VAR_26;
  VAR_39->advertising |= VAR_0;
 }


 FUNC_7(&VAR_40->lock, VAR_45);
 VAR_41 = 0;
 VAR_46 = VAR_40->lstate;
 if (FUNC_0(VAR_40->phy_type)) {
  VAR_39->port = VAR_21;
  VAR_39->transceiver = (VAR_40->cas_flags & VAR_16) ?
   VAR_36 : VAR_35;
  VAR_39->phy_address = VAR_40->phy_addr;
  VAR_39->advertising |= VAR_8 | VAR_7 |
   VAR_4 |
   VAR_3 |
   VAR_2 |
   VAR_1;

  VAR_39->supported |=
   (VAR_30 |
    VAR_29 |
    VAR_28 |
    VAR_27 |
    VAR_34 | VAR_33);

  if (VAR_40->hw_running) {
   FUNC_1(VAR_40, 0);
   VAR_41 = FUNC_2(VAR_40, VAR_19);
   FUNC_3(VAR_40, &VAR_42,
            &VAR_43, &VAR_44);
   FUNC_1(VAR_40, 1);
  }

 } else {
  VAR_39->port = VAR_20;
  VAR_39->transceiver = VAR_36;
  VAR_39->phy_address = 0;
  VAR_39->supported |= VAR_32;
  VAR_39->advertising |= VAR_6;

  if (VAR_40->hw_running) {

   VAR_41 = FUNC_6(VAR_40->regs + VAR_22);
   FUNC_4(VAR_40, &VAR_42,
            &VAR_43, &VAR_44);
  }
 }
 FUNC_8(&VAR_40->lock, VAR_45);

 if (VAR_41 & VAR_11) {
  VAR_39->advertising |= VAR_5;
  VAR_39->autoneg = VAR_10;
  VAR_39->speed = ((VAR_43 == 10) ?
         VAR_23 :
         ((VAR_43 == 1000) ?
          VAR_25 : VAR_24));
  VAR_39->duplex = VAR_42 ? VAR_17 : VAR_18;
 } else {
  VAR_39->autoneg = VAR_9;
  VAR_39->speed =
   (VAR_41 & VAR_14) ?
   VAR_25 :
   ((VAR_41 & VAR_13) ? VAR_24:
    VAR_23);
  VAR_39->duplex =
   (VAR_41 & VAR_12) ?
   VAR_17 : VAR_18;
 }
 if (VAR_46 != VAR_37) {
  if (VAR_40->link_cntl & VAR_11) {
   VAR_39->speed = 0;
   VAR_39->duplex = 0xff;
  } else {
   VAR_39->speed = VAR_23;
   if (VAR_40->link_cntl & VAR_13) {
    VAR_39->speed = VAR_24;
   } else if (VAR_40->link_cntl & VAR_14) {
    VAR_39->speed = VAR_25;
   }
   VAR_39->duplex = (VAR_40->link_cntl & VAR_12)?
    VAR_17 : VAR_18;
  }
 }
 return 0;
}
