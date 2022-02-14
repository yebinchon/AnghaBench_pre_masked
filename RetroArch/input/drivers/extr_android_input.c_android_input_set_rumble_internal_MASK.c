
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int jint ;
typedef scalar_t__ int8_t ;
typedef enum retro_rumble_effect { ____Placeholder_retro_rumble_effect } retro_rumble_effect ;
struct TYPE_4__ {int doVibrate; TYPE_1__* activity; } ;
struct TYPE_3__ {int clazz; } ;
typedef int JNIEnv ;


 int FUNC_0 (int *,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static void FUNC_2(
      uint16_t VAR_3,
      uint16_t *VAR_4,
      uint16_t *VAR_5,
      uint16_t *VAR_6,
      int8_t VAR_7,
      enum retro_rumble_effect VAR_8
      )
{
   JNIEnv *VAR_9 = (JNIEnv*)FUNC_1();
   uint16_t VAR_10 = 0;

   if (!VAR_9)
      return;

   if (VAR_8 == VAR_0)
   {
      VAR_10 = VAR_3 | *VAR_5;
      *VAR_4 = VAR_3;
   }
   else if (VAR_8 == VAR_1)
   {
      VAR_10 = VAR_3 | *VAR_4;
      *VAR_5 = VAR_3;
   }

   if (VAR_10 != *VAR_6)
   {


      int VAR_11 = (255.0f / 65535.0f) * (float)VAR_10;

      FUNC_0(VAR_9, VAR_2->activity->clazz,
            VAR_2->doVibrate, (jint)VAR_7, (jint)VAR_0, (jint)VAR_11, (jint)0);

      *VAR_6 = VAR_10;
   }
}
