
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int Uint32 ;
struct TYPE_9__ {int ticks; int sem_sync; } ;
struct TYPE_8__ {int frames_rendered; } ;
struct TYPE_6__ {int code; int * data2; int * data1; void* type; } ;
struct TYPE_7__ {TYPE_1__ user; void* type; } ;
typedef TYPE_1__ SDL_UserEvent ;
typedef TYPE_2__ SDL_Event ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 void* VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static Uint32 FUNC_2(Uint32 VAR_4)
{
  FUNC_1(VAR_1.sem_sync);
  VAR_1.ticks++;
  if (VAR_1.ticks == (VAR_3 ? 50 : 20))
  {
    SDL_Event VAR_5;
    SDL_UserEvent VAR_6;

    VAR_6.type = VAR_0;
    VAR_6.code = VAR_3 ? (VAR_2.frames_rendered / 3) : VAR_2.frames_rendered;
    VAR_6.data1 = ((void*)0);
    VAR_6.data2 = ((void*)0);
    VAR_1.ticks = VAR_2.frames_rendered = 0;

    VAR_5.type = VAR_0;
    VAR_5.user = VAR_6;

    FUNC_0(&VAR_5);
  }
  return VAR_4;
}
