
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int (* msg_queue_push ) (int ,char const*,unsigned int,unsigned int,int) ;} ;
typedef TYPE_2__ ui_companion_driver_t ;
struct TYPE_7__ {scalar_t__ desktop_menu_enable; } ;
struct TYPE_9__ {TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_10__ {int (* msg_queue_push ) (int ,char const*,unsigned int,unsigned int,int) ;} ;


 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char const*,unsigned int,unsigned int,int) ;
 int FUNC_1 (int ,char const*,unsigned int,unsigned int,int) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(
      const char *VAR_6, unsigned VAR_7, unsigned VAR_8, bool VAR_9)
{
   const ui_companion_driver_t *VAR_10 = VAR_2;

   if (VAR_10 && VAR_10->msg_queue_push)
      VAR_10->msg_queue_push(VAR_3, VAR_6, VAR_7, VAR_8, VAR_9);
}
