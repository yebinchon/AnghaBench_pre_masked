
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct retro_keybind {unsigned int mbutton; unsigned int joykey; void* joyaxis; } ;
struct menu_bind_state_port {scalar_t__* axes; int* hats; scalar_t__* buttons; scalar_t__* mbuttons; } ;
struct menu_bind_state {TYPE_1__* axis_state; int * state; } ;
struct TYPE_2__ {int* locked_axes; scalar_t__* rested_axes; } ;


 void* FUNC_0 (unsigned int) ;
 void* VAR_0 ;
 void* FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_2 (unsigned int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static bool FUNC_4(
      struct menu_bind_state *VAR_10,
      struct menu_bind_state *VAR_11,
     struct retro_keybind * VAR_12,
      unsigned VAR_13)
{
   unsigned VAR_14, VAR_15, VAR_16;
   const struct menu_bind_state_port *VAR_17 = (const struct menu_bind_state_port*)
      &VAR_11->state[VAR_13];
   const struct menu_bind_state_port *VAR_18 = (const struct menu_bind_state_port*)
      &VAR_10->state[VAR_13];

   for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++)
   {
      bool VAR_19 = VAR_17->mbuttons[VAR_15] && !VAR_18->mbuttons[VAR_15];

      if (!VAR_19)
         continue;

      switch ( VAR_15 )
      {

     case 132:
     case 130:
     case 131:
     case 136:
     case 135:
     case 128:
     case 129:
     case 133:
     case 134:
        VAR_12->mbutton = VAR_15;
        return 1;
     }
   }

   for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++)
   {
      bool VAR_20 = VAR_17->buttons[VAR_15] && !VAR_18->buttons[VAR_15];

      if (!VAR_20)
         continue;

      VAR_12->joykey = VAR_15;
      VAR_12->joyaxis = VAR_0;
      return 1;
   }


   for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++)
   {
      int VAR_21 = FUNC_3(VAR_17->axes[VAR_14] -
            VAR_11->axis_state[VAR_13].locked_axes[VAR_14]);
      int VAR_22 = FUNC_3(VAR_17->axes[VAR_14] -
            VAR_11->axis_state[VAR_13].rested_axes[VAR_14]);

      if (FUNC_3(VAR_17->axes[VAR_14]) >= 20000 &&
            VAR_21 >= 20000 &&
            VAR_22 >= 20000)
      {


         VAR_12->joyaxis = VAR_17->axes[VAR_14] > 0
            ? FUNC_1(VAR_14) : FUNC_0(VAR_14);
         VAR_12->joykey = VAR_9;


         VAR_11->axis_state[VAR_13].locked_axes[VAR_14] =
            VAR_17->axes[VAR_14] > 0 ?
            0x7fff : -0x7fff;
         return 1;
      }

      if (VAR_21 >= 20000)
         VAR_11->axis_state[VAR_13].locked_axes[VAR_14] = 0;
   }

   for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++)
   {
      uint16_t VAR_23 = VAR_17->hats[VAR_16] & (~VAR_18->hats[VAR_16]);
      uint16_t VAR_24 = 0;

      if (VAR_23 & VAR_4)
         VAR_24 = VAR_4;
      else if (VAR_23 & VAR_1)
         VAR_24 = VAR_1;
      else if (VAR_23 & VAR_2)
         VAR_24 = VAR_2;
      else if (VAR_23 & VAR_3)
         VAR_24 = VAR_3;

      if (VAR_24)
      {
         VAR_12->joykey = FUNC_2(VAR_16, VAR_24);
         VAR_12->joyaxis = VAR_0;
         return 1;
      }
   }

   return 0;
}
