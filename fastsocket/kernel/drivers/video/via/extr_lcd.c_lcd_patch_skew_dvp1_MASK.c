
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lvds_setting_information {int dummy; } ;
struct lvds_chip_information {scalar_t__ lvds_chip_name; } ;
struct TYPE_4__ {TYPE_1__* chip_info; } ;
struct TYPE_3__ {int gfx_chip_name; } ;



 scalar_t__ VAR_0 ;
 int FUNC_0 (struct lvds_setting_information*,struct lvds_chip_information*) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_1(struct lvds_setting_information
    *VAR_2,
    struct lvds_chip_information *VAR_3)
{
 if (VAR_0 == VAR_3->lvds_chip_name) {
  switch (VAR_1->chip_info->gfx_chip_name) {
  case 128:
   FUNC_0(VAR_2,
          VAR_3);
   break;
  }
 }
}
