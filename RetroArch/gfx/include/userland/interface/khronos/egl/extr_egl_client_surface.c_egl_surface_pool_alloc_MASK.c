
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int allocated; int * surfaces; } ;
typedef int EGL_SURFACE_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static EGL_SURFACE_T* FUNC_1(void)
{
   int VAR_2 = 0;

   while(VAR_1.allocated & (1 << VAR_2))
      VAR_2++;

   if (VAR_2 < VAR_0)
   {
      VAR_1.allocated |= 1 << VAR_2;
      return &VAR_1.surfaces[VAR_2];
   }
   else
   {
      return (EGL_SURFACE_T*)FUNC_0(sizeof(EGL_SURFACE_T), "EGL_SURFACE_T");
   }
}
