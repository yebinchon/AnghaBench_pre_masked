
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct stmmac_priv {unsigned int flow_ctrl; unsigned int pause; int oldduplex; int speed; int oldlink; int lock; int bsp_priv; int (* fix_mac_speed ) (int ,int) ;TYPE_4__* mac_type; int is_gmac; struct phy_device* phydev; } ;
struct phy_device {int duplex; int speed; scalar_t__ pause; scalar_t__ link; int addr; } ;
struct net_device {unsigned long base_addr; int name; } ;
struct TYPE_6__ {int port; int speed; int duplex; } ;
struct TYPE_7__ {TYPE_2__ link; } ;
struct TYPE_8__ {TYPE_3__ hw; TYPE_1__* ops; } ;
struct TYPE_5__ {int (* flow_ctrl ) (unsigned long,int,unsigned int,unsigned int) ;} ;


 int FUNC_0 (int ,int ,char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct stmmac_priv* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct stmmac_priv*) ;
 int FUNC_4 (struct phy_device*) ;
 int FUNC_5 (char*,int ,int) ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (unsigned long,int,unsigned int,unsigned int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_4)
{
 struct stmmac_priv *VAR_5 = FUNC_2(VAR_4);
 struct phy_device *VAR_6 = VAR_5->phydev;
 unsigned long VAR_7 = VAR_4->base_addr;
 unsigned long VAR_8;
 int VAR_9 = 0;
 unsigned int VAR_10 = VAR_5->flow_ctrl, VAR_11 = VAR_5->pause;

 if (VAR_6 == ((void*)0))
  return;

 FUNC_0(VAR_3, VAR_0, "stmmac_adjust_link: called.  address %d link %d\n",
     VAR_6->addr, VAR_6->link);

 FUNC_7(&VAR_5->lock, VAR_8);
 if (VAR_6->link) {
  u32 VAR_12 = FUNC_6(VAR_7 + VAR_1);



  if (VAR_6->duplex != VAR_5->oldduplex) {
   VAR_9 = 1;
   if (!(VAR_6->duplex))
    VAR_12 &= ~VAR_5->mac_type->hw.link.duplex;
   else
    VAR_12 |= VAR_5->mac_type->hw.link.duplex;
   VAR_5->oldduplex = VAR_6->duplex;
  }

  if (VAR_6->pause)
   VAR_5->mac_type->ops->flow_ctrl(VAR_7, VAR_6->duplex,
             VAR_10, VAR_11);

  if (VAR_6->speed != VAR_5->speed) {
   VAR_9 = 1;
   switch (VAR_6->speed) {
   case 1000:
    if (FUNC_1(VAR_5->is_gmac))
     VAR_12 &= ~VAR_5->mac_type->hw.link.port;
    break;
   case 100:
   case 10:
    if (VAR_5->is_gmac) {
     VAR_12 |= VAR_5->mac_type->hw.link.port;
     if (VAR_6->speed == VAR_2) {
      VAR_12 |=
          VAR_5->mac_type->hw.link.
          speed;
     } else {
      VAR_12 &=
          ~(VAR_5->mac_type->hw.
            link.speed);
     }
    } else {
     VAR_12 &= ~VAR_5->mac_type->hw.link.port;
    }
    VAR_5->fix_mac_speed(VAR_5->bsp_priv,
          VAR_6->speed);
    break;
   default:
    if (FUNC_3(VAR_5))
     FUNC_5("%s: Speed (%d) is not 10"
           " or 100!\n", VAR_4->name, VAR_6->speed);
    break;
   }

   VAR_5->speed = VAR_6->speed;
  }

  FUNC_11(VAR_12, VAR_7 + VAR_1);

  if (!VAR_5->oldlink) {
   VAR_9 = 1;
   VAR_5->oldlink = 1;
  }
 } else if (VAR_5->oldlink) {
  VAR_9 = 1;
  VAR_5->oldlink = 0;
  VAR_5->speed = 0;
  VAR_5->oldduplex = -1;
 }

 if (VAR_9 && FUNC_3(VAR_5))
  FUNC_4(VAR_6);

 FUNC_8(&VAR_5->lock, VAR_8);

 FUNC_0(VAR_3, VAR_0, "stmmac_adjust_link: exiting\n");
}
