
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_1__* drmModePlanePtr ;
struct TYPE_3__ {unsigned int count_formats; scalar_t__* formats; } ;



__attribute__((used)) static bool FUNC_0(const drmModePlanePtr VAR_0, uint32_t VAR_1)
{
   unsigned int VAR_2;

   for (VAR_2 = 0; VAR_2 < VAR_0->count_formats; ++VAR_2)
   {
      if (VAR_0->formats[VAR_2] == VAR_1)
         return 1;
   }

   return 0;
}
