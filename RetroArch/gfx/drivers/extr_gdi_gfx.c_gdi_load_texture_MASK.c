
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct texture_image {int width; int height; int pixels; } ;
struct TYPE_3__ {int width; int height; int active_width; int active_height; int type; scalar_t__ data; } ;
typedef TYPE_1__ gdi_texture_t ;
typedef enum texture_filter_type { ____Placeholder_texture_filter_type } texture_filter_type ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__,int ,int) ;

__attribute__((used)) static uintptr_t FUNC_3(void *VAR_0, void *VAR_1,
      bool VAR_2, enum texture_filter_type VAR_3)
{
   void *VAR_4 = ((void*)0);
   gdi_texture_t *VAR_5 = ((void*)0);
   struct texture_image *VAR_6 = (struct texture_image*)VAR_1;

   if (!VAR_6 || VAR_6->width > 2048 || VAR_6->height > 2048)
      return 0;

   VAR_5 = (gdi_texture_t*)FUNC_0(1, sizeof(*VAR_5));

   if (!VAR_5)
      return 0;

   VAR_5->width = VAR_6->width;
   VAR_5->height = VAR_6->height;
   VAR_5->active_width = VAR_6->width;
   VAR_5->active_height = VAR_6->height;
   VAR_5->data = FUNC_0(1,
         VAR_5->width * VAR_5->height * sizeof(uint32_t));
   VAR_5->type = VAR_3;

   if (!VAR_5->data)
   {
      FUNC_1(VAR_5);
      return 0;
   }

   FUNC_2(VAR_5->data, VAR_6->pixels,
         VAR_5->width * VAR_5->height * sizeof(uint32_t));

   return (uintptr_t)VAR_5;
}
