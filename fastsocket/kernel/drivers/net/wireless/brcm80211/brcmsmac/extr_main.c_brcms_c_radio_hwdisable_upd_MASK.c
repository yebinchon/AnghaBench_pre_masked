
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_c_info {TYPE_1__* pub; int hw; } ;
struct TYPE_2__ {int radio_disabled; scalar_t__ hw_off; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct brcms_c_info *VAR_1)
{
 if (VAR_1->pub->hw_off)
  return;

 if (FUNC_0(VAR_1->hw))
  FUNC_2(VAR_1->pub->radio_disabled, VAR_0);
 else
  FUNC_1(VAR_1->pub->radio_disabled, VAR_0);
}
