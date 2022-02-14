
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct brcms_phy {int phycal_timer; TYPE_1__* sh; } ;
struct TYPE_2__ {int up; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct brcms_phy*) ;
 scalar_t__ FUNC_1 (struct brcms_phy*) ;
 scalar_t__ FUNC_2 (struct brcms_phy*) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct brcms_phy*) ;
 int FUNC_5 (struct brcms_phy*) ;
 int FUNC_6 (struct brcms_phy*,int ) ;

__attribute__((used)) static void FUNC_7(struct brcms_phy *VAR_1)
{
 uint VAR_2 = 5;

 if (FUNC_0(VAR_1)) {
  if (!VAR_1->sh->up) {
   FUNC_4(VAR_1);
   return;
  }

  if (FUNC_2(VAR_1) || FUNC_1(VAR_1)) {

   VAR_2 = 1000;
   FUNC_5(VAR_1);
  } else
   FUNC_6(VAR_1, VAR_0);
  FUNC_3(VAR_1->phycal_timer, VAR_2, 0);
  return;
 }

}
