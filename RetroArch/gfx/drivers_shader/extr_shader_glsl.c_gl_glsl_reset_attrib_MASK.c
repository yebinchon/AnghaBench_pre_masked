
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int attribs_index; int * attribs_elems; } ;
typedef TYPE_1__ glsl_shader_data_t ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(glsl_shader_data_t *VAR_0)
{
   unsigned VAR_1;


   FUNC_2(VAR_0->attribs_index <= FUNC_0(VAR_0->attribs_elems));

   for (VAR_1 = 0; VAR_1 < VAR_0->attribs_index; VAR_1++)
      FUNC_1(VAR_0->attribs_elems[VAR_1]);
   VAR_0->attribs_index = 0;
}
