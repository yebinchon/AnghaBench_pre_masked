
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct net_device {scalar_t__ name; } ;
struct TYPE_5__ {scalar_t__* phy; size_t phyNum; TYPE_1__* adapter; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_2__ TLanPrivateInfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*,scalar_t__,scalar_t__,scalar_t__*) ;
 TYPE_2__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3( struct net_device *VAR_2 )
{
 TLanPrivateInfo *VAR_3 = FUNC_1(VAR_2);
 u16 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_9 = VAR_3->phy[VAR_3->phyNum];

 if ( VAR_3->adapter->flags & VAR_0 ) {
  FUNC_2( "TLAN:   Device %s, Unmanaged PHY.\n", VAR_2->name );
 } else if ( VAR_9 <= VAR_1 ) {
  FUNC_2( "TLAN:   Device %s, PHY 0x%02x.\n", VAR_2->name, VAR_9 );
  FUNC_2( "TLAN:      Off.  +0     +1     +2     +3 \n" );
                for ( VAR_4 = 0; VAR_4 < 0x20; VAR_4+= 4 ) {
   FUNC_2( "TLAN:      0x%02x", VAR_4 );
   FUNC_0( VAR_2, VAR_9, VAR_4, &VAR_5 );
   FUNC_2( " 0x%04hx", VAR_5 );
   FUNC_0( VAR_2, VAR_9, VAR_4 + 1, &VAR_6 );
   FUNC_2( " 0x%04hx", VAR_6 );
   FUNC_0( VAR_2, VAR_9, VAR_4 + 2, &VAR_7 );
   FUNC_2( " 0x%04hx", VAR_7 );
   FUNC_0( VAR_2, VAR_9, VAR_4 + 3, &VAR_8 );
   FUNC_2( " 0x%04hx\n", VAR_8 );
  }
 } else {
  FUNC_2( "TLAN:   Device %s, Invalid PHY.\n", VAR_2->name );
 }

}
