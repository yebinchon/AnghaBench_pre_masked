
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fd; } ;
typedef TYPE_1__ gfx_ctx_drm_data_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(gfx_ctx_drm_data_t *VAR_3)
{
   if (!VAR_3)
      return;


   FUNC_3();

   if (VAR_2)
      FUNC_5(VAR_2);

   if (VAR_1)
      FUNC_4(VAR_1);

   FUNC_2();

   if (VAR_3->fd >= 0)
   {
      if (VAR_0 >= 0)
      {
         FUNC_1(VAR_0);
         FUNC_0(VAR_3->fd);
      }
   }

   VAR_2 = ((void*)0);
   VAR_1 = ((void*)0);
   VAR_0 = -1;
}
