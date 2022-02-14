
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvidia_par {int paneltweak; int Chipset; } ;
struct _riva_hw_state {int bpp; } ;



__attribute__((used)) static int FUNC_0(struct nvidia_par *VAR_0,
         struct _riva_hw_state *VAR_1)
{
 int VAR_2 = 0;

   if (VAR_0->paneltweak) {
    VAR_2 = VAR_0->paneltweak;
   } else {






    if(((VAR_0->Chipset & 0xffff) == 0x0328) && (VAR_1->bpp == 32)) {

     VAR_2 = -1;
    }

    if((VAR_0->Chipset & 0xfff0) == 0x0310) {
     VAR_2 = 1;
    }

   }

   return VAR_2;
}
