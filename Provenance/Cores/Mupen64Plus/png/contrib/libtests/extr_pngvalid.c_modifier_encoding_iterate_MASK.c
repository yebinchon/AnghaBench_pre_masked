
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int repeat; scalar_t__ encoding_counter; scalar_t__ test_exhaustive; scalar_t__ test_uses_encoding; } ;
typedef TYPE_1__ png_modifier ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(png_modifier *VAR_0)
{
   if (!VAR_0->repeat &&
      VAR_0->test_uses_encoding)
   {
      if (VAR_0->test_exhaustive)
      {
         if (++VAR_0->encoding_counter >= FUNC_0(VAR_0))
            VAR_0->encoding_counter = 0;
      }

      else
      {



         if (VAR_0->encoding_counter == 0)
            VAR_0->encoding_counter = FUNC_1(FUNC_0(VAR_0)-1)+1;
         else
            VAR_0->encoding_counter = 0;
      }

      if (VAR_0->encoding_counter > 0)
         VAR_0->repeat = 1;
   }

   else if (!VAR_0->repeat)
      VAR_0->encoding_counter = 0;
}
