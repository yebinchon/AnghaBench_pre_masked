
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int input_bits_t ;
struct TYPE_3__ {unsigned int numButtons; scalar_t__* digitalButton; } ;
typedef TYPE_1__ EmscriptenGamepadEvent ;
typedef scalar_t__ EMSCRIPTEN_RESULT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (unsigned int,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(unsigned VAR_1, input_bits_t *VAR_2)
{
   EmscriptenGamepadEvent VAR_3;
   EMSCRIPTEN_RESULT VAR_4 = FUNC_2(
         VAR_1, &VAR_3);

   if (VAR_4 == VAR_0)
   {
      unsigned VAR_5;

      for (VAR_5 = 0; VAR_5 < VAR_3.numButtons; VAR_5++)
      {
         if (VAR_3.digitalButton[VAR_5])
            FUNC_1(VAR_2, VAR_5);
      }
   }
   else
      FUNC_0(VAR_2);
}
