
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* scale; int idx; } ;
typedef TYPE_2__ video_shader_ctx_scale_t ;
struct TYPE_9__ {int shader_data; TYPE_1__* shader; } ;
typedef TYPE_3__ gl_t ;
struct TYPE_10__ {int valid; } ;
struct TYPE_7__ {int (* shader_scale ) (int ,int ,TYPE_4__*) ;} ;


 int FUNC_0 (int ,int ,TYPE_4__*) ;

__attribute__((used)) static bool FUNC_1(gl_t *VAR_0,
      video_shader_ctx_scale_t *VAR_1)
{
   if (!VAR_1 || !VAR_1->scale)
      return 0;

   VAR_1->scale->valid = 0;

   VAR_0->shader->shader_scale(VAR_0->shader_data,
         VAR_1->idx, VAR_1->scale);
   return 1;
}
