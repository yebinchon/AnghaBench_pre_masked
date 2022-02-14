
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct brcms_cm_info {struct brcms_c_info* wlc; } ;
struct brcms_c_info {TYPE_2__* pub; TYPE_1__* hw; } ;
struct TYPE_4__ {int unit; } ;
struct TYPE_3__ {int d11core; } ;


 scalar_t__ FUNC_0 (struct brcms_c_info*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static bool
FUNC_5(struct brcms_cm_info *VAR_0, u16 VAR_1)
{
 struct brcms_c_info *VAR_2 = VAR_0->wlc;
 u8 VAR_3 = FUNC_1(VAR_1);


 if (FUNC_2(VAR_1)) {
  FUNC_3(VAR_2->hw->d11core, "wl%d: malformed chanspec 0x%x\n",
     VAR_2->pub->unit, VAR_1);
  return 0;
 }

 if (FUNC_0(VAR_0->wlc, VAR_3) !=
     FUNC_4(VAR_1))
  return 0;

 return 1;
}
