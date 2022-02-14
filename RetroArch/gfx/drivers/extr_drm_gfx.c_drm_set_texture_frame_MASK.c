
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct drm_video {int menu_surface; int current_aspect; int menu_active; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_video*,unsigned int,unsigned int,unsigned int,int,int ,int,int ,int,int ,int *) ;
 int FUNC_2 (struct drm_video*,char*,int ) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (char*,char*,unsigned int) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, const void *VAR_2, bool VAR_3,
      unsigned VAR_4, unsigned VAR_5, float VAR_6)
{
   unsigned int VAR_7, VAR_8;
   struct drm_video *VAR_9 = VAR_1;

   if (!VAR_9->menu_active)
      return;



   if (!VAR_9->menu_surface)
   {
      FUNC_1(VAR_9,
            VAR_4,
            VAR_5,
            VAR_4 * 4,
            4,
            VAR_0,
            210,
            VAR_9->current_aspect,
            2,
            0,
            &VAR_9->menu_surface);



      FUNC_0(VAR_9->menu_surface);
   }




   unsigned int VAR_10 = VAR_4 * 2;
   unsigned int VAR_11 = VAR_4 * 4;
   unsigned int VAR_12 = VAR_4;
   uint32_t VAR_13[VAR_12];


   char *VAR_14 = (char *) FUNC_3 (VAR_11 * VAR_5);


   char *VAR_15 = VAR_14;

   for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
   {
      for (VAR_8 = 0; VAR_8 < VAR_10 / 2; VAR_8++)
      {
         uint16_t VAR_16 = *((uint16_t*)VAR_2 + (VAR_10 / 2 * VAR_7) + VAR_8);

         uint32_t VAR_17 = (VAR_16 << 8) & 0x00FF0000;
         uint32_t VAR_18 = (VAR_16 << 4) & 0x0000FF00;
         uint32_t VAR_19 = (VAR_16 << 0) & 0x000000FF;
         VAR_13[VAR_8] = (0 | VAR_17 | VAR_18 | VAR_19);
      }
      FUNC_4(VAR_15 + (VAR_11 * VAR_7), (char*)VAR_13, VAR_11);
   }


   FUNC_2(VAR_9, VAR_14, VAR_9->menu_surface);
}
