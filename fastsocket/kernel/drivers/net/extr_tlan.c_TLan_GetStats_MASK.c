
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device_stats {int dummy; } ;
struct net_device {struct net_device_stats stats; int base_addr; int name; } ;
struct TYPE_3__ {scalar_t__ txList; scalar_t__ rxList; int txBusyCount; int rxEocCount; } ;
typedef TYPE_1__ TLanPrivateInfo ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,char*,int) ;
 int FUNC_4 (struct net_device*,int ) ;
 int VAR_7 ;
 TYPE_1__* FUNC_5 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_6( struct net_device *VAR_8 )
{
 TLanPrivateInfo *VAR_9 = FUNC_5(VAR_8);
 int VAR_10;


 FUNC_4( VAR_8, VAR_6 );

 FUNC_0( VAR_2, "RECEIVE:  %s EOC count = %d\n", VAR_8->name,
    VAR_9->rxEocCount );
 FUNC_0( VAR_3, "TRANSMIT:  %s Busy count = %d\n", VAR_8->name,
    VAR_9->txBusyCount );
 if ( VAR_7 & VAR_0 ) {
  FUNC_2( VAR_8->base_addr );
  FUNC_1( VAR_8 );
 }
 if ( VAR_7 & VAR_1 ) {
  for ( VAR_10 = 0; VAR_10 < VAR_4; VAR_10++ )
   FUNC_3( VAR_9->rxList + VAR_10, "RX", VAR_10 );
  for ( VAR_10 = 0; VAR_10 < VAR_5; VAR_10++ )
   FUNC_3( VAR_9->txList + VAR_10, "TX", VAR_10 );
 }

 return &VAR_8->stats;

}
