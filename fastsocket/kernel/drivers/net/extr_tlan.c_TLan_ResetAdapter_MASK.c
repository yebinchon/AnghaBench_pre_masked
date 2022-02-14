
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int base_addr; } ;
struct TYPE_5__ {int tlanRev; int aui; scalar_t__ duplex; scalar_t__ phyNum; TYPE_1__* adapter; int tlanFullDuplex; scalar_t__ phyOnline; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_2__ TLanPrivateInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
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
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int) ;
 int VAR_24 ;
 int FUNC_7 (int) ;
 TYPE_2__* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13( struct net_device *VAR_25 )
{
 TLanPrivateInfo *VAR_26 = FUNC_8(VAR_25);
 int VAR_27;
 u32 VAR_28;
 u32 VAR_29;
 u8 VAR_30;

 VAR_26->tlanFullDuplex = VAR_0;
 VAR_26->phyOnline=0;
 FUNC_9(VAR_25);



 VAR_29 = FUNC_7(VAR_25->base_addr + VAR_13);
 VAR_29 |= VAR_9;
 FUNC_10(VAR_29, VAR_25->base_addr + VAR_13);

 FUNC_12(1000);



 VAR_29 = FUNC_7(VAR_25->base_addr + VAR_13);
 VAR_29 |= VAR_10;
 FUNC_10(VAR_29, VAR_25->base_addr + VAR_13);



  for ( VAR_27 = VAR_4; VAR_27 <= VAR_8; VAR_27 += 4 ) {
  FUNC_1( VAR_25->base_addr, (u16) VAR_27, 0 );
 }



 VAR_29 = VAR_18 | VAR_17 | VAR_20;
 FUNC_0( VAR_25->base_addr, VAR_21, (u16) VAR_29 );



  FUNC_10( VAR_12 | 0x3f, VAR_25->base_addr + VAR_13 );
  FUNC_10( VAR_11 | 0x9, VAR_25->base_addr + VAR_13 );



 FUNC_11( VAR_22, VAR_25->base_addr + VAR_5 );
 VAR_28 = VAR_25->base_addr + VAR_6 + VAR_22;
 FUNC_6( VAR_23, VAR_28 );



 if ( VAR_26->tlanRev >= 0x30 ) {
  VAR_30 = VAR_15 | VAR_14;
  FUNC_2( VAR_25->base_addr, VAR_16, VAR_30 );
 }
 FUNC_4( VAR_25 );
 VAR_29 = VAR_18 | VAR_17;

 if ( VAR_26->adapter->flags & VAR_2 ) {
  VAR_29 |= VAR_19;
  if ( VAR_26->aui == 1 ) {
   FUNC_2( VAR_25->base_addr, VAR_1, 0x0a );
  } else if ( VAR_26->duplex == VAR_7 ) {
   FUNC_2( VAR_25->base_addr, VAR_1, 0x00 );
   VAR_26->tlanFullDuplex = VAR_24;
  } else {
   FUNC_2( VAR_25->base_addr, VAR_1, 0x08 );
  }
 }

 if ( VAR_26->phyNum == 0 ) {
  VAR_29 |= VAR_20;
 }
 FUNC_0( VAR_25->base_addr, VAR_21, (u16) VAR_29 );

 if ( VAR_26->adapter->flags & VAR_3 ) {
  FUNC_3( VAR_25 );
 } else {
  FUNC_5( VAR_25 );
 }

}
