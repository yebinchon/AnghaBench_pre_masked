
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_17__ ;
typedef struct TYPE_20__ TYPE_16__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_29__ {TYPE_16__* luts; TYPE_10__* shader_preset; TYPE_7__* pass; } ;
typedef TYPE_8__ wiiu_video_t ;
typedef int uint32_t ;
struct TYPE_25__ {int path; } ;
struct video_shader_pass {TYPE_4__ source; } ;
struct texture_image {int width; int height; scalar_t__ pixels; } ;
typedef enum rarch_shader_type { ____Placeholder_rarch_shader_type } rarch_shader_type ;
typedef int config_file_t ;
struct TYPE_28__ {TYPE_13__* gfd; void** ps_ubos; void** vs_ubos; } ;
struct TYPE_27__ {int uniformBlockCount; TYPE_5__* uniformBlocks; } ;
struct TYPE_26__ {int size; } ;
struct TYPE_24__ {int path; } ;
struct TYPE_23__ {int uniformBlockCount; TYPE_1__* uniformBlocks; } ;
struct TYPE_22__ {int size; } ;
struct TYPE_21__ {int width; int height; int depth; int pitch; int imageSize; void* image; int alignment; int format; int tileMode; int dim; } ;
struct TYPE_20__ {int viewNumSlices; TYPE_17__ surface; int compMap; } ;
struct TYPE_19__ {TYPE_2__* ps; TYPE_6__* vs; } ;
struct TYPE_18__ {unsigned int passes; unsigned int luts; TYPE_3__* lut; struct video_shader_pass* pass; } ;


 int FUNC_0 (TYPE_17__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_16__*) ;
 int FUNC_3 (int ,void*,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_5 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_10__* FUNC_7 (int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_10__*) ;
 TYPE_13__* FUNC_10 (char*) ;
 int FUNC_11 (struct texture_image*) ;
 scalar_t__ FUNC_12 (struct texture_image*,int ) ;
 int FUNC_13 (int *,scalar_t__,int) ;
 int FUNC_14 (void*,int ,int ) ;
 int FUNC_15 (int ,TYPE_10__*) ;
 scalar_t__ FUNC_16 (char const*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*,int ,int) ;
 char* FUNC_19 (char*,char) ;
 int FUNC_20 (int *,TYPE_10__*) ;
 int * FUNC_21 (char const*) ;
 int FUNC_22 (int *,TYPE_10__*) ;
 int FUNC_23 (TYPE_8__*) ;

__attribute__((used)) static bool FUNC_24(void *VAR_12,
      enum rarch_shader_type VAR_13, const char *VAR_14)
{
   unsigned VAR_15;
   config_file_t *VAR_16 = ((void*)0);
   wiiu_video_t *VAR_17 = (wiiu_video_t *)VAR_12;

   if (!VAR_17)
      return 0;

   FUNC_1();
   FUNC_23(VAR_17);

   if (FUNC_16(VAR_14))
      return 1;

   if (VAR_13 != VAR_7)
   {
      FUNC_6("[GX2] Only Slang shaders are supported. Falling back to stock.\n");
      return 0;
   }

   if (!(VAR_16 = FUNC_21(VAR_14)))
      return 0;

   VAR_17->shader_preset = FUNC_7(1, sizeof(*VAR_17->shader_preset));

   if (!FUNC_20(VAR_16, VAR_17->shader_preset))
   {
      FUNC_9(VAR_17->shader_preset);
      VAR_17->shader_preset = ((void*)0);
      return 0;
   }

   for (VAR_15 = 0; VAR_15 < VAR_17->shader_preset->passes; VAR_15++)
       FUNC_15(VAR_17->shader_preset->pass[VAR_15].source.path, VAR_17->shader_preset);

   FUNC_22(VAR_16, VAR_17->shader_preset);
   FUNC_8(VAR_16);

   for (VAR_15 = 0; VAR_15 < VAR_17->shader_preset->passes; VAR_15++)
   {
      char VAR_18[VAR_6];
      struct video_shader_pass *VAR_19 = &VAR_17->shader_preset->pass[VAR_15];

      FUNC_18(VAR_18, VAR_19->source.path, VAR_6);

      char *VAR_20 = FUNC_19(VAR_18, '.');

      if (!VAR_20)
         VAR_20 = VAR_18 + FUNC_17(VAR_18);

      *VAR_20++ = '.';
      *VAR_20++ = 'g';
      *VAR_20++ = 's';
      *VAR_20++ = 'h';
      *VAR_20++ = '\0';

      VAR_17->pass[VAR_15].gfd = FUNC_10(VAR_18);

      if (!VAR_17->pass[VAR_15].gfd)
      {
         FUNC_23(VAR_17);
         return 0;
      }

      for (int VAR_21 = 0; VAR_21 < 2 && VAR_21 < VAR_17->pass[VAR_15].gfd->vs->uniformBlockCount; VAR_21++)
      {
         VAR_17->pass[VAR_15].vs_ubos[VAR_21] = FUNC_5(VAR_17->pass[VAR_15].gfd->vs->uniformBlocks[VAR_21].size,
                                               VAR_5);
         FUNC_14(VAR_17->pass[VAR_15].vs_ubos[VAR_21], 0, VAR_17->pass[VAR_15].gfd->vs->uniformBlocks[VAR_21].size);
         FUNC_3(VAR_1, VAR_17->pass[VAR_15].vs_ubos[VAR_21],
                       VAR_17->pass[VAR_15].gfd->vs->uniformBlocks[VAR_21].size);
      }

      for (int VAR_22 = 0; VAR_22 < 2 && VAR_22 < VAR_17->pass[VAR_15].gfd->ps->uniformBlockCount; VAR_22++)
      {
         VAR_17->pass[VAR_15].ps_ubos[VAR_22] = FUNC_5(VAR_17->pass[VAR_15].gfd->ps->uniformBlocks[VAR_22].size,
                                               VAR_5);
         FUNC_14(VAR_17->pass[VAR_15].ps_ubos[VAR_22], 0, VAR_17->pass[VAR_15].gfd->ps->uniformBlocks[VAR_22].size);
         FUNC_3(VAR_1, VAR_17->pass[VAR_15].ps_ubos[VAR_22],
                       VAR_17->pass[VAR_15].gfd->ps->uniformBlocks[VAR_22].size);
      }
   }

   for (VAR_15 = 0; VAR_15 < VAR_17->shader_preset->luts; VAR_15++)
   {
      struct texture_image VAR_23 = {};

      if (FUNC_12(&VAR_23, VAR_17->shader_preset->lut[VAR_15].path))
      {
         VAR_17->luts[VAR_15].surface.width = VAR_23.width;
         VAR_17->luts[VAR_15].surface.height = VAR_23.height;
         VAR_17->luts[VAR_15].surface.depth = 1;
         VAR_17->luts[VAR_15].surface.dim = VAR_2;
         VAR_17->luts[VAR_15].surface.tileMode = VAR_4;
         VAR_17->luts[VAR_15].viewNumSlices = 1;

         VAR_17->luts[VAR_15].surface.format = VAR_3;
         VAR_17->luts[VAR_15].compMap = FUNC_4(VAR_10, VAR_9, VAR_8, VAR_11);

         FUNC_0(&VAR_17->luts[VAR_15].surface);
         FUNC_2(&VAR_17->luts[VAR_15]);
         VAR_17->luts[VAR_15].surface.image = FUNC_5(VAR_17->luts[VAR_15].surface.imageSize,
                                       VAR_17->luts[VAR_15].surface.alignment);

         for (int VAR_24 = 0; (VAR_24 < VAR_23.height) && (VAR_24 < VAR_17->luts[VAR_15].surface.height); VAR_24++)
            FUNC_13((uint32_t *)VAR_17->luts[VAR_15].surface.image + (VAR_24 * VAR_17->luts[VAR_15].surface.pitch),
                   VAR_23.pixels + (VAR_24 * VAR_23.width), VAR_23.width * sizeof(VAR_23.pixels));

         FUNC_3(VAR_0, VAR_17->luts[VAR_15].surface.image,
                       VAR_17->luts[VAR_15].surface.imageSize);

         FUNC_11(&VAR_23);
      }
   }

   return 1;
}
