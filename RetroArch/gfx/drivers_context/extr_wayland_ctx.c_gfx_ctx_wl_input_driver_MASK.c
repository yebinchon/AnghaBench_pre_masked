
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int input_driver_t ;
struct TYPE_2__ {int input; } ;
typedef TYPE_1__ gfx_ctx_wayland_data_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1,
      const char *VAR_2,
      input_driver_t **VAR_3, void **VAR_4)
{
   gfx_ctx_wayland_data_t *VAR_5 = (gfx_ctx_wayland_data_t*)VAR_1;


   if (!FUNC_0(&VAR_5->input, VAR_2))
   {
      *VAR_3 = ((void*)0);
      *VAR_4 = ((void*)0);
   }
   else
   {
      *VAR_3 = &VAR_0;
      *VAR_4 = &VAR_5->input;
   }
}
