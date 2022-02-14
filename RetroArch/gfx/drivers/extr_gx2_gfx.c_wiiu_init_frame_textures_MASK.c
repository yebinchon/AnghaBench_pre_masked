
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_17__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_23__ {unsigned int width; unsigned int height; } ;
struct TYPE_20__ {unsigned int width; unsigned int height; } ;
struct TYPE_21__ {TYPE_1__ surface; } ;
struct TYPE_19__ {unsigned int width; unsigned int height; int depth; int imageSize; int mipLevels; int use; TYPE_10__* image; int alignment; void* format; void* dim; int tileMode; } ;
struct TYPE_18__ {int viewNumSlices; TYPE_17__ surface; void* compMap; } ;
struct TYPE_26__ {TYPE_6__* pass; TYPE_4__ vp; TYPE_5__* shader_preset; TYPE_2__ color_buffer; TYPE_10__ texture; scalar_t__ rgb32; } ;
typedef TYPE_7__ wiiu_video_t ;
struct TYPE_22__ {int type_x; unsigned int scale_x; unsigned int abs_x; int type_y; unsigned int scale_y; unsigned int abs_y; scalar_t__ srgb_fbo; scalar_t__ fp_fbo; } ;
struct video_shader_pass {TYPE_3__ fbo; } ;
struct TYPE_25__ {int mem1; TYPE_10__ color_buffer; TYPE_10__ texture; } ;
struct TYPE_24__ {unsigned int passes; struct video_shader_pass* pass; } ;
typedef int GX2Texture ;


 int FUNC_0 (TYPE_17__*) ;
 int FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (int ,TYPE_10__*,int) ;
 void* FUNC_4 (int ,int ,int ,int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_10__* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_10__*) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_10__*) ;



 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (TYPE_10__*,int,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_7__*) ;

