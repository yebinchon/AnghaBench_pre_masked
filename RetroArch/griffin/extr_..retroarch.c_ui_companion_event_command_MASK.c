
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* event_command ) (int ,int) ;} ;
typedef TYPE_1__ ui_companion_driver_t ;
typedef enum event_command { ____Placeholder_event_command } event_command ;
struct TYPE_5__ {int (* event_command ) (int ,int) ;scalar_t__ toggle; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;

void FUNC_2(enum event_command VAR_5)
{
   const ui_companion_driver_t *VAR_6 = VAR_1;

   if (VAR_6 && VAR_6->event_command)
      VAR_6->event_command(VAR_2, VAR_5);




}
