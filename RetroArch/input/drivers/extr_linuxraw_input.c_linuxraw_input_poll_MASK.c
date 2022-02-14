
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int* state; TYPE_1__* joypad; } ;
typedef TYPE_2__ linuxraw_input_t ;
struct TYPE_3__ {int (* poll ) () ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int*,int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_5)
{
   uint8_t VAR_6;
   linuxraw_input_t *VAR_7 = (linuxraw_input_t*)VAR_5;

   while (FUNC_2(VAR_4, &VAR_6, 1) > 0)
   {
      bool VAR_8;
      uint16_t VAR_9;

      if (VAR_6 == VAR_0 && (VAR_7->state[VAR_1] || VAR_7->state[VAR_2]))
         FUNC_1(FUNC_0(), VAR_3);

      VAR_8 = !(VAR_6 & 0x80);
      VAR_6 &= ~0x80;


      if (!VAR_6)
         FUNC_2(VAR_4, &VAR_9, 2);
      else
         VAR_7->state[VAR_6] = VAR_8;
   }

   if (VAR_7->joypad)
      VAR_7->joypad->poll();
}
