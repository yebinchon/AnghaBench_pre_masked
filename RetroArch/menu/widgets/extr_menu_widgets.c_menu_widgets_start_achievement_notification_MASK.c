
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int video_font_size; } ;
struct TYPE_7__ {TYPE_1__ floats; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_8__ {float* subject; float target_value; int * userdata; int tag; int easing_enum; int duration; int cb; } ;
typedef TYPE_3__ menu_animation_ctx_entry_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 float VAR_5 ;
 int VAR_6 ;
 float VAR_7 ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_8 ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_5()
{
   settings_t *VAR_12 = FUNC_1();
   menu_animation_ctx_entry_t VAR_13;
   VAR_3 = VAR_12->floats.video_font_size * 4;
   VAR_6 = FUNC_0(
         FUNC_2(VAR_8, FUNC_4(VAR_1), 0, 1),
         FUNC_2(VAR_8, VAR_4, 0, 1)
   );
   VAR_6 += VAR_11 * 2;
   VAR_7 = (float)(-(int)VAR_3);
   VAR_5 = 0.0f;


   VAR_13.cb = VAR_9;
   VAR_13.duration = VAR_2;
   VAR_13.easing_enum = VAR_0;
   VAR_13.subject = &VAR_7;
   VAR_13.tag = VAR_10;
   VAR_13.target_value = 0.0f;
   VAR_13.userdata = ((void*)0);

   FUNC_3(&VAR_13);
}
