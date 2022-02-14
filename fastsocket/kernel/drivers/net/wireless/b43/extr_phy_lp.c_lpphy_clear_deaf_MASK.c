
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct b43_phy_lp* lp; } ;
struct b43_wldev {int wl; TYPE_1__ phy; } ;
struct b43_phy_lp {int crs_usr_disable; int crs_sys_disable; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct b43_wldev*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_2, bool VAR_3)
{
 struct b43_phy_lp *VAR_4 = VAR_2->phy.lp;

 if (VAR_3)
  VAR_4->crs_usr_disable = 0;
 else
  VAR_4->crs_sys_disable = 0;

 if (!VAR_4->crs_usr_disable && !VAR_4->crs_sys_disable) {
  if (FUNC_0(VAR_2->wl) == VAR_1)
   FUNC_1(VAR_2, VAR_0,
     0xFF1F, 0x60);
  else
   FUNC_1(VAR_2, VAR_0,
     0xFF1F, 0x20);
 }
}
