
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int base_addr; int name; } ;
struct TYPE_3__ {int* phy; size_t phyNum; scalar_t__ speed; scalar_t__ duplex; void* tlanFullDuplex; scalar_t__ aui; } ;
typedef TYPE_1__ TLanPrivateInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct net_device*,int,int ,int*) ;
 int FUNC_3 (struct net_device*,int,int ,int) ;
 int FUNC_4 (struct net_device*,int,int ) ;
 void* VAR_21 ;
 TYPE_1__* FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void FUNC_7( struct net_device *VAR_22 )
{
 TLanPrivateInfo *VAR_23 = FUNC_5(VAR_22);
 u16 VAR_24;
 u16 VAR_25;
 u16 VAR_26;
 u16 VAR_27;
 u16 VAR_28;
 u16 VAR_29;

 VAR_27 = VAR_23->phy[VAR_23->phyNum];
 FUNC_0( VAR_7, "%s: Trying to activate link.\n", VAR_22->name );
 FUNC_2( VAR_22, VAR_27, VAR_5, &VAR_28 );
 FUNC_2( VAR_22, VAR_27, VAR_5, &VAR_24 );

 if ( ( VAR_28 & VAR_6 ) &&
      ( ! VAR_23->aui ) ) {
  VAR_24 = VAR_28 >> 11;
  if ( VAR_23->speed == VAR_14 &&
       VAR_23->duplex == VAR_9) {
   FUNC_3( VAR_22, VAR_27, VAR_4, 0x0000);
  } else if ( VAR_23->speed == VAR_14 &&
       VAR_23->duplex == VAR_8) {
   VAR_23->tlanFullDuplex = VAR_21;
   FUNC_3( VAR_22, VAR_27, VAR_4, 0x0100);
  } else if ( VAR_23->speed == VAR_15 &&
       VAR_23->duplex == VAR_9) {
   FUNC_3( VAR_22, VAR_27, VAR_4, 0x2000);
  } else if ( VAR_23->speed == VAR_15 &&
       VAR_23->duplex == VAR_8) {
   VAR_23->tlanFullDuplex = VAR_21;
   FUNC_3( VAR_22, VAR_27, VAR_4, 0x2100);
  } else {


   FUNC_3( VAR_22, VAR_27, VAR_1, (VAR_24 << 5) | 1);

   FUNC_3( VAR_22, VAR_27, VAR_4, 0x1000 );

   FUNC_3( VAR_22, VAR_27, VAR_4, 0x1200 );





   FUNC_6( "TLAN: %s: Starting autonegotiation.\n", VAR_22->name );
   FUNC_4( VAR_22, (2*VAR_0), VAR_18 );
   return;
  }

 }

 if ( ( VAR_23->aui ) && ( VAR_23->phyNum != 0 ) ) {
  VAR_23->phyNum = 0;
  VAR_26 = VAR_11 | VAR_10 | VAR_12;
  FUNC_1( VAR_22->base_addr, VAR_13, VAR_26 );
  FUNC_4( VAR_22, (40*VAR_0/1000), VAR_19 );
  return;
 } else if ( VAR_23->phyNum == 0 ) {
  VAR_25 = 0;
         FUNC_2( VAR_22, VAR_27, VAR_20, &VAR_29 );
  if ( VAR_23->aui ) {
                 VAR_29 |= VAR_16;
  } else {
                 VAR_29 &= ~VAR_16;
   if ( VAR_23->duplex == VAR_8 ) {
    VAR_25 |= VAR_2;
    VAR_23->tlanFullDuplex = VAR_21;
   }
   if ( VAR_23->speed == VAR_15 ) {
    VAR_25 |= VAR_3;
   }
  }
  FUNC_3( VAR_22, VAR_27, VAR_4, VAR_25 );
         FUNC_3( VAR_22, VAR_27, VAR_20, VAR_29 );
 }




 FUNC_4( VAR_22, (4*VAR_0), VAR_17 );

}
