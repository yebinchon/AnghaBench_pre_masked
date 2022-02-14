
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct retro_keybind {unsigned int mbutton; unsigned int joykey; void* joyaxis; } ;
struct menu_bind_state_port {int* mbuttons; int* buttons; scalar_t__* axes; int* hats; } ;
struct menu_bind_state {int * state; } ;


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
     struct retro_keybind * VAR_11,
      unsigned VAR_12)
{
   unsigned VAR_13, VAR_14, VAR_15;
   const struct menu_bind_state_port *VAR_16 = (const struct menu_bind_state_port*)
      &VAR_10->state[VAR_12];

   for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++)
   {
      bool VAR_17 = VAR_16->mbuttons[VAR_14];

      if (!VAR_17)
         continue;

      switch ( VAR_14 )
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
        VAR_11->mbutton = VAR_14;
        return 1;
     }
   }

   for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++)
   {
      bool VAR_18 = VAR_16->buttons[VAR_14];

      if (!VAR_18)
         continue;

      VAR_11->joykey = VAR_14;
      VAR_11->joyaxis = VAR_0;
      return 1;
   }


   for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++)
   {
      if (FUNC_3(VAR_16->axes[VAR_13]) >= 20000)
      {


         VAR_11->joyaxis = VAR_16->axes[VAR_13] > 0
            ? FUNC_1(VAR_13) : FUNC_0(VAR_13);
         VAR_11->joykey = VAR_9;

       return 1;
      }
   }

   for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++)
   {
      uint16_t VAR_19 = VAR_16->hats[VAR_15];
      uint16_t VAR_20 = 0;

      if (VAR_19 & VAR_4)
         VAR_20 = VAR_4;
      else if (VAR_19 & VAR_1)
         VAR_20 = VAR_1;
      else if (VAR_19 & VAR_2)
         VAR_20 = VAR_2;
      else if (VAR_19 & VAR_3)
         VAR_20 = VAR_3;

      if (VAR_20)
      {
         VAR_11->joykey = FUNC_2(VAR_15, VAR_20);
         VAR_11->joyaxis = VAR_0;
         return 1;
      }
   }

   return 0;
}
