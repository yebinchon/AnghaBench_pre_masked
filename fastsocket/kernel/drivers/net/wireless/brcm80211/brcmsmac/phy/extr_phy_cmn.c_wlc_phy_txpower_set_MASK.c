
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef scalar_t__ u8 ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {int txpwroverride; TYPE_1__* sh; int d11core; scalar_t__* tx_user_target; } ;
struct TYPE_2__ {int physhim; scalar_t__ up; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct brcms_phy*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct brcms_phy*) ;
 int FUNC_6 (struct brcms_phy*) ;

int FUNC_7(struct brcms_phy_pub *VAR_4, uint VAR_5, bool VAR_6)
{
 struct brcms_phy *VAR_7 = (struct brcms_phy *) VAR_4;
 int VAR_8;

 if (VAR_5 > 127)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  VAR_7->tx_user_target[VAR_8] = (u8) VAR_5;

 VAR_7->txpwroverride = 0;

 if (VAR_7->sh->up) {
  if (!FUNC_1(VAR_7)) {
   bool VAR_9;

   VAR_9 = (0 == (FUNC_2(VAR_7->d11core,
           FUNC_0(VAR_3)) &
      VAR_1));

   if (!VAR_9)
    FUNC_4(VAR_7->sh->physhim);

   FUNC_6(VAR_7);
   FUNC_5(VAR_7);

   if (!VAR_9)
    FUNC_3(VAR_7->sh->physhim);
  }
 }
 return 0;
}
