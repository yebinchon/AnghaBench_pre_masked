
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int rev; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_nphy_channeltab_entry_rev3 {scalar_t__ freq; } ;


 unsigned int FUNC_0 (struct b43_nphy_channeltab_entry_rev3*) ;
 int FUNC_1 (int) ;
 struct b43_nphy_channeltab_entry_rev3* VAR_0 ;
 struct b43_nphy_channeltab_entry_rev3* VAR_1 ;
 struct b43_nphy_channeltab_entry_rev3* VAR_2 ;
 struct b43_nphy_channeltab_entry_rev3* VAR_3 ;
 struct b43_nphy_channeltab_entry_rev3* VAR_4 ;
 struct b43_nphy_channeltab_entry_rev3* VAR_5 ;

const struct b43_nphy_channeltab_entry_rev3 *
FUNC_2(struct b43_wldev *VAR_6, u16 VAR_7)
{
 const struct b43_nphy_channeltab_entry_rev3 *VAR_8;
 unsigned int VAR_9, VAR_10;

 switch (VAR_6->phy.rev) {
 case 3:
  VAR_8 = VAR_0;
  VAR_9 = FUNC_0(VAR_0);
  break;
 case 4:
  VAR_8 = VAR_1;
  VAR_9 = FUNC_0(VAR_1);
  break;
 case 5:
  VAR_8 = VAR_2;
  VAR_9 = FUNC_0(VAR_2);
  break;
 case 6:
  VAR_8 = VAR_3;
  VAR_9 = FUNC_0(VAR_3);
  break;
 case 7:
 case 9:
  VAR_8 = VAR_4;
  VAR_9 = FUNC_0(VAR_4);
  break;
 case 8:
  VAR_8 = VAR_5;
  VAR_9 = FUNC_0(VAR_5);
  break;
 default:
  FUNC_1(1);
  return ((void*)0);
 }

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++, VAR_8++) {
  if (VAR_8->freq == VAR_7)
   return VAR_8;
 }

 return ((void*)0);
}
