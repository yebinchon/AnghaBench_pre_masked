
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* data; int buttons; } ;
typedef TYPE_1__ gca_pad_t ;
__attribute__((used)) static void FUNC_0(gca_pad_t *VAR_0)
{
   uint32_t VAR_1, VAR_2;

   static const uint32_t VAR_3[12] =
   {
      139,
      138,
      129,
      128,
      135,
      133,
      137,
      130,
      131,
      132,
      134,
      136,
   };

   if(!VAR_0)
      return;

   VAR_2 = VAR_0->data[1] | (VAR_0->data[2] << 8);
   VAR_0->buttons = 0;

   for (VAR_1 = 0; VAR_1 < 12; VAR_1++)
      VAR_0->buttons |= (VAR_2 & (1 << VAR_1)) ?
         (1 << VAR_3[VAR_1]) : 0;
}
