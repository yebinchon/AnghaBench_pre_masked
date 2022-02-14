
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct exynos_data {scalar_t__ width; scalar_t__ height; float aspect; int num_pages; unsigned int bpp; unsigned int pitch; int size; } ;
struct TYPE_6__ {scalar_t__ video_fullscreen_x; scalar_t__ video_fullscreen_y; } ;
struct TYPE_7__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_9__ {unsigned int count_modes; TYPE_3__* modes; } ;
struct TYPE_8__ {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,unsigned int,int,unsigned int) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static int FUNC_5(struct exynos_data *VAR_3, unsigned VAR_4)
{
   unsigned VAR_5;
   settings_t *VAR_6 = FUNC_2();

   if (VAR_6->uints.video_fullscreen_x != 0 &&
         VAR_6->uints.video_fullscreen_y != 0)
   {
      for (VAR_5 = 0; VAR_5 < VAR_0->count_modes; VAR_5++)
      {
         if (VAR_0->modes[VAR_5].hdisplay == VAR_6->uints.video_fullscreen_x &&
               VAR_0->modes[VAR_5].vdisplay == VAR_6->uints.video_fullscreen_y)
         {
            VAR_2 = &VAR_0->modes[VAR_5];
            break;
         }
      }

      if (!VAR_2)
      {
         FUNC_0("[video_exynos]: requested resolution (%ux%u) not available\n",
               VAR_6->uints.video_fullscreen_x,
               VAR_6->uints.video_fullscreen_y);
         goto fail;
      }

   }
   else
   {

      VAR_2 = &VAR_0->modes[0];
   }

   if (VAR_2->hdisplay == 0 || VAR_2->vdisplay == 0)
   {
      FUNC_0("[video_exynos]: failed to select sane resolution\n");
      goto fail;
   }

   FUNC_4(VAR_1);

   VAR_3->width = VAR_2->hdisplay;
   VAR_3->height = VAR_2->vdisplay;

   VAR_3->aspect = (float)VAR_2->hdisplay / (float)VAR_2->vdisplay;


   VAR_3->num_pages = 3;

   VAR_3->bpp = VAR_4;
   VAR_3->pitch = VAR_4 * VAR_3->width;
   VAR_3->size = VAR_3->pitch * VAR_3->height;

   FUNC_1("[video_exynos]: selected %ux%u resolution with %u bpp\n",
         VAR_3->width, VAR_3->height, VAR_3->bpp);

   return 0;

fail:
   FUNC_3();

   VAR_2 = ((void*)0);

   return -1;
}
