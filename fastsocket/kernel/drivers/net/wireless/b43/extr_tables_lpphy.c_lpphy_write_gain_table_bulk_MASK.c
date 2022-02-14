
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpphy_tx_gain_table_entry {int dummy; } ;
struct b43_wldev {int dummy; } ;


 int FUNC_0 (struct b43_wldev*,int,struct lpphy_tx_gain_table_entry) ;

void FUNC_1(struct b43_wldev *VAR_0, int VAR_1, int VAR_2,
     struct lpphy_tx_gain_table_entry *VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_1; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(VAR_0, VAR_4, VAR_3[VAR_4]);
}
