
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispmanx_video {unsigned int menu_width; unsigned int menu_height; unsigned int menu_pitch; int * menu_surface; int aspect_ratio; int menu_active; } ;


 int VAR_0 ;
 int FUNC_0 (struct dispmanx_video*,unsigned int,unsigned int,unsigned int,int,int ,int,int ,int,int ,int **) ;
 int FUNC_1 (void const*,int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, const void *VAR_2, bool VAR_3,
      unsigned VAR_4, unsigned VAR_5, float VAR_6)
{
   struct dispmanx_video *VAR_7 = VAR_1;

   if (!VAR_7->menu_active)
      return;


   if (VAR_7->menu_surface == ((void*)0))
   {
      VAR_7->menu_width = VAR_4;
      VAR_7->menu_height = VAR_5;
      VAR_7->menu_pitch = VAR_4 * (VAR_3 ? 4 : 2);


      FUNC_0(VAR_7,
            VAR_4,
            VAR_5,
            VAR_7->menu_pitch,
            16,
            VAR_0,
            210,
            VAR_7->aspect_ratio,
            1,
            0,
            &VAR_7->menu_surface);
   }




   FUNC_1(VAR_2, VAR_7->menu_surface);
}
