
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct omapfb_plane_info {int pos_x; int pos_y; int out_width; int out_height; scalar_t__ enabled; int member_0; } ;
struct TYPE_8__ {int nat_w; int nat_h; int bpp; int num_pages; TYPE_2__* current_state; int fd; } ;
typedef TYPE_3__ omapfb_data_t ;
struct TYPE_6__ {int size; } ;
struct TYPE_7__ {struct omapfb_plane_info pi; TYPE_1__ mi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,int,int,int) ;
 scalar_t__ FUNC_2 (int ,int ,struct omapfb_plane_info*) ;
 float FUNC_3 (TYPE_3__*,int,int) ;

__attribute__((used)) static int FUNC_4(omapfb_data_t *VAR_2, int VAR_3, int VAR_4)
{
   int VAR_5, VAR_6;
   struct omapfb_plane_info VAR_7 = {0};
   float VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_4);
   int VAR_9 = (int)(VAR_8 * VAR_3);
   int VAR_10 = (int)(VAR_8 * VAR_4);

   FUNC_1("omap_video: scaling %dx%d to %dx%d\n", VAR_3, VAR_4, VAR_9, VAR_10);

   VAR_5 = VAR_2->nat_w / 2 - VAR_9 / 2;
   VAR_6 = VAR_2->nat_h / 2 - VAR_10 / 2;

   if (VAR_3 * VAR_4 * VAR_2->bpp * VAR_2->num_pages > VAR_2->current_state->mi.size)
   {
      FUNC_0("omap_video: fb dimensions too large for allocated buffer\n");
      return -1;
   }

   if (FUNC_2(VAR_2->fd, VAR_0, &VAR_7) != 0)
   {
      FUNC_0("[video_omap]: setup plane (query) failed\n");
      return -1;
   }


   VAR_7.pos_x = VAR_5;
   VAR_7.pos_y = VAR_6;
   VAR_7.out_width = VAR_9;
   VAR_7.out_height = VAR_10;
   VAR_7.enabled = 0;

   if (FUNC_2(VAR_2->fd, VAR_1, &VAR_7) != 0)
   {
      FUNC_0("[video_omap]: setup plane (param = %d %d %d %d) failed\n", VAR_5, VAR_6, VAR_9, VAR_10);
      return -1;
   }

   VAR_2->current_state->pi = VAR_7;

   return 0;
}
