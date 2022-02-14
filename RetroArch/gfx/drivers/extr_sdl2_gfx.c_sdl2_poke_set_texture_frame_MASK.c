
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pitch; int tex; } ;
struct TYPE_5__ {TYPE_1__ menu; } ;
typedef TYPE_2__ sdl2_video_t ;


 int FUNC_0 (int ,int *,void const*,int ) ;
 int FUNC_1 (TYPE_2__*,int,int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0,
      const void *VAR_1, bool VAR_2,
      unsigned VAR_3, unsigned VAR_4, float VAR_5)
{
   if (VAR_1)
   {
      sdl2_video_t *VAR_6 = (sdl2_video_t*)VAR_0;

      FUNC_1(VAR_6, 1, VAR_2, VAR_3, VAR_4,
            VAR_3 * (VAR_2 ? 4 : 2));

      FUNC_0(VAR_6->menu.tex, ((void*)0), VAR_1, VAR_6->menu.pitch);
   }
}
