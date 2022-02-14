
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int title ;
struct TYPE_2__ {scalar_t__ zxdg_toplevel; scalar_t__ xdg_toplevel; scalar_t__ deco; } ;
typedef TYPE_1__ gfx_ctx_wayland_data_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,char*) ;

__attribute__((used)) static void FUNC_4(void *VAR_1, void *VAR_2)
{
   gfx_ctx_wayland_data_t *VAR_3 = (gfx_ctx_wayland_data_t*)VAR_1;
   char VAR_4[128];

   VAR_4[0] = '\0';

   FUNC_0(VAR_4, sizeof(VAR_4));

   if (VAR_3 && VAR_4[0])
   {
      if (VAR_3->xdg_toplevel || VAR_3->zxdg_toplevel)
      {
         if (VAR_3->deco)
         {
            FUNC_2(VAR_3->deco,
                  VAR_0);
         }
      }
      if (VAR_3->xdg_toplevel)
         FUNC_1(VAR_3->xdg_toplevel, VAR_4);
      else if (VAR_3->zxdg_toplevel)
         FUNC_3(VAR_3->zxdg_toplevel, VAR_4);
   }
}