__attribute__((used)) static bool FUNC_12(wiiu_video_t *VAR_14, unsigned VAR_15, unsigned VAR_16)
{
   unsigned VAR_17;

   FUNC_8(VAR_14->texture.surface.image);

   if (VAR_14->shader_preset)
   {
      for (VAR_17 = 0; VAR_17 < VAR_14->shader_preset->passes; VAR_17++)
      {
         if(VAR_14->pass[VAR_17].mem1)
            FUNC_6(VAR_14->pass[VAR_17].texture.surface.image);
         else
            FUNC_8(VAR_14->pass[VAR_17].texture.surface.image);

         VAR_14->pass[VAR_17].texture.surface.image = ((void*)0);
      }
   }


   FUNC_9(&VAR_14->texture, 0, sizeof(GX2Texture));
   VAR_14->texture.surface.width = VAR_15;
   VAR_14->texture.surface.height = VAR_16;
   VAR_14->texture.surface.depth = 1;
   VAR_14->texture.surface.dim = VAR_1;
   VAR_14->texture.surface.tileMode = VAR_8;
   VAR_14->texture.viewNumSlices = 1;

   if (VAR_14->rgb32)
   {
      VAR_14->texture.surface.format = VAR_5;
      VAR_14->texture.compMap = FUNC_4(VAR_12, VAR_11, VAR_10, VAR_9);
   }
   else
   {
      VAR_14->texture.surface.format = VAR_4;
      VAR_14->texture.compMap = FUNC_4(VAR_11, VAR_12, VAR_13, VAR_9);
   }

   FUNC_0(&VAR_14->texture.surface);
   FUNC_2(&VAR_14->texture);

   VAR_14->texture.surface.image = FUNC_7(VAR_14->texture.surface.imageSize,
                                 VAR_14->texture.surface.alignment);
   FUNC_9(VAR_14->texture.surface.image, 0x0, VAR_14->texture.surface.imageSize);
   FUNC_3(VAR_0, VAR_14->texture.surface.image,
                 VAR_14->texture.surface.imageSize);

   if (VAR_14->shader_preset)
   {
      for (VAR_17 = 0; VAR_17 < VAR_14->shader_preset->passes; VAR_17++)
      {
         struct video_shader_pass *VAR_18 = &VAR_14->shader_preset->pass[VAR_17];

         switch (VAR_18->fbo.type_x)
         {
         case 129:
            VAR_15 *= VAR_18->fbo.scale_x;
            break;

         case 128:
            VAR_15 = VAR_14->vp.width * VAR_18->fbo.scale_x;
            break;

         case 130:
            VAR_15 = VAR_18->fbo.abs_x;
            break;

         default:
            break;
         }

         switch (VAR_18->fbo.type_y)
         {
         case 129:
            VAR_16 *= VAR_18->fbo.scale_y;
            break;

         case 128:
            VAR_16 = VAR_14->vp.height * VAR_18->fbo.scale_y;
            break;

         case 130:
            VAR_16 = VAR_18->fbo.abs_y;
            break;

         default:
            break;
         }

         if (!VAR_15)
            VAR_15 = VAR_14->color_buffer.surface.width;

         if (!VAR_16)
            VAR_16 = VAR_14->color_buffer.surface.height;

         FUNC_9(&VAR_14->pass[VAR_17].texture, 0, sizeof(VAR_14->pass[VAR_17].texture));
         VAR_14->pass[VAR_17].texture.surface.dim = VAR_1;
         VAR_14->pass[VAR_17].texture.surface.width = VAR_15;
         VAR_14->pass[VAR_17].texture.surface.height = VAR_16;
         VAR_14->pass[VAR_17].texture.surface.depth = 1;



         VAR_14->pass[VAR_17].texture.surface.format = VAR_18->fbo.fp_fbo ?
               VAR_2 :
               VAR_18->fbo.srgb_fbo ? VAR_3 :
               VAR_5;
         VAR_14->pass[VAR_17].texture.surface.use = (VAR_7 |
               VAR_6);
         VAR_14->pass[VAR_17].texture.viewNumSlices = 1;
         VAR_14->pass[VAR_17].texture.compMap = FUNC_4(VAR_13, VAR_12, VAR_11, VAR_10);

         FUNC_0(&VAR_14->pass[VAR_17].texture.surface);
         FUNC_2(&VAR_14->pass[VAR_17].texture);

         if ((VAR_17 != (VAR_14->shader_preset->passes - 1)) || (VAR_15 != VAR_14->vp.width)
               || (VAR_16 != VAR_14->vp.height))
         {
            VAR_14->pass[VAR_17].mem1 = 1;
            VAR_14->pass[VAR_17].texture.surface.image = FUNC_5(VAR_14->pass[VAR_17].texture.surface.imageSize,
                                                  VAR_14->pass[VAR_17].texture.surface.alignment);

            if (!VAR_14->pass[VAR_17].texture.surface.image)
            {
               FUNC_10("failed to allocate Render target memory from MEM1. trying MEM2.\n");
               VAR_14->pass[VAR_17].mem1 = 0;
               VAR_14->pass[VAR_17].texture.surface.image = FUNC_7(VAR_14->pass[VAR_17].texture.surface.imageSize,
                                                     VAR_14->pass[VAR_17].texture.surface.alignment);

               if (!VAR_14->pass[VAR_17].texture.surface.image)
               {
                  FUNC_10("failed to allocate Render target memory from MEM2. falling back to stock.\n");

                  FUNC_11(VAR_14);
                  return 0;
               }
            }

            FUNC_9(VAR_14->pass[VAR_17].texture.surface.image, 0x00, VAR_14->pass[VAR_17].texture.surface.imageSize);
            FUNC_3(VAR_0, VAR_14->pass[VAR_17].texture.surface.image,
                          VAR_14->pass[VAR_17].texture.surface.imageSize);
         }

         FUNC_9(&VAR_14->pass[VAR_17].color_buffer, 0, sizeof(VAR_14->pass[VAR_17].color_buffer));
         VAR_14->pass[VAR_17].color_buffer.surface = VAR_14->pass[VAR_17].texture.surface;
         FUNC_1(&VAR_14->pass[VAR_17].color_buffer);
      }
   }

   return 1;
}
