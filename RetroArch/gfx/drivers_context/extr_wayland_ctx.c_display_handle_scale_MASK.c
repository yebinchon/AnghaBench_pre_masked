
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl_output {int dummy; } ;
struct TYPE_2__ {int scale; } ;
typedef TYPE_1__ output_info_t ;
typedef int int32_t ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0,
      struct wl_output *VAR_1,
      int32_t VAR_2)
{
   output_info_t *VAR_3 = (output_info_t*)VAR_0;

   FUNC_0("[Wayland]: Display scale factor %d.\n", VAR_2);
   VAR_3->scale = VAR_2;
}
