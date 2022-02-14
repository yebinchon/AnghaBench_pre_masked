
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint ;
typedef int u32 ;
struct TYPE_5__ {int extpagain; } ;
struct TYPE_6__ {int radiorev; int phy_rev; } ;
struct TYPE_4__ {int extpagain; } ;
struct brcms_phy {TYPE_2__ srom_fem2g; TYPE_3__ pubpi; TYPE_1__ srom_fem5g; int radio_chanspec; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct brcms_phy*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * FUNC_4 (struct brcms_phy*) ;

__attribute__((used)) static u32 *FUNC_5(struct brcms_phy *VAR_8)
{
 u32 *VAR_9 = ((void*)0);
 uint VAR_10 = VAR_8->pubpi.phy_rev;

 if (FUNC_3(VAR_8)) {
  VAR_9 =
   FUNC_4(VAR_8);
 } else {
  if (FUNC_0(VAR_8->radio_chanspec)) {
   if (FUNC_2(VAR_10, 3))
    VAR_9 = VAR_1;
   else if (FUNC_2(VAR_10, 4))
    VAR_9 =
     (VAR_8->srom_fem5g.extpagain == 3) ?
     VAR_0 :
     VAR_2;
   else
    VAR_9 = VAR_3;
  } else {
   if (FUNC_1(VAR_10, 7)) {
    if (VAR_8->pubpi.radiorev == 3)
     VAR_9 =
      VAR_5;
    else if (VAR_8->pubpi.radiorev == 5)
     VAR_9 =
      VAR_6;
   } else {
    if (FUNC_1(VAR_10, 5) &&
       (VAR_8->srom_fem2g.extpagain == 3))
     VAR_9 =
      VAR_4;
    else
     VAR_9 =
      VAR_7;
   }
  }
 }
 return VAR_9;
}
