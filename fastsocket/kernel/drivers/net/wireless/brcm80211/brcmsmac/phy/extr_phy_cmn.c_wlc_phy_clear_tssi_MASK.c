
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {TYPE_1__* sh; } ;
struct TYPE_2__ {int physhim; } ;


 scalar_t__ FUNC_0 (struct brcms_phy*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2(struct brcms_phy_pub *VAR_5)
{
 struct brcms_phy *VAR_6 = (struct brcms_phy *) VAR_5;

 if (FUNC_0(VAR_6)) {
  return;
 } else {
  FUNC_1(VAR_6->sh->physhim, VAR_0, VAR_4);
  FUNC_1(VAR_6->sh->physhim, VAR_1, VAR_4);
  FUNC_1(VAR_6->sh->physhim, VAR_2, VAR_4);
  FUNC_1(VAR_6->sh->physhim, VAR_3, VAR_4);
 }
}
