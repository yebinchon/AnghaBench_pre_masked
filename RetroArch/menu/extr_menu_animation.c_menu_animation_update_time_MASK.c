
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int menu_driver; } ;
struct TYPE_5__ {float menu_ticker_speed; } ;
struct TYPE_7__ {TYPE_2__ arrays; TYPE_1__ floats; } ;
typedef TYPE_3__ settings_t ;
typedef scalar_t__ retro_time_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_3 ;
 float VAR_4 ;
 float FUNC_2 (unsigned int,unsigned int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 float VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_4(bool VAR_11, unsigned VAR_12, unsigned VAR_13)
{
   static retro_time_t
      VAR_14 = 0;
   static retro_time_t
      VAR_15 = 0;
   static retro_time_t
      VAR_16 = 0;

   static float VAR_17 = 0.0f;
   unsigned VAR_18 = 0;
   float VAR_19 = 0.0f;


   settings_t *VAR_20 = FUNC_0();
   float VAR_21 = VAR_20->floats.menu_ticker_speed > 0.0001f ? VAR_20->floats.menu_ticker_speed : 1.0f;
   unsigned VAR_22 = (unsigned)(((float)VAR_1 / VAR_21) + 0.5);
   unsigned VAR_23 = (unsigned)(((float)VAR_0 / VAR_21) + 0.5);


   VAR_3 = FUNC_1();
   VAR_4 = VAR_5 == 0 ? 0.0f : (float)(VAR_3 - VAR_5) / 1000.0f;
   VAR_5 = VAR_3;

   if (((VAR_3 - VAR_14) > 1000000)
         && VAR_11)
   {
      VAR_2 = 1;
      VAR_14 = VAR_3;
   }

   if (VAR_7)
   {
      if (VAR_3 - VAR_15 >= VAR_22)
      {
         VAR_6++;
         VAR_15 = VAR_3;
      }

      if (VAR_3 - VAR_16 >= VAR_23)
      {
         VAR_10++;
         VAR_16 = VAR_3;
      }





      VAR_19 = VAR_4 / VAR_9;


      VAR_19 *= VAR_21;
      if (FUNC_3(VAR_20->arrays.menu_driver, "rgui"))
         VAR_19 *= 0.25f;


      else if (FUNC_3(VAR_20->arrays.menu_driver, "ozone"))
         VAR_19 *= 0.5f;
      else if (FUNC_3(VAR_20->arrays.menu_driver, "glui"))
         VAR_19 *= (FUNC_2(VAR_12, VAR_13) * 0.8f);
      else if (VAR_12 > 0)
         VAR_19 *= ((float)VAR_12 / 1920.0f);


      VAR_17 += VAR_19;
      VAR_18 = (unsigned)VAR_17;


      if (VAR_18 > 0)
      {
         VAR_8 += VAR_18;
         VAR_17 -= (float)VAR_18;
      }
   }
}
