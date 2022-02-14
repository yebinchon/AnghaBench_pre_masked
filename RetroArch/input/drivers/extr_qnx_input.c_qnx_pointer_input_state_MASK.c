
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int pointer_count; TYPE_1__* pointer; } ;
typedef TYPE_2__ qnx_input_t ;
typedef int int16_t ;
struct TYPE_4__ {int full_x; int full_y; int x; int y; } ;






__attribute__((used)) static int16_t FUNC_0(qnx_input_t *VAR_0,
      unsigned VAR_1, unsigned VAR_2, bool VAR_3)
{
   int16_t VAR_4;
   int16_t VAR_5;

   if(VAR_3)
   {
       VAR_4 = VAR_0->pointer[VAR_1].full_x;
       VAR_5 = VAR_0->pointer[VAR_1].full_y;
   }
   else
   {
       VAR_4 = VAR_0->pointer[VAR_1].x;
       VAR_5 = VAR_0->pointer[VAR_1].y;
   }

   switch (VAR_2)
   {
      case 129:
         return VAR_4;
      case 128:
         return VAR_5;
      case 130:
         return (VAR_1 < VAR_0->pointer_count)
                 && (VAR_4 != -0x8000)
                 && (VAR_5 != -0x8000);
   }

   return 0;
}
