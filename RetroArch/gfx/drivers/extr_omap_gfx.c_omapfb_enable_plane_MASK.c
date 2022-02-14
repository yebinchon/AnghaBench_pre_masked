
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct omapfb_plane_info {int enabled; int member_0; } ;
struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ omapfb_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,struct omapfb_plane_info*) ;

__attribute__((used)) static int FUNC_2(omapfb_data_t *VAR_2)
{
   struct omapfb_plane_info VAR_3 = {0};

   if (FUNC_1(VAR_2->fd, VAR_0, &VAR_3) != 0)
   {
      FUNC_0("[video_omap]: enable plane (query) failed\n");
      return -1;
   }

   VAR_3.enabled = 1;

   if (FUNC_1(VAR_2->fd, VAR_1, &VAR_3) != 0)
   {
      FUNC_0("[video_omap]: enable plane failed\n");
      return -1;
   }

   return 0;
}
