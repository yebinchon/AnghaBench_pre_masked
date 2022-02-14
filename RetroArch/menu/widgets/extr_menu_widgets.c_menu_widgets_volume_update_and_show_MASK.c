
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float audio_volume; } ;
struct TYPE_7__ {TYPE_1__ floats; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_8__ {int * userdata; int duration; int cb; } ;
typedef TYPE_3__ menu_timer_ctx_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_4 (int,float) ;
 int VAR_4 ;
 float VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 float VAR_9 ;
 int VAR_10 ;

void FUNC_5(void)
{
   settings_t *VAR_11 = FUNC_1();
   bool VAR_12 = *(FUNC_0(VAR_0));
   float VAR_13 = VAR_11->floats.audio_volume;
   menu_timer_ctx_entry_t VAR_14;

   FUNC_2(&VAR_8);

   VAR_5 = VAR_13;
   VAR_7 = FUNC_4(10, VAR_13/20);
   VAR_4 = VAR_1;
   VAR_9 = 1.0f;
   VAR_6 = VAR_12;

   VAR_14.cb = VAR_3;
   VAR_14.duration = VAR_2;
   VAR_14.userdata = ((void*)0);

   FUNC_3(&VAR_10, &VAR_14);
}
