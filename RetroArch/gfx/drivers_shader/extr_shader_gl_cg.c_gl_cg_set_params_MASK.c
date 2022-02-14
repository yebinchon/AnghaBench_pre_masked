
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {unsigned int width; unsigned int height; unsigned int tex_width; unsigned int tex_height; unsigned int out_width; unsigned int out_height; unsigned int frame_counter; void* info; void* prev_info; void* feedback_info; void* fbo_info; unsigned int fbo_info_cnt; } ;
typedef TYPE_6__ video_shader_ctx_params_t ;
struct video_tex_info {int dummy; } ;
struct TYPE_15__ {size_t active_idx; TYPE_4__* shader; TYPE_5__* prg; int * lut_textures; } ;
typedef TYPE_7__ cg_shader_data_t ;
struct TYPE_13__ {int fprg; int vprg; int * prev; int * fbo; int feedback; int orig; scalar_t__ frame_cnt_v; scalar_t__ frame_cnt_f; scalar_t__ frame_dir_v; int out_size_v; int tex_size_v; int vid_size_v; scalar_t__ frame_dir_f; int out_size_f; int tex_size_f; int vid_size_f; } ;
struct TYPE_12__ {unsigned int luts; unsigned int num_parameters; TYPE_1__* parameters; TYPE_3__* lut; TYPE_2__* pass; } ;
struct TYPE_11__ {int id; } ;
struct TYPE_10__ {unsigned int frame_count_mod; } ;
struct TYPE_9__ {float current; int id; } ;
typedef scalar_t__ CGparameter ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,float) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (TYPE_7__*,int *,struct video_tex_info const*) ;
 int FUNC_4 (int ,unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static void FUNC_6(void *VAR_2, void *VAR_3)
{
   unsigned VAR_4;
   video_shader_ctx_params_t *VAR_5 =
      (video_shader_ctx_params_t*)VAR_2;
   unsigned VAR_6 = VAR_5->width;
   unsigned VAR_7 = VAR_5->height;
   unsigned VAR_8 = VAR_5->tex_width;
   unsigned VAR_9 = VAR_5->tex_height;
   unsigned VAR_10 = VAR_5->out_width;
   unsigned VAR_11 = VAR_5->out_height;
   unsigned VAR_12 = VAR_5->frame_counter;
   const void *VAR_13 = VAR_5->info;
   const void *VAR_14 = VAR_5->prev_info;
   const void *VAR_15 = VAR_5->feedback_info;
   const void *VAR_16 = VAR_5->fbo_info;
   unsigned VAR_17 = VAR_5->fbo_info_cnt;
   const struct video_tex_info *VAR_18 = (const struct video_tex_info*)VAR_13;
   const struct video_tex_info *VAR_19 = (const struct video_tex_info*)VAR_14;
   const struct video_tex_info *VAR_20 = (const struct video_tex_info*)VAR_15;
   const struct video_tex_info *VAR_21 = (const struct video_tex_info*)VAR_16;
   cg_shader_data_t *VAR_22 = (cg_shader_data_t*)VAR_3;

   if (!VAR_22 || (VAR_22->active_idx == 0))
         return;
   if (VAR_22->active_idx == VAR_1)
      return;


   FUNC_4(VAR_22->prg[VAR_22->active_idx].vid_size_f, VAR_6, VAR_7);
   FUNC_4(VAR_22->prg[VAR_22->active_idx].tex_size_f, VAR_8, VAR_9);
   FUNC_4(VAR_22->prg[VAR_22->active_idx].out_size_f, VAR_10, VAR_11);
   FUNC_1(VAR_22->prg[VAR_22->active_idx].frame_dir_f,
         FUNC_5() ? -1.0 : 1.0);

   FUNC_4(VAR_22->prg[VAR_22->active_idx].vid_size_v, VAR_6, VAR_7);
   FUNC_4(VAR_22->prg[VAR_22->active_idx].tex_size_v, VAR_8, VAR_9);
   FUNC_4(VAR_22->prg[VAR_22->active_idx].out_size_v, VAR_10, VAR_11);
   FUNC_1(VAR_22->prg[VAR_22->active_idx].frame_dir_v,
         FUNC_5() ? -1.0 : 1.0);

   if (VAR_22->prg[VAR_22->active_idx].frame_cnt_f || VAR_22->prg[VAR_22->active_idx].frame_cnt_v)
   {
      unsigned VAR_23 = VAR_22->shader->pass[VAR_22->active_idx - 1].frame_count_mod;
      if (VAR_23)
         VAR_12 %= VAR_23;

      FUNC_1(VAR_22->prg[VAR_22->active_idx].frame_cnt_f, (float)VAR_12);
      FUNC_1(VAR_22->prg[VAR_22->active_idx].frame_cnt_v, (float)VAR_12);
   }


   for (VAR_4 = 0; VAR_4 < VAR_22->shader->luts; VAR_4++)
   {
      CGparameter VAR_24 = FUNC_0(
            VAR_22->prg[VAR_22->active_idx].fprg, VAR_22->shader->lut[VAR_4].id);
      CGparameter VAR_25 = FUNC_0(VAR_22->prg[VAR_22->active_idx].vprg,
    VAR_22->shader->lut[VAR_4].id);

      FUNC_2(VAR_24, VAR_22->lut_textures[VAR_4]);
      FUNC_2(VAR_25, VAR_22->lut_textures[VAR_4]);
   }

   if (VAR_22->active_idx)
   {

      FUNC_3(VAR_22, &VAR_22->prg[VAR_22->active_idx].orig, VAR_18);


      FUNC_3(VAR_22, &VAR_22->prg[VAR_22->active_idx].feedback, VAR_20);


      for (VAR_4 = 0; VAR_4 < VAR_17; VAR_4++)
         FUNC_3(VAR_22, &VAR_22->prg[VAR_22->active_idx].fbo[VAR_4], &VAR_21[VAR_4]);
   }


   for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
      FUNC_3(VAR_22, &VAR_22->prg[VAR_22->active_idx].prev[VAR_4], &VAR_19[VAR_4]);


   for (VAR_4 = 0; VAR_4 < VAR_22->shader->num_parameters; VAR_4++)
   {
      CGparameter VAR_26 = FUNC_0(
            VAR_22->prg[VAR_22->active_idx].vprg, VAR_22->shader->parameters[VAR_4].id);
      CGparameter VAR_27 = FUNC_0(
            VAR_22->prg[VAR_22->active_idx].fprg, VAR_22->shader->parameters[VAR_4].id);
      FUNC_1(VAR_26, VAR_22->shader->parameters[VAR_4].current);
      FUNC_1(VAR_27, VAR_22->shader->parameters[VAR_4].current);
   }
}
