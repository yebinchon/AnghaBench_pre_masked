
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int base_addr; int name; } ;
struct TYPE_5__ {int* phy; size_t phyNum; scalar_t__ duplex; TYPE_1__* adapter; void* tlanFullDuplex; int neg_be_verbose; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_2__ TLanPrivateInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct net_device*,int,int ,int*) ;
 int FUNC_2 (struct net_device*,int,int ,int) ;
 int FUNC_3 (struct net_device*,int,int ) ;
 void* VAR_17 ;
 TYPE_2__* FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8( struct net_device *VAR_18 )
{
 TLanPrivateInfo *VAR_19 = FUNC_4(VAR_18);
 u16 VAR_20;
 u16 VAR_21;
 u16 VAR_22;
 u16 VAR_23;
 u16 VAR_24;
 u16 VAR_25;

 VAR_24 = VAR_19->phy[VAR_19->phyNum];

 FUNC_1( VAR_18, VAR_24, VAR_6, &VAR_25 );
 FUNC_7( 1000 );
 FUNC_1( VAR_18, VAR_24, VAR_6, &VAR_25 );

 if ( ! ( VAR_25 & VAR_7 ) ) {



   if (!VAR_19->neg_be_verbose++) {
    FUNC_5("TLAN:  Giving autonegotiation more time.\n");
     FUNC_5("TLAN:  Please check that your adapter has\n");
     FUNC_5("TLAN:  been properly connected to a HUB or Switch.\n");
    FUNC_5("TLAN:  Trying to establish link in the background...\n");
   }
  FUNC_3( VAR_18, (8*VAR_0), VAR_15 );
  return;
 }

 FUNC_6( "TLAN: %s: Autonegotiation complete.\n", VAR_18->name );
 FUNC_1( VAR_18, VAR_24, VAR_1, &VAR_20 );
 FUNC_1( VAR_18, VAR_24, VAR_2, &VAR_21 );
 VAR_23 = VAR_20 & VAR_21 & 0x03E0;
 if ( VAR_23 & 0x0100 ) {
  VAR_19->tlanFullDuplex = VAR_17;
 } else if ( ! ( VAR_23 & 0x0080 ) && ( VAR_23 & 0x0040 ) ) {
  VAR_19->tlanFullDuplex = VAR_17;
 }

 if ( ( ! ( VAR_23 & 0x0180 ) ) &&
      ( VAR_19->adapter->flags & VAR_8 ) &&
      ( VAR_19->phyNum != 0 ) ) {
  VAR_19->phyNum = 0;
  VAR_22 = VAR_11 | VAR_10 | VAR_12;
  FUNC_0( VAR_18->base_addr, VAR_13, VAR_22 );
  FUNC_3( VAR_18, (400*VAR_0/1000), VAR_16 );
  return;
 }

 if ( VAR_19->phyNum == 0 ) {
  if ( ( VAR_19->duplex == VAR_9 ) ||
       ( VAR_20 & VAR_21 & 0x0040 ) ) {
   FUNC_2( VAR_18, VAR_24, VAR_5,
       VAR_3 | VAR_4 );
   FUNC_5("TLAN:  Starting internal PHY with FULL-DUPLEX\n" );
  } else {
   FUNC_2( VAR_18, VAR_24, VAR_5, VAR_3 );
   FUNC_5( "TLAN:  Starting internal PHY with HALF-DUPLEX\n" );
  }
 }



 FUNC_3( VAR_18, (VAR_0/10), VAR_14 );

}
