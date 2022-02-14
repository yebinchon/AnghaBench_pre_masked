
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct texture_image {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_4__ {int bg; } ;
struct TYPE_5__ {float thumbnail_height; float thumbnail_width; float left_thumbnail_height; float left_thumbnail_width; float savestate_thumbnail_height; float savestate_thumbnail_width; int savestate_thumbnail; int left_thumbnail; int thumbnail; TYPE_1__ textures; } ;
typedef TYPE_2__ stripes_handle_t ;
typedef enum menu_image_type { ____Placeholder_menu_image_type } menu_image_type ;







 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (void*,int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(void *VAR_1, void *VAR_2, enum menu_image_type VAR_3)
{
   stripes_handle_t *VAR_4 = (stripes_handle_t*)VAR_1;

   if (!VAR_4 || !VAR_2)
      return 0;

   switch (VAR_3)
   {
      case 131:
         break;
      case 128:
         FUNC_1(VAR_4);
         FUNC_3(&VAR_4->textures.bg);
         FUNC_2(VAR_2,
               VAR_0,
               &VAR_4->textures.bg);
         FUNC_0();
         break;
      case 129:
         {
            struct texture_image *VAR_5 = (struct texture_image*)VAR_2;
            VAR_4->thumbnail_height = VAR_4->thumbnail_width
               * (float)VAR_5->height / (float)VAR_5->width;
            FUNC_3(&VAR_4->thumbnail);
            FUNC_2(VAR_2,
                  VAR_0, &VAR_4->thumbnail);
         }
         break;
      case 132:
         {
            struct texture_image *VAR_6 = (struct texture_image*)VAR_2;
            VAR_4->left_thumbnail_height = VAR_4->left_thumbnail_width
               * (float)VAR_6->height / (float)VAR_6->width;
            FUNC_3(&VAR_4->left_thumbnail);
            FUNC_2(VAR_2,
                  VAR_0, &VAR_4->left_thumbnail);
         }
         break;
      case 130:
         {
            struct texture_image *VAR_7 = (struct texture_image*)VAR_2;
            VAR_4->savestate_thumbnail_height = VAR_4->savestate_thumbnail_width
               * (float)VAR_7->height / (float)VAR_7->width;
            FUNC_3(&VAR_4->savestate_thumbnail);
            FUNC_2(VAR_2,
                  VAR_0, &VAR_4->savestate_thumbnail);
         }
         break;
   }

   return 1;
}
