
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_2__ {int hid_id; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__* VAR_1 ;

int32_t FUNC_0(void)
{
   unsigned VAR_2;

   for (VAR_2 = 0; VAR_0[VAR_2].hid_id; VAR_2++)
      if (VAR_1[VAR_0[VAR_2].hid_id])
         return VAR_0[VAR_2].hid_id;

   return 0;
}
