
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int buttons; int* data; } ;
typedef TYPE_1__ ds3_instance_t ;
__attribute__((used)) static void FUNC_0(ds3_instance_t *VAR_0)
{
   uint32_t VAR_1, VAR_2;

   static const uint32_t VAR_3[17] =
   {
      132,
      138,
      134,
      131,
      130,
      133,
      141,
      137,
      139,
      135,
      140,
      136,
      129,
      143,
      142,
      128,
      16
   };

   VAR_0->buttons = 0;

   VAR_2 = VAR_0->data[2]|(VAR_0->data[3] << 8)|((VAR_0->data[4] & 0x01) << 16);

   for(VAR_1 = 0; VAR_1 < 17; VAR_1++)
     VAR_0->buttons |= (VAR_2 & (1 << VAR_1)) ?
        (1 << VAR_3[VAR_1]) : 0;
}
