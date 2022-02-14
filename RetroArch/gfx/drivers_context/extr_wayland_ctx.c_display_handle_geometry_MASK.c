
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl_output {int dummy; } ;
struct TYPE_2__ {int physical_width; int physical_height; } ;
typedef TYPE_1__ output_info_t ;


 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0,
      struct wl_output *VAR_1,
      int VAR_2, int VAR_3,
      int VAR_4, int VAR_5,
      int VAR_6,
      const char *VAR_7,
      const char *VAR_8,
      int VAR_9)
{
   (void)VAR_0;
   (void)VAR_1;
   (void)VAR_2;
   (void)VAR_3;
   (void)VAR_6;
   (void)VAR_7;
   (void)VAR_8;
   (void)VAR_9;

   output_info_t *VAR_10 = (output_info_t*)VAR_0;
   VAR_10->physical_width = VAR_4;
   VAR_10->physical_height = VAR_5;

   FUNC_0("[Wayland]: Physical width: %d mm x %d mm.\n",
         VAR_4, VAR_5);
}
