
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int base_addr; int name; } ;
struct TYPE_5__ {scalar_t__* phy; size_t phyNum; TYPE_1__* adapter; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_2__ TLanPrivateInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,scalar_t__,int ,int) ;
 int FUNC_3 (struct net_device*,int,int ) ;
 TYPE_2__* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5( struct net_device *VAR_9 )
{
 TLanPrivateInfo *VAR_10 = FUNC_4(VAR_9);
 u16 VAR_11;

 FUNC_0( VAR_6, "%s: Powering down PHY(s).\n", VAR_9->name );
 VAR_11 = VAR_3 | VAR_2 | VAR_1;
 FUNC_1( VAR_9->base_addr );
 FUNC_2( VAR_9, VAR_10->phy[VAR_10->phyNum], VAR_4, VAR_11 );
 if ( ( VAR_10->phyNum == 0 ) &&
      ( VAR_10->phy[1] != VAR_7 ) &&
      ( ! ( VAR_10->adapter->flags & VAR_5 ) ) ) {
  FUNC_1( VAR_9->base_addr );
  FUNC_2( VAR_9, VAR_10->phy[1], VAR_4, VAR_11 );
 }





 FUNC_3( VAR_9, (VAR_0/20), VAR_8 );

}
