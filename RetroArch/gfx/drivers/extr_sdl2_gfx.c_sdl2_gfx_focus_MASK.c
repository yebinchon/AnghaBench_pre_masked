
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int window; } ;
typedef TYPE_1__ sdl2_video_t ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static bool FUNC_1(void *VAR_2)
{
   sdl2_video_t *VAR_3 = (sdl2_video_t*)VAR_2;
   unsigned VAR_4 = (VAR_0 | VAR_1);
   return (FUNC_0(VAR_3->window) & VAR_4) == VAR_4;
}
