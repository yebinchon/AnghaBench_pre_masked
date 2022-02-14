
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_shader {TYPE_1__* lut; int luts; } ;
struct TYPE_2__ {int wrap; int filter; int mipmap; int path; } ;
typedef int GLuint ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,unsigned int,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (unsigned int,int *) ;

bool FUNC_4(
      const void *VAR_2,
      GLuint *VAR_3)
{
   unsigned VAR_4;
   const struct video_shader *VAR_5 =
      (const struct video_shader*)VAR_2;
   unsigned VAR_6 = FUNC_0(VAR_5->luts, VAR_0);

   if (!VAR_5->luts)
      return 1;

   FUNC_3(VAR_6, VAR_3);

   for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
   {
      if (!FUNC_1(
               VAR_5->lut[VAR_4].path,
               VAR_5->lut[VAR_4].mipmap,
               VAR_5->lut[VAR_4].filter,
               VAR_5->lut[VAR_4].wrap,
               VAR_4, VAR_3))
         return 0;
   }

   FUNC_2(VAR_1, 0);
   return 1;
}
