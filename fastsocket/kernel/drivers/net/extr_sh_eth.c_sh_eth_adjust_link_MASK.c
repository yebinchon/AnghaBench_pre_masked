
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sh_eth_private {int duplex; scalar_t__ speed; scalar_t__ link; TYPE_1__* cd; struct phy_device* phydev; } ;
struct phy_device {scalar_t__ link; int duplex; scalar_t__ speed; } ;
struct net_device {scalar_t__ base_addr; } ;
struct TYPE_2__ {int (* set_rate ) (struct net_device*) ;int (* set_duplex ) (struct net_device*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 struct sh_eth_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct phy_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_4)
{
 struct sh_eth_private *VAR_5 = FUNC_2(VAR_4);
 struct phy_device *VAR_6 = VAR_5->phydev;
 u32 VAR_7 = VAR_4->base_addr;
 int VAR_8 = 0;

 if (VAR_6->link != VAR_3) {
  if (VAR_6->duplex != VAR_5->duplex) {
   VAR_8 = 1;
   VAR_5->duplex = VAR_6->duplex;
   if (VAR_5->cd->set_duplex)
    VAR_5->cd->set_duplex(VAR_4);
  }

  if (VAR_6->speed != VAR_5->speed) {
   VAR_8 = 1;
   VAR_5->speed = VAR_6->speed;
   if (VAR_5->cd->set_rate)
    VAR_5->cd->set_rate(VAR_4);
  }
  if (VAR_5->link == VAR_3) {
   FUNC_1((FUNC_0(VAR_7 + VAR_0) & ~VAR_2)
     | VAR_1, VAR_7 + VAR_0);
   VAR_8 = 1;
   VAR_5->link = VAR_6->link;
  }
 } else if (VAR_5->link) {
  VAR_8 = 1;
  VAR_5->link = VAR_3;
  VAR_5->speed = 0;
  VAR_5->duplex = -1;
 }

 if (VAR_8)
  FUNC_3(VAR_6);
}
