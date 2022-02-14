
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct video_viewport {int width; int height; scalar_t__ full_height; scalar_t__ full_width; scalar_t__ y; scalar_t__ x; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char const*,char const*,int *,int,int,int,int,int *,int,int,int,int,int,unsigned int) ;
 int FUNC_3 (struct video_viewport*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static bool FUNC_5(
      const char *VAR_0,
      const char *VAR_1,
      bool VAR_2,
      bool VAR_3,
      bool VAR_4,
      bool VAR_5,
      bool VAR_6,
      unsigned VAR_7)
{
   struct video_viewport VAR_8;
   uint8_t *VAR_9 = ((void*)0);

   VAR_8.x = 0;
   VAR_8.y = 0;
   VAR_8.width = 0;
   VAR_8.height = 0;
   VAR_8.full_width = 0;
   VAR_8.full_height = 0;

   FUNC_3(&VAR_8);

   if (!VAR_8.width || !VAR_8.height)
      return 0;

   VAR_9 = (uint8_t*)FUNC_1(VAR_8.width * VAR_8.height * 3);

   if (!VAR_9)
      return 0;

   if (!FUNC_4(VAR_9, VAR_3))
   {
      FUNC_0(VAR_9);
      return 0;
   }


   if (!FUNC_2(VAR_0,
            VAR_1,
            VAR_9, VAR_8.width, VAR_8.height,
            VAR_8.width * 3, 1, VAR_9,
            VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
            VAR_7))
   {
      FUNC_0(VAR_9);
      return 0;
   }

   return 1;
}
