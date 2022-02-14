
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wiiu_video_t ;
typedef int uint32_t ;
struct texture_image {int width; int height; scalar_t__ pixels; } ;
typedef enum texture_filter_type { ____Placeholder_texture_filter_type } texture_filter_type ;
struct TYPE_6__ {int width; int height; int depth; int pitch; int imageSize; scalar_t__ image; int alignment; int format; int tileMode; int dim; } ;
struct TYPE_5__ {int viewNumSlices; TYPE_4__ surface; int compMap; } ;
typedef TYPE_1__ GX2Texture ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_5 (int,int) ;
 int FUNC_6 (int*,scalar_t__,int) ;

__attribute__((used)) static uintptr_t FUNC_7(void *VAR_8, void *VAR_9,
                                       bool VAR_10, enum texture_filter_type VAR_11)
{
   uint32_t VAR_12;
   wiiu_video_t *VAR_13 = (wiiu_video_t *) VAR_8;
   struct texture_image *VAR_14 = (struct texture_image *)VAR_9;

   if (!VAR_13)
      return 0;

   GX2Texture *VAR_15 = FUNC_5(1, sizeof(GX2Texture));

   VAR_15->surface.width = VAR_14->width;
   VAR_15->surface.height = VAR_14->height;
   VAR_15->surface.depth = 1;
   VAR_15->surface.dim = VAR_1;
   VAR_15->surface.tileMode = VAR_3;
   VAR_15->viewNumSlices = 1;

   VAR_15->surface.format = VAR_2;
   VAR_15->compMap = FUNC_3(VAR_6, VAR_5, VAR_4, VAR_7);

   FUNC_0(&VAR_15->surface);
   FUNC_1(VAR_15);
   VAR_15->surface.image = FUNC_4(VAR_15->surface.imageSize, VAR_15->surface.alignment);

   for (VAR_12 = 0; (VAR_12 < VAR_14->height) && (VAR_12 < VAR_15->surface.height); VAR_12++)
      FUNC_6((uint32_t *)VAR_15->surface.image + (VAR_12 * VAR_15->surface.pitch),
             VAR_14->pixels + (VAR_12 * VAR_14->width), VAR_14->width * sizeof(VAR_14->pixels));

   FUNC_2(VAR_0, VAR_15->surface.image, VAR_15->surface.imageSize);

   return (uintptr_t)VAR_15;
}
