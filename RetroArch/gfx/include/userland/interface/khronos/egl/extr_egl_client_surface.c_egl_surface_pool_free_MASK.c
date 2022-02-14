
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int allocated; TYPE_1__* surfaces; } ;
struct TYPE_4__ {int avail_buffers_valid; int avail_buffers; } ;
typedef TYPE_1__ EGL_SURFACE_T ;


 unsigned int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_2(EGL_SURFACE_T* VAR_2)
{
   unsigned int VAR_3 = 0;



   if (VAR_2->avail_buffers_valid)
      FUNC_1(&VAR_2->avail_buffers);
   VAR_2->avail_buffers_valid = 0;

   VAR_3 = (unsigned int) (VAR_2 - VAR_1.surfaces);

   if (VAR_3 < VAR_0)
   {
      VAR_1.allocated &= ~(1 << VAR_3);
   }
   else
   {
      FUNC_0((void*)VAR_2);
   }
}
