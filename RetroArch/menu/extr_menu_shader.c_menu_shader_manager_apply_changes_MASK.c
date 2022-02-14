
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_shader {scalar_t__ passes; } ;
typedef enum rarch_shader_type { ____Placeholder_rarch_shader_type } rarch_shader_type ;


 int VAR_0 ;
 int FUNC_0 (struct video_shader*) ;
 int FUNC_1 (struct video_shader*,int *,int) ;
 int FUNC_2 (int *,int,int *,int) ;

void FUNC_3(struct video_shader *VAR_1)
{
   enum rarch_shader_type VAR_2 = VAR_0;

   if (!VAR_1)
      return;

   VAR_2 = FUNC_0(VAR_1);

   if (VAR_1->passes && VAR_2 != VAR_0)
   {
      FUNC_1(VAR_1, ((void*)0), 1);
      return;
   }

   FUNC_2(((void*)0), VAR_2, ((void*)0), 1);
}
