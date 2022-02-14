
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int width; int height; } ;
struct TYPE_5__ {int sdl_surface; TYPE_1__ display_region; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_COMPONENT_MODULE_T ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int,int,int,int) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_3(MMAL_COMPONENT_MODULE_T *VAR_8)
{
   uint32_t VAR_9;
   int VAR_10;
   int VAR_11 = VAR_8->display_region.width;
   int VAR_12 = VAR_8->display_region.height;

   VAR_9 = VAR_3 | VAR_5 | VAR_6 | VAR_4 | VAR_7;
   VAR_10 = FUNC_2(VAR_11, VAR_12, 16, VAR_9);
   if(!VAR_10)
   {
      FUNC_0("no SDL video mode available");
      return VAR_1;
   }
   VAR_8->sdl_surface = FUNC_1(VAR_11, VAR_12, VAR_10, VAR_9);
   if(!VAR_8->sdl_surface)
   {
      FUNC_0("cannot create SDL surface");
      return VAR_0;
   }
   return VAR_2;
}
