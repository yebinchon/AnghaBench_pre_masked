
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_shader {scalar_t__ passes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int *,struct video_shader*) ;

int FUNC_2(struct video_shader *VAR_2)
{
   bool VAR_3 = 0;

   if (!VAR_2)
      return 0;

   VAR_2->passes = 0;





   FUNC_1(((void*)0), VAR_2);

   VAR_1 = 1;

   return 0;
}
