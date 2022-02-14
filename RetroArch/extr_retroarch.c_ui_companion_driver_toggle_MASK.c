
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ui_companion_toggle; scalar_t__ desktop_menu_enable; } ;
struct TYPE_7__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_9__ {int (* toggle ) (int ,int) ;} ;
struct TYPE_8__ {int (* toggle ) (int ,int) ;int (* init ) () ;} ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int VAR_5 ;

void FUNC_3(bool VAR_6)
{




   if (VAR_2 && VAR_2->toggle)
      VAR_2->toggle(VAR_3, 0);
}
