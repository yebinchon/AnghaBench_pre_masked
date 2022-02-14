
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ connected; } ;
typedef TYPE_1__ EmscriptenGamepadEvent ;
typedef scalar_t__ EMSCRIPTEN_RESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int,TYPE_1__*) ;

__attribute__((used)) static bool FUNC_1(unsigned VAR_2)
{
   EmscriptenGamepadEvent VAR_3;
   EMSCRIPTEN_RESULT VAR_4 = FUNC_0(VAR_2, &VAR_3);

   if (VAR_4 == VAR_0)
      return VAR_3.connected == VAR_1;

   return 0;
}
