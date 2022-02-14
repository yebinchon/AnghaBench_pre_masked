
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_program_cg {int vprg; int fprg; } ;
struct cg_fbo_params {void* coord; void* tex_size_f; void* tex_size_v; void* vid_size_f; void* vid_size_v; void* tex; } ;
typedef int attr_buf ;


 void* FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int,char*,char const*) ;

__attribute__((used)) static void FUNC_2(
      struct shader_program_cg *VAR_0,
      struct cg_fbo_params *VAR_1,
      const char *VAR_2)
{
   char VAR_3[64];

   VAR_3[0] = '\0';

   FUNC_1(VAR_3, sizeof(VAR_3), "%s.texture", VAR_2);
   if (!VAR_1->tex)
      VAR_1->tex = FUNC_0(VAR_0->fprg, VAR_3);

   FUNC_1(VAR_3, sizeof(VAR_3), "%s.video_size", VAR_2);
   if (!VAR_1->vid_size_v)
      VAR_1->vid_size_v = FUNC_0(VAR_0->vprg, VAR_3);
   if (!VAR_1->vid_size_f)
      VAR_1->vid_size_f = FUNC_0(VAR_0->fprg, VAR_3);

   FUNC_1(VAR_3, sizeof(VAR_3), "%s.texture_size", VAR_2);
   if (!VAR_1->tex_size_v)
      VAR_1->tex_size_v = FUNC_0(VAR_0->vprg, VAR_3);
   if (!VAR_1->tex_size_f)
      VAR_1->tex_size_f = FUNC_0(VAR_0->fprg, VAR_3);

   FUNC_1(VAR_3, sizeof(VAR_3), "%s.tex_coord", VAR_2);
   if (!VAR_1->coord)
      VAR_1->coord = FUNC_0(VAR_0->vprg, VAR_3);
}
