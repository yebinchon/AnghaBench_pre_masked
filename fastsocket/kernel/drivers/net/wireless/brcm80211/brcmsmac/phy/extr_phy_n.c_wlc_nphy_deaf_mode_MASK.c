
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_phy {scalar_t__ nphy_deaf_count; TYPE_1__* sh; } ;
struct TYPE_2__ {int physhim; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct brcms_phy*,int) ;

void FUNC_3(struct brcms_phy *VAR_0, bool VAR_1)
{
 FUNC_1(VAR_0->sh->physhim);

 if (VAR_1) {
  if (VAR_0->nphy_deaf_count == 0)
   FUNC_2(VAR_0, 1);
 } else if (VAR_0->nphy_deaf_count > 0) {
  FUNC_2(VAR_0, 0);
 }

 FUNC_0(VAR_0->sh->physhim);
}
