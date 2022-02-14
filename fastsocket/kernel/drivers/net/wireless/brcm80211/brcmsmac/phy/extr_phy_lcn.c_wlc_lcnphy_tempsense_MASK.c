
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct brcms_phy_lcnphy {int lcnphy_tempsense_option; } ;
struct TYPE_3__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {TYPE_2__* sh; scalar_t__ hwpwrctrl_capable; int d11core; TYPE_1__ u; } ;
typedef int s32 ;
struct TYPE_4__ {int physhim; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct brcms_phy*,int,int,int) ;
 int FUNC_3 (struct brcms_phy*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct brcms_phy*) ;
 int FUNC_8 (struct brcms_phy*,int) ;
 int FUNC_9 (struct brcms_phy*,int ) ;

u16 FUNC_10(struct brcms_phy *VAR_3, bool VAR_4)
{
 u16 VAR_5, VAR_6;
 s32 VAR_7 = 0;
 bool VAR_8 = 0;
 u16 VAR_9 = FUNC_7(VAR_3);
 struct brcms_phy_lcnphy *VAR_10 = VAR_3->u.pi_lcnphy;

 if (VAR_4 == 1) {
  VAR_8 = (0 == (FUNC_1(VAR_3->d11core,
          FUNC_0(VAR_2)) &
     VAR_0));
  if (!VAR_8)
   FUNC_6(VAR_3->sh->physhim);
  FUNC_9(VAR_3, VAR_1);
 }
 VAR_5 = FUNC_3(VAR_3, 0x476) & 0x1FF;
 VAR_6 = FUNC_3(VAR_3, 0x477) & 0x1FF;

 if (VAR_5 > 255)
  VAR_7 = (int)(VAR_5 - 512);
 else
  VAR_7 = (int)VAR_5;

 if (VAR_10->lcnphy_tempsense_option == 1 || VAR_3->hwpwrctrl_capable) {
  if (VAR_6 > 255)
   VAR_7 = (int)(VAR_7 - VAR_6 + 512);
  else
   VAR_7 = (int)(VAR_7 - VAR_6);
 } else {
  if (VAR_6 > 255)
   VAR_7 = (int)(VAR_7 + VAR_6 - 512);
  else
   VAR_7 = (int)(VAR_7 + VAR_6);
  VAR_7 = VAR_7 / 2;
 }
 if (VAR_7 < 0)
  VAR_7 = VAR_7 + 512;

 if (VAR_10->lcnphy_tempsense_option == 2)
  VAR_7 = VAR_5;

 if (VAR_4)
  FUNC_8(VAR_3, VAR_9);

 if (VAR_4 == 1) {

  FUNC_2(VAR_3, 0x448, (0x1 << 14), (1) << 14);

  FUNC_4(100);
  FUNC_2(VAR_3, 0x448, (0x1 << 14), (0) << 14);

  if (!VAR_8)
   FUNC_5(VAR_3->sh->physhim);
 }
 return (u16) VAR_7;
}
