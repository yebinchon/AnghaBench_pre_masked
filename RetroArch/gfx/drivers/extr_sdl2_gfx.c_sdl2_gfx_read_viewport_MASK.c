
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int window; } ;
typedef TYPE_1__ sdl2_video_t ;
struct TYPE_7__ {int h; int pitch; int pixels; } ;
typedef TYPE_2__ SDL_Surface ;


 int FUNC_0 (char*,int ) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 () ;
 TYPE_2__* FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 () ;

__attribute__((used)) static bool FUNC_6(void *VAR_1, uint8_t *VAR_2, bool VAR_3)
{
   SDL_Surface *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
   sdl2_video_t *VAR_6 = (sdl2_video_t*)VAR_1;

   if (!VAR_3)
      FUNC_5();

   VAR_4 = FUNC_3(VAR_6->window);
   VAR_5 = FUNC_1(VAR_4, VAR_0, 0);

   if (!VAR_5)
   {
      FUNC_0("Failed to convert viewport data to BGR24: %s", FUNC_2());
      return 0;
   }

   FUNC_4(VAR_2, VAR_5->pixels, VAR_5->h * VAR_5->pitch);

   return 1;
}
