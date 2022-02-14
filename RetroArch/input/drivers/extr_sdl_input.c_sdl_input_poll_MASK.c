
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_13__ {int mouse_wu; int mouse_wd; int mouse_wl; int mouse_wr; TYPE_1__* joypad; } ;
typedef TYPE_5__ sdl_input_t ;
struct TYPE_12__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_10__ {int mod; int sym; } ;
struct TYPE_11__ {TYPE_2__ keysym; } ;
struct TYPE_14__ {scalar_t__ type; TYPE_4__ wheel; TYPE_3__ key; } ;
struct TYPE_9__ {int (* poll ) () ;} ;
typedef TYPE_6__ SDL_Event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int,int ,scalar_t__,...) ;
 int FUNC_1 () ;
 int FUNC_2 (int,unsigned int,unsigned int,int ,int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(void *VAR_16)
{
   sdl_input_t *VAR_17 = (sdl_input_t*)VAR_16;
   SDL_Event VAR_18;

   FUNC_1();

   if (VAR_17->joypad)
      VAR_17->joypad->poll();
   FUNC_4(VAR_17);




   while (FUNC_0(&VAR_18, 1, VAR_11, VAR_13) > 0)

   {
      if (VAR_18.type == VAR_12 || VAR_18.type == VAR_14)
      {
         uint16_t VAR_19 = 0;
         unsigned VAR_20 = FUNC_3(VAR_18.key.keysym.sym);

         if (VAR_18.key.keysym.mod & VAR_4)
            VAR_19 |= VAR_9;

         if (VAR_18.key.keysym.mod & VAR_2)
            VAR_19 |= VAR_7;

         if (VAR_18.key.keysym.mod & VAR_0)
            VAR_19 |= VAR_5;

         if (VAR_18.key.keysym.mod & VAR_3)
            VAR_19 |= VAR_8;

         if (VAR_18.key.keysym.mod & VAR_1)
            VAR_19 |= VAR_6;

         FUNC_2(VAR_18.type == VAR_12, VAR_20, VAR_20, VAR_19,
               VAR_10);
      }
   }
}
