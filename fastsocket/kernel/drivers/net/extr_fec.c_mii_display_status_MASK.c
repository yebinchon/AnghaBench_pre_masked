
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct net_device {int name; } ;
struct fec_enet_private {int phy_status; int link; int old_link; } ;






 int volatile VAR_0 ;
 int volatile VAR_1 ;
 int volatile VAR_2 ;
 struct fec_enet_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3)
{
 struct fec_enet_private *VAR_4 = FUNC_0(VAR_3);
 volatile uint *VAR_5 = &(VAR_4->phy_status);

 if (!VAR_4->link && !VAR_4->old_link) {

  return;
 }

 FUNC_1("%s: status: ", VAR_3->name);

 if (!VAR_4->link) {
  FUNC_1("link down");
 } else {
  FUNC_1("link up");

  switch(*VAR_5 & VAR_2) {
  case 131: FUNC_1(", 100MBit Full Duplex"); break;
  case 130: FUNC_1(", 100MBit Half Duplex"); break;
  case 129: FUNC_1(", 10MBit Full Duplex"); break;
  case 128: FUNC_1(", 10MBit Half Duplex"); break;
  default:
   FUNC_1(", Unknown speed/duplex");
  }

  if (*VAR_5 & VAR_0)
   FUNC_1(", auto-negotiation complete");
 }

 if (*VAR_5 & VAR_1)
  FUNC_1(", remote fault");

 FUNC_1(".\n");
}
