
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct dispmanx_video {int back_surface; scalar_t__ dispmanx_height; scalar_t__ dispmanx_width; } ;


 int VAR_0 ;
 int FUNC_0 (struct dispmanx_video*,int,int,int,int,int ,int,float,int,int,int *) ;
 int FUNC_1 (int*,int ) ;

__attribute__((used)) static void FUNC_2 (struct dispmanx_video *VAR_1)
{


   uint16_t VAR_2[16] = {0x0000};
   float VAR_3 = (float)VAR_1->dispmanx_width / (float)VAR_1->dispmanx_height;

   FUNC_0(VAR_1,
         16,
         1,
         32,
         16,
         VAR_0,
         255,
         VAR_3,
         1,
         -1,
         &VAR_1->back_surface);



   FUNC_1(VAR_2, VAR_1->back_surface);
}
