
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ozone_handle_t ;
struct TYPE_3__ {uintptr_t tag; float* subject; float target_value; int * cb; int * userdata; int duration; int easing_enum; } ;
typedef TYPE_1__ menu_animation_ctx_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(ozone_handle_t *VAR_4, float *VAR_5, float *VAR_6)
{
   menu_animation_ctx_entry_t VAR_7;
   int VAR_8;

   VAR_7.easing_enum = VAR_1;
   VAR_7.tag = (uintptr_t) &VAR_3;
   VAR_7.duration = VAR_0;
   VAR_7.userdata = VAR_4;

   for (VAR_8 = 0; VAR_8 < 16; VAR_8++)
   {
      if (VAR_8 == 3 || VAR_8 == 7 || VAR_8 == 11 || VAR_8 == 15)
         continue;

      if (VAR_8 == 14)
         VAR_7.cb = VAR_2;
      else
         VAR_7.cb = ((void*)0);

      VAR_7.subject = &VAR_5[VAR_8];
      VAR_7.target_value = VAR_6[VAR_8];

      FUNC_0(&VAR_7);
   }
}
