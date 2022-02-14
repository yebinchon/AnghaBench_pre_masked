
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct texture_image {scalar_t__ list_id; int width; int height; TYPE_2__* thumbnail; } ;
typedef int retro_task_t ;
typedef struct texture_image menu_thumbnail_tag_t ;
struct TYPE_4__ {uintptr_t tag; float target_value; float* subject; int * userdata; int * cb; int duration; int easing_enum; } ;
typedef TYPE_1__ menu_animation_ctx_entry_t ;
struct TYPE_5__ {scalar_t__ status; int width; int height; float alpha; scalar_t__ texture; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct texture_image*) ;
 int FUNC_1 (struct texture_image*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct texture_image*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_5(
      retro_task_t *VAR_7, void *VAR_8, void *VAR_9, const char *VAR_10)
{
   struct texture_image *VAR_11 = (struct texture_image*)VAR_8;
   menu_thumbnail_tag_t *VAR_12 = (menu_thumbnail_tag_t*)VAR_9;
   menu_animation_ctx_entry_t VAR_13;


   if (!VAR_12)
      goto end;



   if (VAR_12->list_id != VAR_6)
      goto end;


   if (VAR_12->thumbnail->status != VAR_3)
      goto end;





   if (VAR_12->thumbnail->texture)
      FUNC_3(VAR_12->thumbnail);



   VAR_12->thumbnail->status = VAR_2;


   if (!VAR_11)
      goto end;

   if ((VAR_11->width < 1) || (VAR_11->height < 1))
      goto end;


   if (!FUNC_4(
            VAR_11, VAR_4, &VAR_12->thumbnail->texture))
      goto end;


   VAR_12->thumbnail->width = VAR_11->width;
   VAR_12->thumbnail->height = VAR_11->height;


   VAR_12->thumbnail->status = VAR_1;


   VAR_12->thumbnail->alpha = 0.0f;

   VAR_13.easing_enum = VAR_0;
   VAR_13.tag = (uintptr_t)&VAR_12->thumbnail->alpha;
   VAR_13.duration = VAR_5;
   VAR_13.target_value = 1.0f;
   VAR_13.subject = &VAR_12->thumbnail->alpha;
   VAR_13.cb = ((void*)0);
   VAR_13.userdata = ((void*)0);

   FUNC_2(&VAR_13);

end:

   if (VAR_11)
   {
      FUNC_1(VAR_11);
      FUNC_0(VAR_11);
   }

   if (VAR_12)
      FUNC_0(VAR_12);
}
