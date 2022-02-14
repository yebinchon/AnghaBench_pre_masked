
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int active_idx; TYPE_1__* prg; } ;
typedef TYPE_2__ glsl_shader_data_t ;
struct TYPE_4__ {scalar_t__ id; } ;
typedef scalar_t__ GLuint ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, void *VAR_1, unsigned VAR_2, bool VAR_3)
{
   GLuint VAR_4;

   if (VAR_3)
   {
      glsl_shader_data_t *VAR_5 = (glsl_shader_data_t*)VAR_1;
      if (!VAR_5)
         return;

      FUNC_1(VAR_5);
      VAR_5->active_idx = VAR_2;
      VAR_4 = VAR_5->prg[VAR_2].id;
   }
   else
      VAR_4 = (GLuint)VAR_2;

   FUNC_0(VAR_4);
}
