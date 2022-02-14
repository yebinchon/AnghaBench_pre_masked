
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int16_t ;
struct TYPE_3__ {size_t numAxes; int * axis; } ;
typedef TYPE_1__ EmscriptenGamepadEvent ;
typedef scalar_t__ EMSCRIPTEN_RESULT ;


 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (unsigned int,TYPE_1__*) ;

__attribute__((used)) static int16_t FUNC_4(unsigned VAR_1, uint32_t VAR_2)
{
   EmscriptenGamepadEvent VAR_3;
   EMSCRIPTEN_RESULT VAR_4;
   int16_t VAR_5 = 0;

   if (VAR_2 == 0xFFFFFFFF)
      return 0;

   VAR_4 = FUNC_3(VAR_1, &VAR_3);

   if (VAR_4 == VAR_0)
   {
      if (FUNC_0(VAR_2) < VAR_3.numAxes)
      {
         VAR_5 = FUNC_2(VAR_3.axis[FUNC_0(VAR_2)]) * 0x7FFF;
         if (VAR_5 > 0)
            VAR_5 = 0;
      }
      else if (FUNC_1(VAR_2) < VAR_3.numAxes)
      {
         VAR_5 = FUNC_2(VAR_3.axis[FUNC_1(VAR_2)]) * 0x7FFF;
         if (VAR_5 < 0)
            VAR_5 = 0;
      }
   }

   return VAR_5;
}
