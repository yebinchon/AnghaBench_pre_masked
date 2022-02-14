
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int U; } ;
struct TYPE_5__ {int all; TYPE_1__ part; } ;
struct TYPE_6__ {scalar_t__ LNCLEN; int VRSIZE; int CCRLB; TYPE_2__ LCTA; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int,int ) ;
 int VAR_0 ;
 int FUNC_3 (int,int ) ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
   u32 VAR_4;
   u16 VAR_5;
   u32 VAR_6;
   int VAR_7;
 int VAR_8;


   if (VAR_2->LNCLEN == 0)
      return;

   if (VAR_2->VRSIZE & 0x8000)
      VAR_4 = (VAR_2->LCTA.all & 0x7FFFF) << 1;
   else
      VAR_4 = (VAR_2->LCTA.all & 0x3FFFF) << 1;

   VAR_8 = (VAR_2->CCRLB & 0x1f) << 1;

   if (VAR_2->LCTA.part.U & 0x8000)
   {

      for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
      {
         VAR_5 = FUNC_1(VAR_1, VAR_4) & 0x7FF;
         VAR_6 = FUNC_3(VAR_5, VAR_0);
         VAR_4 += 2;

         FUNC_2(1, VAR_7, FUNC_0(VAR_8, VAR_6));
      }
   }
   else
   {

      VAR_5 = FUNC_1(VAR_1, VAR_4) & 0x7FF;
      VAR_6 = FUNC_3(VAR_5, VAR_0);
      for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
         FUNC_2(1, VAR_7, FUNC_0(VAR_8, VAR_6));
   }
}
