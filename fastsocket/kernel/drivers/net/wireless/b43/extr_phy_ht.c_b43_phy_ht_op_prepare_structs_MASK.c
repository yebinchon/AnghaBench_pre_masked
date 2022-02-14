
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {struct b43_phy_ht* ht; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_ht {int tx_pwr_ctl; int* bb_mult_save; scalar_t__* tx_pwr_idx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct b43_phy_ht*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_1)
{
 struct b43_phy *VAR_2 = &VAR_1->phy;
 struct b43_phy_ht *VAR_3 = VAR_2->ht;
 int VAR_4;

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));

 VAR_3->tx_pwr_ctl = 1;
 for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
  VAR_3->tx_pwr_idx[VAR_4] = VAR_0 + 1;

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
  VAR_3->bb_mult_save[VAR_4] = -1;
}
