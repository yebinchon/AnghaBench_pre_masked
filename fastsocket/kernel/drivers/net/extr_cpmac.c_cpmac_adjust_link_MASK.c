
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct cpmac_priv {int oldduplex; scalar_t__ oldspeed; int oldlink; int lock; TYPE_1__* phy; } ;
struct TYPE_2__ {int duplex; scalar_t__ speed; scalar_t__ link; } ;


 scalar_t__ FUNC_0 () ;
 struct cpmac_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct cpmac_priv*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_0)
{
 struct cpmac_priv *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = 0;

 FUNC_5(&VAR_1->lock);
 if (VAR_1->phy->link) {
  FUNC_3(VAR_0);
  if (VAR_1->phy->duplex != VAR_1->oldduplex) {
   VAR_2 = 1;
   VAR_1->oldduplex = VAR_1->phy->duplex;
  }

  if (VAR_1->phy->speed != VAR_1->oldspeed) {
   VAR_2 = 1;
   VAR_1->oldspeed = VAR_1->phy->speed;
  }

  if (!VAR_1->oldlink) {
   VAR_2 = 1;
   VAR_1->oldlink = 1;
  }
 } else if (VAR_1->oldlink) {
  VAR_2 = 1;
  VAR_1->oldlink = 0;
  VAR_1->oldspeed = 0;
  VAR_1->oldduplex = -1;
 }

 if (VAR_2 && FUNC_2(VAR_1) && FUNC_0())
  FUNC_4(VAR_1->phy);

 FUNC_6(&VAR_1->lock);
}
