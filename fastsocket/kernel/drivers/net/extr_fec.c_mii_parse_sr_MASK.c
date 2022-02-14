
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct net_device {int dummy; } ;
struct fec_enet_private {int phy_status; } ;


 int volatile VAR_0 ;
 int volatile VAR_1 ;
 int volatile VAR_2 ;
 struct fec_enet_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(uint VAR_3, struct net_device *VAR_4)
{
 struct fec_enet_private *VAR_5 = FUNC_0(VAR_4);
 volatile uint *VAR_6 = &(VAR_5->phy_status);
 uint VAR_7;

 VAR_7 = *VAR_6 & ~(VAR_2 | VAR_1 | VAR_0);

 if (VAR_3 & 0x0004)
  VAR_7 |= VAR_2;
 if (VAR_3 & 0x0010)
  VAR_7 |= VAR_1;
 if (VAR_3 & 0x0020)
  VAR_7 |= VAR_0;
 *VAR_6 = VAR_7;
}
