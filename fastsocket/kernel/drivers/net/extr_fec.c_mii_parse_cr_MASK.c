
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct net_device {int dummy; } ;
struct fec_enet_private {int phy_status; } ;


 int volatile VAR_0 ;
 int volatile VAR_1 ;
 struct fec_enet_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(uint VAR_2, struct net_device *VAR_3)
{
 struct fec_enet_private *VAR_4 = FUNC_0(VAR_3);
 volatile uint *VAR_5 = &(VAR_4->phy_status);
 uint VAR_6;

 VAR_6 = *VAR_5 & ~(VAR_0 | VAR_1);

 if (VAR_2 & 0x1000)
  VAR_6 |= VAR_0;
 if (VAR_2 & 0x4000)
  VAR_6 |= VAR_1;
 *VAR_5 = VAR_6;
}
