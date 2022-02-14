
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
 int volatile VAR_5 ;
 struct fec_enet_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(uint VAR_6, struct net_device *VAR_7)
{
 struct fec_enet_private *VAR_8 = FUNC_0(VAR_7);
 volatile uint *VAR_9 = &(VAR_8->phy_status);
 uint VAR_10;

 VAR_10 = *VAR_9 & ~(VAR_5 | VAR_4);

 if (VAR_6 & 0x0080)
  VAR_10 |= VAR_4;
 if (VAR_6 & 0x0400)
  VAR_10 |= ((VAR_6 & 0x0800) ? VAR_0 : VAR_1);
 else
  VAR_10 |= ((VAR_6 & 0x0800) ? VAR_2 : VAR_3);

 *VAR_9 = VAR_10;
}
