
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* tmds_setting_info; TYPE_2__* chip_info; } ;
struct TYPE_5__ {int gfx_chip_name; } ;
struct TYPE_4__ {int h_active; int v_active; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int,scalar_t__) ;
 TYPE_3__* VAR_10 ;

__attribute__((used)) static void FUNC_1(void)
{

 FUNC_0(VAR_6, VAR_9, 0, VAR_1);
 FUNC_0(VAR_7, VAR_9, 0, VAR_4);

 switch (VAR_10->chip_info->gfx_chip_name) {
 case 129:
  {
   if ((VAR_10->tmds_setting_info->h_active == 1600) &&
    (VAR_10->tmds_setting_info->v_active ==
    1200))
    FUNC_0(VAR_5, VAR_8, 0x03,
            VAR_0 + VAR_1 + VAR_2);
   else
    FUNC_0(VAR_5, VAR_8, 0x07,
            VAR_0 + VAR_1 + VAR_2);
   break;
  }

 case 128:
  {
   FUNC_0(VAR_5, VAR_8, 0x07,
           VAR_0 + VAR_1 + VAR_2 + VAR_3);
   FUNC_0(VAR_6, VAR_9, 0x02, VAR_1);
   FUNC_0(VAR_7, VAR_9, 0x10, VAR_4);
   break;
  }

 default:
  {
   break;
  }
 }
}
