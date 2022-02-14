
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int shadow_color; int border_light_color; int border_dark_color; } ;
struct TYPE_5__ {int border_thickness; TYPE_1__ colors; scalar_t__ shadow_enable; } ;
typedef TYPE_2__ rgui_t ;


 int FUNC_0 (int *,unsigned int,unsigned int,int,unsigned int,unsigned int,int,int ) ;
 int FUNC_1 (int *,unsigned int,unsigned int,unsigned int,int,int,unsigned int,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(rgui_t *VAR_0, uint16_t *VAR_1,
      unsigned VAR_2, unsigned VAR_3)
{
   uint16_t VAR_4;
   uint16_t VAR_5;
   bool VAR_6;


   if (!VAR_0 || !VAR_1)
      return;

   VAR_4 = VAR_0->colors.border_dark_color;
   VAR_5 = VAR_0->colors.border_light_color;
   VAR_6 = VAR_0->border_thickness;


   FUNC_1(VAR_1, VAR_2, VAR_3,
         5, 5, VAR_2 - 10, 5,
         VAR_4, VAR_5, VAR_6);
   FUNC_1(VAR_1, VAR_2, VAR_3,
         5, VAR_3 - 10, VAR_2 - 10, 5,
         VAR_4, VAR_5, VAR_6);
   FUNC_1(VAR_1, VAR_2, VAR_3,
         5, 5, 5, VAR_3 - 10,
         VAR_4, VAR_5, VAR_6);
   FUNC_1(VAR_1, VAR_2, VAR_3,
         VAR_2 - 10, 5, 5, VAR_3 - 10,
         VAR_4, VAR_5, VAR_6);


   if (VAR_0->shadow_enable)
   {
      uint16_t VAR_7 = VAR_0->colors.shadow_color;

      FUNC_0(VAR_1, VAR_2, VAR_3,
            10, 10, 1, VAR_3 - 20, VAR_7);
      FUNC_0(VAR_1, VAR_2, VAR_3,
            10, 10, VAR_2 - 20, 1, VAR_7);
      FUNC_0(VAR_1, VAR_2, VAR_3,
            VAR_2 - 5, 6, 1, VAR_3 - 10, VAR_7);
      FUNC_0(VAR_1, VAR_2, VAR_3,
            6, VAR_3 - 5, VAR_2 - 10, 1, VAR_7);
   }
}
