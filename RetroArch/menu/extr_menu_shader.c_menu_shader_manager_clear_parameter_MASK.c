
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_shader_parameter {int maximum; int current; int minimum; int initial; } ;
struct video_shader {struct video_shader_parameter* parameters; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

int FUNC_2(struct video_shader *VAR_1,
      unsigned VAR_2)
{
   struct video_shader_parameter *VAR_3 = VAR_1 ?
      &VAR_1->parameters[VAR_2] : ((void*)0);

   if (!VAR_3)
      return 0;

   VAR_3->current = VAR_3->initial;
   VAR_3->current = FUNC_1(FUNC_0(VAR_3->minimum,
            VAR_3->current), VAR_3->maximum);

   VAR_0 = 1;

   return 0;
}
