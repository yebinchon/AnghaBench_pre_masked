
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct wl_output {int dummy; } ;
struct TYPE_2__ {int width; int height; int refresh_rate; } ;
typedef TYPE_1__ output_info_t ;


 int FUNC_0 (char*,int,int,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0,
      struct wl_output *VAR_1,
      uint32_t VAR_2,
      int VAR_3,
      int VAR_4,
      int VAR_5)
{
   (void)VAR_1;
   (void)VAR_2;

   output_info_t *VAR_6 = (output_info_t*)VAR_0;
   VAR_6->width = VAR_3;
   VAR_6->height = VAR_4;
   VAR_6->refresh_rate = VAR_5;



   FUNC_0("[Wayland]: Video mode: %d x %d @ %.4f Hz.\n",
         VAR_3, VAR_4, VAR_5 > 1000 ? VAR_5 / 1000.0 : (double)VAR_5);
}
