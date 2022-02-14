
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpphy_tx_gain_table_entry {int dummy; } ;
struct TYPE_2__ {int rev; } ;
struct b43_wldev {TYPE_1__ phy; } ;


 int FUNC_0 (struct b43_wldev*,int,struct lpphy_tx_gain_table_entry) ;
 int FUNC_1 (struct b43_wldev*,int,struct lpphy_tx_gain_table_entry) ;

void FUNC_2(struct b43_wldev *VAR_0, int VAR_1,
       struct lpphy_tx_gain_table_entry VAR_2)
{
 if (VAR_0->phy.rev >= 2)
  FUNC_1(VAR_0, VAR_1, VAR_2);
 else
  FUNC_0(VAR_0, VAR_1, VAR_2);
}
