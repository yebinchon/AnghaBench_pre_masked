
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int pads_connected; TYPE_1__* pad_states; } ;
typedef TYPE_2__ android_input_t ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(android_input_t *VAR_3, int VAR_4,
      int VAR_5)
{
   unsigned VAR_6;
   int VAR_7 = -1;
   if (VAR_5 & (VAR_2 | VAR_0 |
            VAR_1))
         VAR_7 = 0;

   for (VAR_6 = 0; VAR_6 < VAR_3->pads_connected; VAR_6++)
   {
      if (VAR_3->pad_states[VAR_6].id == VAR_4)
      {
         VAR_7 = VAR_6;
         break;
      }
   }

   return VAR_7;
}
