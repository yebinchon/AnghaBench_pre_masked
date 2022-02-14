
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_tex_info {int coord; int * tex_size; int * input_size; int tex; } ;
struct cg_fbo_params {scalar_t__ coord; int tex_size_f; int tex_size_v; int vid_size_f; int vid_size_v; int tex; } ;
typedef int cg_shader_data_t ;
typedef int CGparameter ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,int *,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(
      cg_shader_data_t *VAR_0,
      const struct cg_fbo_params *VAR_1,
      const struct video_tex_info *VAR_2)
{
   CGparameter VAR_3 = VAR_1->tex;

   FUNC_0(VAR_3, VAR_2->tex);

   FUNC_2(VAR_1->vid_size_v,
         VAR_2->input_size[0], VAR_2->input_size[1]);
   FUNC_2(VAR_1->vid_size_f,
         VAR_2->input_size[0], VAR_2->input_size[1]);
   FUNC_2(VAR_1->tex_size_v,
         VAR_2->tex_size[0], VAR_2->tex_size[1]);
   FUNC_2(VAR_1->tex_size_f,
         VAR_2->tex_size[0], VAR_2->tex_size[1]);

   if (VAR_1->coord)
      FUNC_1(VAR_1->coord, VAR_0, VAR_2->coord, 2);
}
