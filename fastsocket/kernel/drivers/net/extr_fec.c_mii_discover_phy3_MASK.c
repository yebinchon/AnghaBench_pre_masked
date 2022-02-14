
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct net_device {int dummy; } ;
struct fec_enet_private {int phy_id; int phy_id_done; TYPE_1__* phy; int phy_addr; } ;
struct TYPE_2__ {int id; int name; } ;


 struct fec_enet_private* FUNC_0 (struct net_device*) ;
 TYPE_1__** VAR_0 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(uint VAR_1, struct net_device *VAR_2)
{
 struct fec_enet_private *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2);
 VAR_3->phy_id |= (VAR_1 & 0xffff);
 FUNC_1("fec: PHY @ 0x%x, ID 0x%08x", VAR_3->phy_addr, VAR_3->phy_id);

 for(VAR_4 = 0; VAR_0[VAR_4]; VAR_4++) {
  if(VAR_0[VAR_4]->id == (VAR_3->phy_id >> 4))
   break;
 }

 if (VAR_0[VAR_4])
  FUNC_1(" -- %s\n", VAR_0[VAR_4]->name);
 else
  FUNC_1(" -- unknown PHY!\n");

 VAR_3->phy = VAR_0[VAR_4];
 VAR_3->phy_id_done = 1;
}
