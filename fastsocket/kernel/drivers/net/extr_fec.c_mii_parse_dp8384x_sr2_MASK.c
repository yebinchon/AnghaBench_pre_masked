
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct net_device {int dummy; } ;
struct fec_enet_private {int phy_status; int link; } ;


 int volatile VAR_0 ;
 int volatile VAR_1 ;
 int volatile VAR_2 ;
 int volatile VAR_3 ;
 int volatile VAR_4 ;
 int volatile VAR_5 ;
 int volatile VAR_6 ;
 int volatile VAR_7 ;
 struct fec_enet_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(uint VAR_8, struct net_device *VAR_9)
{
 struct fec_enet_private *VAR_10 = FUNC_0(VAR_9);
 volatile uint *VAR_11 = &(VAR_10->phy_status);

 *VAR_11 &= ~(VAR_7 | VAR_6 | VAR_4);


 if (VAR_8 & 0x0001) {
  VAR_10->link = 1;
  *VAR_11 |= VAR_6;
 } else
  VAR_10->link = 0;

 if (VAR_8 & 0x0010)
  *VAR_11 |= VAR_4;
 if (VAR_8 & 0x0002) {
  if (VAR_8 & 0x0004)
   *VAR_11 |= VAR_2;
  else
   *VAR_11 |= VAR_3;
 } else {
  if (VAR_8 & 0x0004)
   *VAR_11 |= VAR_0;
  else
   *VAR_11 |= VAR_1;
 }
 if (VAR_8 & 0x0008)
  *VAR_11 |= VAR_5;
}
