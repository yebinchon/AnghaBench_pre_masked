
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct retro_hw_render_callback {scalar_t__ depth; scalar_t__ stencil; int bottom_left_origin; } ;
struct TYPE_4__ {int hw_render_enable; unsigned int hw_render_max_width; unsigned int hw_render_max_height; scalar_t__ hw_render_rb_ds; int hw_render_bottom_left; int hw_render_texture; int hw_render_fbo; } ;
typedef TYPE_1__ gl_core_t ;
typedef unsigned int GLint ;
typedef scalar_t__ GLenum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int ,scalar_t__) ;
 int FUNC_8 (int ,int ,int ,int ,int ) ;
 int FUNC_9 (int,int *) ;
 int FUNC_10 (int,scalar_t__*) ;
 int FUNC_11 (int,int *) ;
 int FUNC_12 (int ,unsigned int*) ;
 int FUNC_13 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_14 (int ,int,int ,unsigned int,unsigned int) ;
 int FUNC_15 (TYPE_1__*,int) ;
 struct retro_hw_render_callback* FUNC_16 () ;

__attribute__((used)) static bool FUNC_17(gl_core_t *VAR_15, unsigned VAR_16, unsigned VAR_17)
{
   GLint VAR_18;
   GLint VAR_19;
   GLenum VAR_20;
   struct retro_hw_render_callback *VAR_21 = FUNC_16();

   FUNC_15(VAR_15, 1);

   FUNC_1("[GLCore]: Initializing HW render (%u x %u).\n", VAR_16, VAR_17);
   FUNC_12(VAR_10, &VAR_18);
   FUNC_12(VAR_9, &VAR_19);
   FUNC_1("[GLCore]: Max texture size: %d px, renderbuffer size: %d px.\n",
             VAR_18, VAR_19);

   if (VAR_16 > (unsigned)VAR_18)
       VAR_16 = VAR_18;
   if (VAR_16 > (unsigned)VAR_19)
       VAR_16 = VAR_19;
   if (VAR_17 > (unsigned)VAR_18)
       VAR_17 = VAR_18;
   if (VAR_17 > (unsigned)VAR_19)
       VAR_17 = VAR_19;

   FUNC_9(1, &VAR_15->hw_render_fbo);
   FUNC_2(VAR_7, VAR_15->hw_render_fbo);
   FUNC_11(1, &VAR_15->hw_render_texture);
   FUNC_4(VAR_14, VAR_15->hw_render_texture);
   FUNC_14(VAR_14, 1, VAR_12, VAR_16, VAR_17);
   FUNC_8(VAR_7, VAR_0, VAR_14, VAR_15->hw_render_texture, 0);

   VAR_15->hw_render_rb_ds = 0;
   VAR_15->hw_render_bottom_left = VAR_21->bottom_left_origin;
   if (VAR_21->depth)
   {
      FUNC_10(1, &VAR_15->hw_render_rb_ds);
      FUNC_3(VAR_11, VAR_15->hw_render_rb_ds);
      FUNC_13(VAR_11, VAR_21->stencil ? VAR_2 : VAR_5,
                            VAR_16, VAR_17);
      FUNC_3(VAR_11, 0);

      if (VAR_21->stencil)
         FUNC_7(VAR_7, VAR_6, VAR_11, VAR_15->hw_render_rb_ds);
      else
         FUNC_7(VAR_7, VAR_3, VAR_11, VAR_15->hw_render_rb_ds);
   }

   VAR_20 = FUNC_5(VAR_7);
   if (VAR_20 != VAR_8)
   {
      FUNC_0("[GLCore]: Framebuffer is not complete.\n");
      FUNC_15(VAR_15, 0);
      return 0;
   }

   if (VAR_21->depth && VAR_21->stencil)
      FUNC_6(VAR_1 | VAR_4 | VAR_13);
   else if (VAR_21->depth)
      FUNC_6(VAR_1 | VAR_4);
   else
      FUNC_6(VAR_1);

   VAR_15->hw_render_enable = 1;
   VAR_15->hw_render_max_width = VAR_16;
   VAR_15->hw_render_max_height = VAR_17;
   FUNC_4(VAR_14, 0);
   FUNC_2(VAR_7, 0);
   FUNC_15(VAR_15, 0);

   return 1;
}
