
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* PostPixelFetchCalc ) (TYPE_1__*,int ) ;int member_0; } ;
typedef TYPE_1__ vdp2draw_struct ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_8__ {int TVMD; int VRSIZE; int BKTAU; int BKTAL; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_1__*,int,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int ) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(void)
{
   int VAR_3, VAR_4;


   if ((VAR_1->TVMD & 0x8000) == 0 && (VAR_1->TVMD & 0x100) == 0)
   {

      for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
         FUNC_4(VAR_4, FUNC_1(0x3F, 0));
   }
   else
   {

      u32 VAR_5;
      u16 VAR_6;
      vdp2draw_struct VAR_7 = { 0 };

      FUNC_2(VAR_1, &VAR_7, (1 << 5), 0);

      if (VAR_1->VRSIZE & 0x8000)
         VAR_5 = (((VAR_1->BKTAU & 0x7) << 16) | VAR_1->BKTAL) * 2;
      else
         VAR_5 = (((VAR_1->BKTAU & 0x3) << 16) | VAR_1->BKTAL) * 2;

      if (VAR_1->BKTAU & 0x8000)
      {

         for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
         {
            VAR_6 = FUNC_3(VAR_0, VAR_5);
            VAR_5 += 2;

            FUNC_4(VAR_3, VAR_7.PostPixelFetchCalc(&VAR_7, FUNC_0(0x3f, VAR_6)));
         }
      }
      else
      {

         VAR_6 = FUNC_3(VAR_0, VAR_5);

         for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
            FUNC_4(VAR_4, VAR_7.PostPixelFetchCalc(&VAR_7, FUNC_0(0x3f, VAR_6)));
      }
   }
}
