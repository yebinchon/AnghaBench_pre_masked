
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct b43_phy_lp* lp; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_lp {int crs_usr_disable; int crs_sys_disable; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43_wldev*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_1, bool VAR_2)
{
 struct b43_phy_lp *VAR_3 = VAR_1->phy.lp;

 if (VAR_2)
  VAR_3->crs_usr_disable = 1;
 else
  VAR_3->crs_sys_disable = 1;
 FUNC_0(VAR_1, VAR_0, 0xFF1F, 0x80);
}
