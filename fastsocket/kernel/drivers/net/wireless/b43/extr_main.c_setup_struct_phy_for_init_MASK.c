
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {int dummy; } ;
struct b43_phy {int hardware_power_control; int phy_locked; int radio_locked; int txerr_cnt; int next_txpwr_check_time; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_3,
          struct b43_phy *VAR_4)
{
 VAR_4->hardware_power_control = !!VAR_2;
 VAR_4->next_txpwr_check_time = VAR_1;

 FUNC_0(&VAR_4->txerr_cnt, VAR_0);





}
