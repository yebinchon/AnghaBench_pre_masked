
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct b43_wldev {int dummy; } ;
struct b43_nphy_channeltab_entry_rev2 {scalar_t__ channel; } ;


 unsigned int FUNC_0 (struct b43_nphy_channeltab_entry_rev2*) ;
 struct b43_nphy_channeltab_entry_rev2* VAR_0 ;

const struct b43_nphy_channeltab_entry_rev2 *
FUNC_1(struct b43_wldev *VAR_1, u8 VAR_2)
{
 const struct b43_nphy_channeltab_entry_rev2 *VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  VAR_3 = &(VAR_0[VAR_4]);
  if (VAR_3->channel == VAR_2)
   return VAR_3;
 }

 return ((void*)0);
}
