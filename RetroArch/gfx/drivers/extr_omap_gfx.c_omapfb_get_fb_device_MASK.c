
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int video_monitor_index; } ;
struct TYPE_5__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
typedef int fbname ;


 int FUNC_0 (char*,char*) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (char*,int,char*,int const) ;

__attribute__((used)) static const char *FUNC_3(void)
{
   static char VAR_0[12] = {0};
   settings_t *VAR_1 = FUNC_1();
   const int VAR_2 = VAR_1->uints.video_monitor_index;

   if (VAR_2 == 0)
      return "/dev/fb0";

   FUNC_2(VAR_0, sizeof(VAR_0), "/dev/fb%d", VAR_2 - 1);
   FUNC_0("[video_omap]: Using %s as framebuffer device.\n", VAR_0);
   return VAR_0;
}
