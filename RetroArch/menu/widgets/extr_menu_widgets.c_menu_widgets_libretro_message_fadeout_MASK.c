
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef uintptr_t menu_animation_ctx_tag ;
struct TYPE_3__ {uintptr_t tag; float target_value; int * userdata; int * subject; int easing_enum; int duration; int * cb; } ;
typedef TYPE_1__ menu_animation_ctx_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(void *VAR_4)
{
   menu_animation_ctx_tag VAR_5 = (uintptr_t) &VAR_3;
   menu_animation_ctx_entry_t VAR_6;


   VAR_6.cb = ((void*)0);
   VAR_6.duration = VAR_1;
   VAR_6.easing_enum = VAR_0;
   VAR_6.subject = &VAR_2;
   VAR_6.tag = VAR_5;
   VAR_6.target_value = 0.0f;
   VAR_6.userdata = ((void*)0);

   FUNC_0(&VAR_6);
}
