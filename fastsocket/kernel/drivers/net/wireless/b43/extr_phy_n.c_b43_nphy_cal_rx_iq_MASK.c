
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nphy_txgains {int dummy; } ;
struct TYPE_2__ {int rev; } ;
struct b43_wldev {TYPE_1__ phy; } ;


 int FUNC_0 (struct b43_wldev*,struct nphy_txgains,int ,int) ;
 int FUNC_1 (struct b43_wldev*,struct nphy_txgains,int ,int) ;

__attribute__((used)) static int FUNC_2(struct b43_wldev *VAR_0,
   struct nphy_txgains VAR_1, u8 VAR_2, bool VAR_3)
{
 if (VAR_0->phy.rev >= 3)
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
