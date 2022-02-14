
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* id; } ;
typedef TYPE_1__ EmscriptenGamepadEvent ;
typedef scalar_t__ EMSCRIPTEN_RESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int,TYPE_1__*) ;

__attribute__((used)) static const char *FUNC_1(unsigned VAR_1)
{
   static EmscriptenGamepadEvent VAR_2;
   EMSCRIPTEN_RESULT VAR_3 = FUNC_0(VAR_1, &VAR_2);

   if (VAR_3 == VAR_0)
      return VAR_2.id;
   return "";
}
