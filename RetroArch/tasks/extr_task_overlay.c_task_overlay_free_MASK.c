
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct texture_image {int dummy; } ;
struct overlay {size_t pos; unsigned int load_images_size; unsigned int size; scalar_t__ conf; struct overlay* overlays; struct texture_image* load_images; struct overlay* overlay_path; } ;
struct TYPE_4__ {scalar_t__ state; } ;
typedef TYPE_1__ retro_task_t ;
typedef struct overlay overlay_loader_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct overlay*) ;
 int FUNC_2 (struct texture_image*) ;
 int FUNC_3 (struct overlay*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(retro_task_t *VAR_0)
{
   unsigned VAR_1;
   overlay_loader_t *VAR_2 = (overlay_loader_t*)VAR_0->state;
   struct overlay *VAR_3 = &VAR_2->overlays[VAR_2->pos];

   if (VAR_2->overlay_path)
      FUNC_1(VAR_2->overlay_path);

   if (FUNC_4(VAR_0))
   {
      for (VAR_1 = 0; VAR_1 < VAR_3->load_images_size; VAR_1++)
      {
         struct texture_image *VAR_4 = &VAR_3->load_images[VAR_1];
         FUNC_2(VAR_4);
      }

      for (VAR_1 = 0; VAR_1 < VAR_2->size; VAR_1++)
         FUNC_3(&VAR_2->overlays[VAR_1]);

      FUNC_1(VAR_2->overlays);
   }

   if (VAR_2->conf)
      FUNC_0(VAR_2->conf);

   FUNC_1(VAR_2);
}
