
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * userdata; int duration; int cb; } ;
typedef TYPE_1__ menu_timer_ctx_entry_t ;
typedef uintptr_t menu_animation_ctx_tag ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (uintptr_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_3 (int ,char*,int ) ;

void FUNC_4(char *VAR_7)
{
   menu_animation_ctx_tag VAR_8 = (uintptr_t) &VAR_5;
   menu_timer_ctx_entry_t VAR_9;

   FUNC_3(VAR_3, VAR_7, VAR_2);

   VAR_4 = VAR_0;


   FUNC_1(&VAR_5);
   FUNC_0(&VAR_8);

   VAR_9.cb = VAR_6;
   VAR_9.duration = VAR_1;
   VAR_9.userdata = ((void*)0);

   FUNC_2(&VAR_5, &VAR_9);
}
