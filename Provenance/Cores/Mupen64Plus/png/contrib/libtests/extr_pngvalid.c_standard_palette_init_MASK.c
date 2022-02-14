
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int alpha; } ;
typedef TYPE_1__ store_palette_entry ;
struct TYPE_7__ {int npalette; int is_transparent; int palette; int ps; } ;
typedef TYPE_2__ standard_display ;


 int FUNC_0 (int ,TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (int ,int*) ;

__attribute__((used)) static void
FUNC_2(standard_display *VAR_0)
{
   store_palette_entry *VAR_1 = FUNC_1(VAR_0->ps, &VAR_0->npalette);


   if (VAR_0->npalette > 0)
   {
      int VAR_2 = VAR_0->npalette;
      FUNC_0(VAR_0->palette, VAR_1, VAR_2 * sizeof *VAR_1);


      while (--VAR_2 >= 0)
         if (VAR_1[VAR_2].alpha < 255)
            break;



         if (VAR_2 >= 0)
            VAR_0->is_transparent = 1;
         else
            VAR_0->is_transparent = 0;



   }
}
