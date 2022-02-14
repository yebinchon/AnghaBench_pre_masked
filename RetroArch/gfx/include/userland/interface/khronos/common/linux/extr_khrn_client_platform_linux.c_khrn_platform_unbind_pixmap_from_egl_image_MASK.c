
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int used; scalar_t__ egl_image; } ;
typedef scalar_t__ EGLImageKHR ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_0(EGLImageKHR VAR_2)
{
   int VAR_3;
   for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   {
      if (VAR_1[VAR_3].used && VAR_1[VAR_3].egl_image == VAR_2)
      {
         VAR_1[VAR_3].used = 0;
      }
   }
}
