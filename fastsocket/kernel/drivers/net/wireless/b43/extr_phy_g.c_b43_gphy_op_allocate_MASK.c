
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct b43_txpower_lo_control* g; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_txpower_lo_control {struct b43_txpower_lo_control* lo_control; } ;
struct b43_phy_g {struct b43_phy_g* lo_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_txpower_lo_control*) ;
 struct b43_txpower_lo_control* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct b43_wldev *VAR_2)
{
 struct b43_phy_g *VAR_3;
 struct b43_txpower_lo_control *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_1);
 if (!VAR_3) {
  VAR_5 = -VAR_0;
  goto error;
 }
 VAR_2->phy.g = VAR_3;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4) {
  VAR_5 = -VAR_0;
  goto err_free_gphy;
 }
 VAR_3->lo_control = VAR_4;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5)
  goto err_free_lo;

 return 0;

err_free_lo:
 FUNC_1(VAR_4);
err_free_gphy:
 FUNC_1(VAR_3);
error:
 return VAR_5;
}
