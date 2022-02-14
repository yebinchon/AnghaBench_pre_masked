
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct net_device {int dummy; } ;
struct fec_enet_private {int phy_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int volatile VAR_4 ;
 struct fec_enet_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(uint VAR_5, struct net_device *VAR_6)
{
 struct fec_enet_private *VAR_7 = FUNC_0(VAR_6);
 volatile uint *VAR_8 = &(VAR_7->phy_status);
 uint VAR_9;

 VAR_9 = *VAR_8 & ~(VAR_4);

 if (VAR_5 & 0x0020)
  VAR_9 |= VAR_3;
 if (VAR_5 & 0x0040)
  VAR_9 |= VAR_2;
 if (VAR_5 & 0x0080)
  VAR_9 |= VAR_1;
 if (VAR_5 & 0x00100)
  VAR_9 |= VAR_0;
 *VAR_8 = VAR_9;
}
