
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct retro_hw_render_callback {int depth; int stencil; } ;
struct TYPE_6__ {unsigned int textures; int hw_render_fbo_init; int * texture; int * hw_render_fbo; int has_fbo; } ;
typedef TYPE_1__ gl_t ;
struct TYPE_7__ {int hw_render_depth_init; int * hw_render_depth; } ;
typedef TYPE_2__ gl2_renderchain_data_t ;
typedef int GLint ;
typedef scalar_t__ GLenum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,unsigned int,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ,int ) ;
 int FUNC_8 (unsigned int,int *) ;
 int FUNC_9 (unsigned int,int *) ;
 int FUNC_10 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int *) ;
 struct retro_hw_render_callback* FUNC_14 () ;

__attribute__((used)) static bool FUNC_15(
      gl_t *VAR_12,
      gl2_renderchain_data_t *VAR_13,
      unsigned VAR_14, unsigned VAR_15)
{
   GLenum VAR_16;
   unsigned VAR_17;
   bool VAR_18 = 0;
   bool VAR_19 = 0;
   GLint VAR_20 = 0;
   GLint VAR_21 = 0;
   struct retro_hw_render_callback *VAR_22 =
      FUNC_14();



   FUNC_5(VAR_12, 1);

   FUNC_1("[GL]: Initializing HW render (%u x %u).\n", VAR_14, VAR_15);
   FUNC_13(VAR_2, &VAR_20);
   FUNC_13(VAR_9, &VAR_21);
   FUNC_1("[GL]: Max texture size: %d px, renderbuffer size: %d px.\n",
         VAR_20, VAR_21);

   if (!VAR_12->has_fbo)
      return 0;

   FUNC_1("[GL]: Supports FBO (render-to-texture).\n");

   FUNC_12(VAR_3, 0);
   FUNC_8(VAR_12->textures, VAR_12->hw_render_fbo);

   VAR_18 = VAR_22->depth;
   VAR_19 = VAR_22->stencil;

   if (VAR_18)
   {
      FUNC_9(VAR_12->textures, VAR_13->hw_render_depth);
      VAR_13->hw_render_depth_init = 1;
   }

   for (VAR_17 = 0; VAR_17 < VAR_12->textures; VAR_17++)
   {
      FUNC_2(VAR_12->hw_render_fbo[VAR_17]);
      FUNC_7(VAR_7,
            VAR_4, VAR_3, VAR_12->texture[VAR_17], 0);

      if (VAR_18)
      {
         FUNC_3(VAR_10, VAR_13->hw_render_depth[VAR_17]);
         FUNC_10(VAR_10,
               VAR_19 ? VAR_5 : VAR_0,
               VAR_14, VAR_15);
         FUNC_3(VAR_10, 0);

         if (VAR_19)
         {
            FUNC_6(VAR_7,
                  VAR_1,
                  VAR_10,
                  VAR_13->hw_render_depth[VAR_17]);

         }
         else
         {
            FUNC_6(VAR_7,
                  VAR_6,
                  VAR_10,
                  VAR_13->hw_render_depth[VAR_17]);
         }
      }

      VAR_16 = FUNC_4(VAR_7);
      if (VAR_16 != VAR_8)
      {
         FUNC_0("[GL]: Failed to create HW render FBO #%u, error: 0x%04x.\n",
               VAR_17, VAR_16);
         return 0;
      }
   }

   FUNC_11();
   VAR_12->hw_render_fbo_init = 1;

   FUNC_5(VAR_12, 0);
   return 1;
}
