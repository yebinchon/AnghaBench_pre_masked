
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_shader_parameter {int id; } ;


 scalar_t__ FUNC_0 (int ,char const*) ;

__attribute__((used)) static struct video_shader_parameter *FUNC_1(
      struct video_shader_parameter *VAR_0,
      unsigned VAR_1, const char *VAR_2)
{
   unsigned VAR_3;

   for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
   {
      if (FUNC_0(VAR_0[VAR_3].id, VAR_2))
         return &VAR_0[VAR_3];
   }

   return ((void*)0);
}
