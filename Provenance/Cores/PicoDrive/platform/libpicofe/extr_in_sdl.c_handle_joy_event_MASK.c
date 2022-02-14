
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct in_sdl_state {int* axis_keydown; int keystate; int joy_id; } ;
struct TYPE_6__ {int state; scalar_t__ button; int which; } ;
struct TYPE_5__ {int axis; int value; int which; } ;
struct TYPE_7__ {int type; TYPE_2__ jbutton; TYPE_1__ jaxis; } ;
typedef TYPE_3__ SDL_Event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct in_sdl_state *VAR_6, SDL_Event *VAR_7,
 int *VAR_8, int *VAR_9)
{
 int VAR_10 = -1, VAR_11 = 0, VAR_12 = 0;


 switch (VAR_7->type) {
 case 130:
  if (VAR_7->jaxis.which != VAR_6->joy_id)
   return -2;
  if (VAR_7->jaxis.axis > 1)
   break;
  if (-16384 <= VAR_7->jaxis.value && VAR_7->jaxis.value <= 16384) {
   VAR_10 = VAR_6->axis_keydown[VAR_7->jaxis.axis];
   VAR_6->axis_keydown[VAR_7->jaxis.axis] = 0;
   VAR_12 = 1;
  }
  else if (VAR_7->jaxis.value < -16384) {
   VAR_10 = VAR_6->axis_keydown[VAR_7->jaxis.axis];
   if (VAR_10)
    FUNC_0(VAR_6->keystate, VAR_10, 0);
   VAR_10 = VAR_7->jaxis.axis ? VAR_3 : VAR_1;
   VAR_6->axis_keydown[VAR_7->jaxis.axis] = VAR_10;
   VAR_11 = 1;
   VAR_12 = 1;
  }
  else if (VAR_7->jaxis.value > 16384) {
   VAR_10 = VAR_6->axis_keydown[VAR_7->jaxis.axis];
   if (VAR_10)
    FUNC_0(VAR_6->keystate, VAR_10, 0);
   VAR_10 = VAR_7->jaxis.axis ? VAR_0 : VAR_2;
   VAR_6->axis_keydown[VAR_7->jaxis.axis] = VAR_10;
   VAR_11 = 1;
   VAR_12 = 1;
  }
  break;

 case 129:
 case 128:
  if (VAR_7->jbutton.which != VAR_6->joy_id)
   return -2;
  VAR_10 = (int)VAR_7->jbutton.button + VAR_4;
  VAR_11 = VAR_7->jbutton.state == VAR_5;
  VAR_12 = 1;
  break;
 default:
  return -1;
 }

 if (VAR_12)
  FUNC_0(VAR_6->keystate, VAR_10, VAR_11);
 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_10;
 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_11;

 return VAR_12;
}
