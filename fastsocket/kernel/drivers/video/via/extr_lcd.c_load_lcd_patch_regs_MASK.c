
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* chip_info; TYPE_1__* lvds_setting_info; } ;
struct TYPE_5__ {int gfx_chip_name; } ;
struct TYPE_4__ {scalar_t__ display_method; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;






 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static void FUNC_5(int VAR_3, int VAR_4,
 int VAR_5, int VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3, VAR_4);

 FUNC_4();


 if ((VAR_6 == VAR_0) &&
  (VAR_2->lvds_setting_info->display_method ==
     VAR_1)) {
  switch (VAR_2->chip_info->gfx_chip_name) {
  case 133:
  case 130:
   FUNC_0(VAR_3, VAR_4, VAR_5);
   break;
  case 129:
   break;
  case 128:
  case 132:
  case 131:
   FUNC_1(VAR_3, VAR_4, VAR_5);
  }
 }

 FUNC_3();
}
