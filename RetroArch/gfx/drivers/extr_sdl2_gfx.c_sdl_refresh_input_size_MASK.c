
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ smooth; } ;
struct TYPE_8__ {unsigned int w; unsigned int h; int rgb32; unsigned int pitch; int active; int tex; } ;
struct TYPE_7__ {int renderer; TYPE_1__ video; TYPE_3__ frame; TYPE_3__ menu; } ;
typedef TYPE_2__ sdl2_video_t ;
typedef TYPE_3__ sdl2_tex_t ;


 int FUNC_0 (char*,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned int,int ,unsigned int,unsigned int) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_6 ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(sdl2_video_t *VAR_7, bool VAR_8, bool VAR_9,
      unsigned VAR_10, unsigned VAR_11, unsigned VAR_12)
{
   sdl2_tex_t *VAR_13 = VAR_8 ? &VAR_7->menu : &VAR_7->frame;

   if (!VAR_13->tex || VAR_13->w != VAR_10 || VAR_13->h != VAR_11
       || VAR_13->rgb32 != VAR_9 || VAR_13->pitch != VAR_12)
   {
      unsigned VAR_14;

      FUNC_5(VAR_13);

      if (VAR_8)
         VAR_14 = VAR_9 ? VAR_3 : VAR_5;
      else
         VAR_14 = VAR_9 ? VAR_3 : VAR_4;

      FUNC_3(VAR_2,
                              (VAR_7->video.smooth || VAR_8) ? "linear" : "nearest",
                              VAR_1);

      VAR_13->tex = FUNC_1(VAR_7->renderer, VAR_14,
                                      VAR_6, VAR_10, VAR_11);

      if (!VAR_13->tex)
      {
         FUNC_0("[SDL2]: Failed to create %s texture: %s\n", VAR_8 ? "menu" : "main",
                   FUNC_2());
         return;
      }

      if (VAR_8)
         FUNC_4(VAR_13->tex, VAR_0);

      VAR_13->w = VAR_10;
      VAR_13->h = VAR_11;
      VAR_13->pitch = VAR_12;
      VAR_13->rgb32 = VAR_9;
      VAR_13->active = 1;
   }
}
