
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_6__* shader; } ;
typedef TYPE_4__ glsl_shader_data_t ;
struct TYPE_11__ {unsigned int passes; TYPE_1__* pass; } ;
struct TYPE_8__ {TYPE_6__* fragment; TYPE_6__* vertex; } ;
struct TYPE_9__ {TYPE_2__ string; } ;
struct TYPE_7__ {TYPE_3__ source; } ;


 int FUNC_0 (TYPE_6__*) ;

__attribute__((used)) static void FUNC_1(glsl_shader_data_t *VAR_0)
{
   unsigned VAR_1;

   if (!VAR_0 || !VAR_0->shader)
      return;

   for (VAR_1 = 0; VAR_1 < VAR_0->shader->passes; VAR_1++)
   {
      FUNC_0(VAR_0->shader->pass[VAR_1].source.string.vertex);
      FUNC_0(VAR_0->shader->pass[VAR_1].source.string.fragment);
   }

   FUNC_0(VAR_0->shader);
   VAR_0->shader = ((void*)0);
}
