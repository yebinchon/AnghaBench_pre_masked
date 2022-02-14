
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int tex_h; int tex_w; } ;
struct shader_pass {unsigned int last_width; unsigned int last_height; TYPE_1__ info; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {TYPE_4__ chain; } ;
typedef TYPE_2__ hlsl_renderchain_t ;
typedef int d3d9_video_t ;


 int FUNC_0 (TYPE_4__*,struct shader_pass*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (TYPE_2__*,struct shader_pass*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (TYPE_4__*,int ,struct shader_pass*,unsigned int,unsigned int,int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(
      d3d9_video_t *VAR_0,
      hlsl_renderchain_t *VAR_1,
      struct shader_pass *VAR_2,
      unsigned VAR_3, unsigned VAR_4,
      unsigned VAR_5, unsigned VAR_6,
      unsigned VAR_7, unsigned VAR_8,
      uint64_t VAR_9,
      unsigned VAR_10)
{
   if (VAR_2->last_width != VAR_3 || VAR_2->last_height != VAR_4)
      FUNC_0(&VAR_1->chain,
            VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
            VAR_7, VAR_8, VAR_10);

   FUNC_1(VAR_1, VAR_2,
         VAR_7, VAR_8, VAR_10);
   FUNC_2(&VAR_1->chain,
         VAR_1->chain.dev,
         VAR_2,
         VAR_3, VAR_4,
         VAR_2->info.tex_w, VAR_2->info.tex_h,
         VAR_7, VAR_8);
}
