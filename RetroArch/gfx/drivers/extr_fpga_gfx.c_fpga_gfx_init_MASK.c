
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int width; unsigned int height; int is_threaded; scalar_t__ fullscreen; scalar_t__ rgb32; } ;
typedef TYPE_3__ video_info_t ;
struct TYPE_16__ {scalar_t__ video_font_enable; } ;
struct TYPE_15__ {int video_context_driver; } ;
struct TYPE_18__ {TYPE_2__ bools; TYPE_1__ arrays; } ;
typedef TYPE_4__ settings_t ;
typedef int input_driver_t ;
struct TYPE_19__ {unsigned int width; unsigned int height; scalar_t__ fullscreen; } ;
typedef TYPE_5__ gfx_ctx_mode_t ;
struct TYPE_20__ {void** input_data; int const** input; } ;
typedef TYPE_6__ gfx_ctx_input_t ;
struct TYPE_21__ {int ident; } ;
typedef TYPE_7__ gfx_ctx_driver_t ;
typedef void fpga_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int,int) ;
 TYPE_4__* FUNC_2 () ;
 int FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (void*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (void*) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_5__*) ;
 TYPE_7__* FUNC_8 (void*,int ,int ,int,int ,int) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (TYPE_7__ const*) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (unsigned int*,unsigned int*) ;
 int FUNC_13 (unsigned int*,unsigned int*) ;

__attribute__((used)) static void *FUNC_14(const video_info_t *VAR_7,
      const input_driver_t **VAR_8, void **VAR_9)
{
   unsigned VAR_10, VAR_11;
   gfx_ctx_input_t VAR_12;
   gfx_ctx_mode_t VAR_13;
   const gfx_ctx_driver_t *VAR_14 = ((void*)0);
   unsigned VAR_15 = 0, VAR_16 = 0;
   unsigned VAR_17 = 0, VAR_18 = 0;
   settings_t *VAR_19 = FUNC_2();
   fpga_t *VAR_20 = (fpga_t*)FUNC_1(1, sizeof(*VAR_20));

   *VAR_8 = ((void*)0);
   *VAR_9 = ((void*)0);

   VAR_6 = VAR_7->width;
   VAR_4 = VAR_7->height;
   VAR_2 = VAR_7->rgb32;

   VAR_3 = VAR_7->rgb32 ? 32 : 16;

   if (VAR_7->rgb32)
      VAR_5 = VAR_7->width * 4;
   else
      VAR_5 = VAR_7->width * 2;

   FUNC_4(VAR_20);

   VAR_14 = FUNC_8(VAR_20,
         VAR_19->arrays.video_context_driver,
         VAR_1, 1, 0, 0);
   if (!VAR_14)
      goto error;

   FUNC_10((const gfx_ctx_driver_t*)VAR_14);

   FUNC_0("[FPGA]: Found FPGA context: %s\n", VAR_14->ident);

   FUNC_7(&VAR_13);

   VAR_10 = VAR_13.width;
   VAR_11 = VAR_13.height;
   VAR_13.width = 0;
   VAR_13.height = 0;

   FUNC_0("[FPGA]: Detecting screen resolution %ux%u.\n", VAR_10, VAR_11);

   VAR_15 = VAR_7->width;
   VAR_16 = VAR_7->height;

   if (VAR_7->fullscreen && (VAR_15 == 0) && (VAR_16 == 0))
   {
      VAR_15 = VAR_10;
      VAR_16 = VAR_11;
   }

   VAR_13.width = VAR_15;
   VAR_13.height = VAR_16;
   VAR_13.fullscreen = VAR_7->fullscreen;

   if (!FUNC_11(&VAR_13))
      goto error;

   VAR_13.width = 0;
   VAR_13.height = 0;

   FUNC_7(&VAR_13);

   VAR_17 = VAR_13.width;
   VAR_18 = VAR_13.height;
   VAR_13.width = 0;
   VAR_13.height = 0;



   if (VAR_17 != 0 && VAR_18 != 0)
      FUNC_13(&VAR_17, &VAR_18);

   FUNC_12(&VAR_17, &VAR_18);

   FUNC_0("[FPGA]: Using resolution %ux%u\n", VAR_17, VAR_18);

   VAR_12.input = VAR_8;
   VAR_12.input_data = VAR_9;

   FUNC_9(&VAR_12);

   if (VAR_19->bools.video_font_enable)
      FUNC_3(((void*)0), 0,
            VAR_7->is_threaded,
            VAR_0);

   FUNC_0("[FPGA]: Init complete.\n");

   return VAR_20;

error:
   FUNC_6();
   if (VAR_20)
      FUNC_5(VAR_20);
   return ((void*)0);
}
