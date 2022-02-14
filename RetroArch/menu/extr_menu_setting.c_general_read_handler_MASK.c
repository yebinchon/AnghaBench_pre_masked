
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int * input_joypad_map; } ;
struct TYPE_12__ {float audio_max_timing_skew; float video_refresh_rate; } ;
struct TYPE_11__ {int audio_rate_control; } ;
struct TYPE_16__ {TYPE_5__ uints; TYPE_2__ floats; TYPE_1__ bools; } ;
typedef TYPE_6__ settings_t ;
struct TYPE_13__ {double* fraction; int * integer; } ;
struct TYPE_14__ {TYPE_3__ target; } ;
struct TYPE_17__ {int enum_idx; TYPE_4__ value; } ;
typedef TYPE_7__ rarch_setting_t ;


 int VAR_0 ;
 int VAR_1 ;
 double* FUNC_0 (int ) ;
 int FUNC_1 (int ,float) ;
 TYPE_6__* FUNC_2 () ;
 int FUNC_3 (TYPE_6__*,int ,int) ;

void FUNC_4(rarch_setting_t *VAR_2)
{
   settings_t *VAR_3 = FUNC_2();

   if (!VAR_2 || VAR_2->enum_idx == VAR_1)
      return;

   switch (VAR_2->enum_idx)
   {
      case 134:
         *VAR_2->value.target.fraction = *(FUNC_0(VAR_0));
         if (*VAR_2->value.target.fraction < 0.0005)
         {
            FUNC_3(VAR_3, VAR_3->bools.audio_rate_control, 0);
            FUNC_1(VAR_0, 0.0f);
         }
         else
         {
            FUNC_3(VAR_3, VAR_3->bools.audio_rate_control, 1);
            FUNC_1(VAR_0, *VAR_2->value.target.fraction);
         }
         break;
      case 135:
         *VAR_2->value.target.fraction = VAR_3->floats.audio_max_timing_skew;
         break;
      case 128:
         *VAR_2->value.target.fraction = VAR_3->floats.video_refresh_rate;
         break;
      case 133:
         *VAR_2->value.target.integer = VAR_3->uints.input_joypad_map[0];
         break;
      case 132:
         *VAR_2->value.target.integer = VAR_3->uints.input_joypad_map[1];
         break;
      case 131:
         *VAR_2->value.target.integer = VAR_3->uints.input_joypad_map[2];
         break;
      case 130:
         *VAR_2->value.target.integer = VAR_3->uints.input_joypad_map[3];
         break;
      case 129:
         *VAR_2->value.target.integer = VAR_3->uints.input_joypad_map[4];
         break;
      default:
         break;
   }
}
