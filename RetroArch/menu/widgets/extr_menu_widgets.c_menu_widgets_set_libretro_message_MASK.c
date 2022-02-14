
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int duration; int * userdata; int cb; } ;
typedef TYPE_1__ menu_timer_ctx_entry_t ;
typedef uintptr_t menu_animation_ctx_tag ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char const*,unsigned int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (uintptr_t*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,char const*,int ) ;
 scalar_t__ FUNC_5 (char const*) ;

void FUNC_6(const char *VAR_9, unsigned VAR_10)
{
   menu_animation_ctx_tag VAR_11 = (uintptr_t) &VAR_5;
   menu_timer_ctx_entry_t VAR_12;

   FUNC_4(VAR_3, VAR_9, VAR_1);

   VAR_4 = VAR_0;


   FUNC_2(&VAR_5);
   FUNC_1(&VAR_11);

   VAR_12.cb = VAR_7;
   VAR_12.duration = VAR_10;
   VAR_12.userdata = ((void*)0);

   FUNC_3(&VAR_5, &VAR_12);


   VAR_6 = FUNC_0(VAR_2, VAR_9, (unsigned)FUNC_5(VAR_9), 1) + VAR_8 * 2;
}
