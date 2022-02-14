
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int width; unsigned int height; int * texture; } ;
struct TYPE_4__ {TYPE_1__ menu; } ;
typedef TYPE_2__ vita_video_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (char*,unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (unsigned int,unsigned int) ;
 int * FUNC_2 (unsigned int,unsigned int,int ) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_2, const void *VAR_3, bool VAR_4,
      unsigned VAR_5, unsigned VAR_6, float VAR_7)
{
   int VAR_8, VAR_9;
   void *VAR_10;
   unsigned int VAR_11;
   vita_video_t *VAR_12 = (vita_video_t*)VAR_2;

   (void)VAR_7;

   if (VAR_5 != VAR_12->menu.width && VAR_6 != VAR_12->menu.height && VAR_12->menu.texture)
   {
      FUNC_3(VAR_12->menu.texture);
      VAR_12->menu.texture = ((void*)0);
   }

   if (!VAR_12->menu.texture)
   {
      if (VAR_4)
      {
         VAR_12->menu.texture = FUNC_1(VAR_5, VAR_6);
         FUNC_0("Creating Frame RGBA8 texture: w: %i  h: %i\n",
               VAR_5, VAR_6);
      }
      else
      {
         VAR_12->menu.texture = FUNC_2(
               VAR_5, VAR_6, VAR_1);
         FUNC_0("Creating Frame R5G6B5 texture: w: %i  h: %i\n",
               VAR_5, VAR_6);
      }
      VAR_12->menu.width = VAR_5;
      VAR_12->menu.height = VAR_6;
   }

   FUNC_6(VAR_12->menu.texture,
         VAR_0,
         VAR_0);

   VAR_10 = FUNC_4(VAR_12->menu.texture);
   VAR_11 = FUNC_5(VAR_12->menu.texture);

   if (VAR_4)
   {
      uint32_t *VAR_13 = VAR_10;
      const uint32_t *VAR_14 = VAR_3;

      VAR_11 /= 4;

      for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
         for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
            VAR_13[VAR_9 + VAR_8*VAR_11] = VAR_14[VAR_9 + VAR_8*VAR_5];
   }
   else
   {
      uint16_t *VAR_15 = VAR_10;
      const uint16_t *VAR_16 = VAR_3;

      VAR_11 /= 2;

      for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
         for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
            VAR_15[VAR_9 + VAR_8*VAR_11] = VAR_16[VAR_9 + VAR_8*VAR_5];
   }
}
