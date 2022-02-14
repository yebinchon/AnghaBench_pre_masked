
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_shader_pass {int filter; } ;
struct video_shader {struct video_shader_pass* pass; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct video_shader *VAR_2,
      unsigned VAR_3)
{
   struct video_shader_pass *VAR_4 = VAR_2 ?
      &VAR_2->pass[VAR_3] : ((void*)0);

   if (!VAR_4)
      return -1;

   VAR_4->filter = VAR_0;

   VAR_1 = 1;

   return 0;
}
