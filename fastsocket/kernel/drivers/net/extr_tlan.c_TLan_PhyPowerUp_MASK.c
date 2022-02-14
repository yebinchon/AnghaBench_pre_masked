
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int base_addr; int name; } ;
struct TYPE_3__ {size_t phyNum; int * phy; } ;
typedef TYPE_1__ TLanPrivateInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,int ,int ,int ) ;
 int FUNC_3 (struct net_device*,int,int ) ;
 TYPE_1__* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5( struct net_device *VAR_5 )
{
 TLanPrivateInfo *VAR_6 = FUNC_4(VAR_5);
 u16 VAR_7;

 FUNC_0( VAR_3, "%s: Powering up PHY.\n", VAR_5->name );
 FUNC_1( VAR_5->base_addr );
 VAR_7 = VAR_1;
 FUNC_2( VAR_5, VAR_6->phy[VAR_6->phyNum], VAR_2, VAR_7 );
 FUNC_1(VAR_5->base_addr);




 FUNC_3( VAR_5, (VAR_0/20), VAR_4 );

}
