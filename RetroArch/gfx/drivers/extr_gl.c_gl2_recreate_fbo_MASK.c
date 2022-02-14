
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_fbo_rect {int height; int width; } ;
typedef int GLuint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int,int *) ;

__attribute__((used)) static bool FUNC_8(
      struct video_fbo_rect *VAR_7,
      GLuint VAR_8,
      GLuint* VAR_9
      )
{
   FUNC_1(VAR_8);
   FUNC_6(1, VAR_9);
   FUNC_7(1, VAR_9);
   FUNC_5(VAR_0, *VAR_9);
   FUNC_4(VAR_0,
         0, VAR_5,
         VAR_7->width,
         VAR_7->height,
         0, VAR_6,
         VAR_2, ((void*)0));

   FUNC_3(VAR_3,
         VAR_1, VAR_0,
         *VAR_9, 0);

   if (FUNC_2(VAR_3)
         == VAR_4)
      return 1;

   FUNC_0("Failed to reinitialize FBO texture.\n");
   return 0;
}
