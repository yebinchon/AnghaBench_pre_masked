
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfx_fbo_scale {int abs_y; int scale_y; int type_y; int abs_x; int scale_x; int type_x; int valid; int srgb_fbo; int fp_fbo; } ;
typedef int key ;
typedef int config_file_t ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ,int ,int ,unsigned int) ;
 int FUNC_2 (char*,int,char*,unsigned int) ;

__attribute__((used)) static void FUNC_3(config_file_t *VAR_0,
      const struct gfx_fbo_scale *VAR_1, unsigned VAR_2)
{
   char VAR_3[64];

   VAR_3[0] = '\0';

   FUNC_2(VAR_3, sizeof(VAR_3), "float_framebuffer%u", VAR_2);
   FUNC_0(VAR_0, VAR_3, VAR_1->fp_fbo);
   FUNC_2(VAR_3, sizeof(VAR_3), "srgb_framebuffer%u", VAR_2);
   FUNC_0(VAR_0, VAR_3, VAR_1->srgb_fbo);

   if (!VAR_1->valid)
      return;

   FUNC_1(VAR_0, "x", VAR_1->type_x,
         VAR_1->scale_x, VAR_1->abs_x, VAR_2);
   FUNC_1(VAR_0, "y", VAR_1->type_y,
         VAR_1->scale_y, VAR_1->abs_y, VAR_2);
}
