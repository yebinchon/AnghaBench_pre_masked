
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct net_device {int dummy; } ;
struct fec_enet_private {int phy_status; int link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int volatile VAR_4 ;
 int VAR_5 ;
 int volatile VAR_6 ;
 int volatile VAR_7 ;
 struct fec_enet_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(uint VAR_8, struct net_device *VAR_9)
{
 struct fec_enet_private *VAR_10 = FUNC_0(VAR_9);
 volatile uint *VAR_11 = &(VAR_10->phy_status);
 uint VAR_12;

 VAR_12 = *VAR_11 & ~(VAR_7 | VAR_6 | VAR_4);

 if (VAR_8 & 0x0400) {
  VAR_10->link = 1;
  VAR_12 |= VAR_6;
 } else {
  VAR_10->link = 0;
 }
 if (VAR_8 & 0x0080)
  VAR_12 |= VAR_4;
 if (VAR_8 & 0x4000) {
  if (VAR_8 & 0x0200)
   VAR_12 |= VAR_0;
  else
   VAR_12 |= VAR_1;
 } else {
  if (VAR_8 & 0x0200)
   VAR_12 |= VAR_2;
  else
   VAR_12 |= VAR_3;
 }
 if (VAR_8 & 0x0008)
  VAR_12 |= VAR_5;

 *VAR_11 = VAR_12;
}
