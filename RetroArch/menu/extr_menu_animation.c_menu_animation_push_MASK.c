
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tween {scalar_t__ duration; scalar_t__ initial_value; scalar_t__ target_value; scalar_t__* subject; int deleted; int * easing; int userdata; int cb; int tag; scalar_t__ running_since; } ;
struct TYPE_4__ {scalar_t__ duration; scalar_t__* subject; scalar_t__ target_value; int easing_enum; int userdata; int cb; int tag; } ;
typedef TYPE_1__ menu_animation_ctx_entry_t ;
struct TYPE_5__ {int initialized; int list; int pending; scalar_t__ in_update; } ;
 TYPE_3__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct tween) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;

bool FUNC_2(menu_animation_ctx_entry_t *VAR_34)
{
   struct tween VAR_35;

   VAR_35.duration = VAR_34->duration;
   VAR_35.running_since = 0;
   VAR_35.initial_value = *VAR_34->subject;
   VAR_35.target_value = VAR_34->target_value;
   VAR_35.subject = VAR_34->subject;
   VAR_35.tag = VAR_34->tag;
   VAR_35.cb = VAR_34->cb;
   VAR_35.userdata = VAR_34->userdata;
   VAR_35.easing = ((void*)0);
   VAR_35.deleted = 0;

   switch (VAR_34->easing_enum)
   {
      case 144:
         VAR_35.easing = &VAR_17;
         break;

      case 148:
         VAR_35.easing = &VAR_13;
         break;
      case 131:
         VAR_35.easing = &VAR_30;
         break;
      case 152:
         VAR_35.easing = &VAR_9;
         break;
      case 135:
         VAR_35.easing = &VAR_26;
         break;

      case 158:
         VAR_35.easing = &VAR_3;
         break;
      case 141:
         VAR_35.easing = &VAR_20;
         break;
      case 154:
         VAR_35.easing = &VAR_7;
         break;
      case 137:
         VAR_35.easing = &VAR_24;
         break;

      case 147:
         VAR_35.easing = &VAR_14;
         break;
      case 130:
         VAR_35.easing = &VAR_31;
         break;
      case 151:
         VAR_35.easing = &VAR_10;
         break;
      case 134:
         VAR_35.easing = &VAR_27;
         break;

      case 146:
         VAR_35.easing = &VAR_15;
         break;
      case 129:
         VAR_35.easing = &VAR_32;
         break;
      case 150:
         VAR_35.easing = &VAR_11;
         break;
      case 133:
         VAR_35.easing = &VAR_28;
         break;

      case 145:
         VAR_35.easing = &VAR_16;
         break;
      case 128:
         VAR_35.easing = &VAR_33;
         break;
      case 149:
         VAR_35.easing = &VAR_12;
         break;
      case 132:
         VAR_35.easing = &VAR_29;
         break;

      case 157:
         VAR_35.easing = &VAR_4;
         break;
      case 140:
         VAR_35.easing = &VAR_21;
         break;
      case 153:
         VAR_35.easing = &VAR_8;
         break;
      case 136:
         VAR_35.easing = &VAR_25;
         break;

      case 159:
         VAR_35.easing = &VAR_2;
         break;
      case 142:
         VAR_35.easing = &VAR_19;
         break;
      case 155:
         VAR_35.easing = &VAR_6;
         break;
      case 138:
         VAR_35.easing = &VAR_23;
         break;

      case 160:
         VAR_35.easing = &VAR_1;
         break;
      case 143:
         VAR_35.easing = &VAR_18;
         break;
      case 156:
         VAR_35.easing = &VAR_5;
         break;
      case 139:
         VAR_35.easing = &VAR_22;
         break;
      default:
         break;
   }


   if (!VAR_35.easing || VAR_35.duration == 0 || VAR_35.initial_value == VAR_35.target_value)
      return 0;

   if (!VAR_0.initialized)
   {
      FUNC_0(VAR_0.list);
      FUNC_0(VAR_0.pending);
      VAR_0.initialized = 1;
   }

   if (VAR_0.in_update)
      FUNC_1(VAR_0.pending, VAR_35);
   else
      FUNC_1(VAR_0.list, VAR_35);

   return 1;
}
