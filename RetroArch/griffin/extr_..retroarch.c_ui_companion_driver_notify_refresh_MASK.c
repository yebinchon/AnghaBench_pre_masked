
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int (* notify_refresh ) (int ) ;} ;
typedef TYPE_2__ ui_companion_driver_t ;
struct TYPE_7__ {scalar_t__ desktop_menu_enable; } ;
struct TYPE_9__ {TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_10__ {int (* notify_refresh ) (int ) ;} ;


 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 int VAR_5 ;

void FUNC_2(void)
{
   const ui_companion_driver_t *VAR_6 = VAR_2;




   if (!VAR_6)
      return;
   if (VAR_6->notify_refresh)
      VAR_6->notify_refresh(VAR_3);





}
