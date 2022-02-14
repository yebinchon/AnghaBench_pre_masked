
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int png_uint_32 ;
struct TYPE_4__ {unsigned int local_use; struct TYPE_4__* list; } ;
typedef TYPE_1__ image_transform ;


 TYPE_1__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int
FUNC_0(png_uint_32 VAR_2, unsigned int VAR_3)
{



   image_transform *VAR_4 = VAR_1;

   while (VAR_4 != &VAR_0)
   {

      VAR_2 >>= 1;


      if (VAR_3 > 1 && VAR_4->local_use < VAR_3)
         return 1;
      VAR_4 = VAR_4->list;
   }

   return VAR_3 <= 1 && VAR_2 == 0;
}
