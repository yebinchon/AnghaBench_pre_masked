
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct net_device {int name; scalar_t__ base_addr; int dev_addr; } ;
struct TYPE_5__ {size_t phyNum; int link; int phyOnline; int rxListDMA; scalar_t__ aui; TYPE_1__* adapter; scalar_t__ tlanFullDuplex; int * phy; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_2__ TLanPrivateInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
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
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (struct net_device*,int ,int ,scalar_t__*) ;
 int FUNC_4 (struct net_device*,int ,int ,scalar_t__) ;
 int FUNC_5 (struct net_device*,int ,int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int,int ) ;
 int VAR_37 ;
 int * VAR_38 ;
 TYPE_2__* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int,scalar_t__) ;
 int FUNC_11 (int,scalar_t__) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void
FUNC_14( struct net_device *VAR_39 )
{
 TLanPrivateInfo *VAR_40 = FUNC_8(VAR_39);
 u8 VAR_41;
 u32 VAR_42;
 u8 VAR_43;
 u16 VAR_44;
 u16 VAR_45;
 u16 VAR_46;
 u16 VAR_47;
 u16 VAR_48, VAR_49;
 int VAR_50;

 VAR_42 = VAR_40->phy[VAR_40->phyNum];

 VAR_41 = VAR_21 | VAR_22;
 if ( VAR_40->tlanFullDuplex ) {
  VAR_41 |= VAR_20;
 }
 FUNC_2( VAR_39->base_addr, VAR_19, VAR_41 );
 VAR_41 = VAR_24 | VAR_25;
 if ( VAR_40->phyNum == 0 ) {
  VAR_41 |= VAR_26;
 }
 FUNC_2( VAR_39->base_addr, VAR_23, VAR_41 );
 FUNC_1( VAR_39->base_addr, VAR_18, ((1536)+7)&~7 );
 FUNC_3( VAR_39, VAR_42, VAR_2, &VAR_48 );
 FUNC_3( VAR_39, VAR_42, VAR_3, &VAR_49 );

 if ( ( VAR_40->adapter->flags & VAR_8 ) ||
      ( VAR_40->aui ) ) {
  VAR_44 = VAR_5;
  FUNC_12( "TLAN:  %s: Link forced.\n", VAR_39->name );
 } else {
  FUNC_3( VAR_39, VAR_42, VAR_4, &VAR_44 );
  FUNC_13( 1000 );
  FUNC_3( VAR_39, VAR_42, VAR_4, &VAR_44 );
  if ( (VAR_44 & VAR_5) &&

   (VAR_48 == VAR_6) &&
   (VAR_49 == VAR_7) ) {
   FUNC_3( VAR_39, VAR_42, VAR_1, &VAR_45 );
   FUNC_3( VAR_39, VAR_42, VAR_36, &VAR_47 );

   FUNC_12( "TLAN: %s: Link active with ", VAR_39->name );
   if (!(VAR_47 & VAR_29)) {
           FUNC_12( "forced 10%sMbps %s-Duplex\n",
      VAR_47 & VAR_31 ? "" : "0",
      VAR_47 & VAR_30 ? "Full" : "Half");
   } else {
    FUNC_12( "AutoNegotiation enabled, at 10%sMbps %s-Duplex\n",
     VAR_47 & VAR_31 ? "" : "0",
     VAR_47 & VAR_30 ? "Full" : "Half");
    FUNC_12("TLAN: Partner capability: ");
     for (VAR_50 = 5; VAR_50 <= 10; VAR_50++)
      if (VAR_45 & (1<<VAR_50))
       FUNC_12("%s",VAR_38[VAR_50-5]);
    FUNC_12("\n");
   }

   FUNC_2( VAR_39->base_addr, VAR_17, VAR_16 );






  } else if (VAR_44 & VAR_5) {
   FUNC_12( "TLAN: %s: Link active\n", VAR_39->name );
   FUNC_2( VAR_39->base_addr, VAR_17, VAR_16 );
  }
 }

 if ( VAR_40->phyNum == 0 ) {
         FUNC_3( VAR_39, VAR_42, VAR_35, &VAR_46 );
         VAR_46 |= VAR_32;
         FUNC_4( VAR_39, VAR_42, VAR_35, VAR_46 );
         VAR_43 = FUNC_0( VAR_39->base_addr, VAR_27 );
         VAR_43 |= VAR_28;
         FUNC_2( VAR_39->base_addr, VAR_27, VAR_43 );
 }

 if ( VAR_44 & VAR_5 ) {
  FUNC_5( VAR_39, 0, VAR_39->dev_addr );
  VAR_40->phyOnline = 1;
  FUNC_10( ( VAR_12 >> 8 ), VAR_39->base_addr + VAR_15 + 1 );
  if ( VAR_37 >= 1 && VAR_37 != VAR_10 ) {
   FUNC_10( ( VAR_13 >> 8 ), VAR_39->base_addr + VAR_15 + 1 );
  }
  FUNC_11( VAR_40->rxListDMA, VAR_39->base_addr + VAR_9 );
  FUNC_11( VAR_11 | VAR_14, VAR_39->base_addr + VAR_15 );
  FUNC_9(VAR_39);
 } else {
  FUNC_12( "TLAN: %s: Link inactive, will retry in 10 secs...\n",
   VAR_39->name );
  FUNC_7( VAR_39, (10*VAR_0), VAR_33 );
  return;
 }
 FUNC_6(VAR_39);

}
