
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int type; scalar_t__ addr; scalar_t__ val; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2, u32 VAR_3, u32 VAR_4)
{
   int VAR_5;

   for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   {
      if (VAR_0[VAR_5].type == VAR_2 &&
          VAR_0[VAR_5].addr == VAR_3 &&
          VAR_0[VAR_5].val == VAR_4)
         return VAR_5;
   }

   return -1;
}
