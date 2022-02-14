
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int base_addr; int name; } ;
struct TYPE_3__ {int* phy; size_t phyNum; } ;
typedef TYPE_1__ TLanPrivateInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct net_device*,int,int ,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*,int,int ,int) ;
 int FUNC_4 (struct net_device*,int,int ) ;
 TYPE_1__* FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6( struct net_device *VAR_6 )
{
 TLanPrivateInfo *VAR_7 = FUNC_5(VAR_6);
 u16 VAR_8;
 u16 VAR_9;

 VAR_8 = VAR_7->phy[VAR_7->phyNum];

 FUNC_0( VAR_4, "%s: Reseting PHY.\n", VAR_6->name );
 FUNC_2( VAR_6->base_addr );
 VAR_9 = VAR_1 | VAR_2;
 FUNC_3( VAR_6, VAR_8, VAR_3, VAR_9 );
 FUNC_1( VAR_6, VAR_8, VAR_3, &VAR_9 );
 while ( VAR_9 & VAR_2 ) {
  FUNC_1( VAR_6, VAR_8, VAR_3, &VAR_9 );
 }





 FUNC_4( VAR_6, (VAR_0/20), VAR_5 );

}
