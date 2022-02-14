
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_9__ {int all; } ;
struct TYPE_8__ {int all; } ;
struct TYPE_7__ {int all; } ;
struct TYPE_6__ {int all; } ;
struct TYPE_10__ {int SCRCTL; int CHCTLA; int BGON; int KTCTL; int MPOFN; int PNCN0; int PLSZ; int MPABN0; int MPCDN0; int RPRCTL; int SCXIN0; int SCYIN0; int ZMCTL; int CRAOFA; int PRINA; int CCRNA; int SFCCMD; int SFPRMD; int WCTLA; TYPE_4__ VCSTA; TYPE_3__ LSTA0; TYPE_2__ ZMYN0; TYPE_1__ ZMXN0; int BMPNA; } ;


 char* FUNC_0 (char*,int,int ,int) ;
 char* FUNC_1 (char*,int) ;
 char* FUNC_2 (char*,int,int,int,int) ;
 char* FUNC_3 (char*,int) ;
 char* FUNC_4 (char*,int,int,int,int,int,int*) ;
 char* FUNC_5 (char*,int) ;
 char* FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,char*,...) ;
 char* FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (int,int*,int*) ;
 TYPE_5__* VAR_0 ;

void FUNC_10(char *VAR_1, int *VAR_2)
{
   u16 VAR_3 = VAR_0->SCRCTL & 0x3F;
   int VAR_4=VAR_0->CHCTLA & 0x2;
   int VAR_5=(VAR_0->CHCTLA & 0x1) + 1;
   u8 VAR_6[4];

   if (VAR_0->BGON & 0x1 || VAR_0->BGON & 0x20)
   {

      *VAR_2 = 1;


      if (VAR_0->BGON & 0x20)
      {
         FUNC_7(VAR_1, "RBG1 mode\r\n");

         if (VAR_0->KTCTL & 0x100)
         {
            FUNC_7(VAR_1, "Coefficient Table Enabled(Mode %d)\r\n", (VAR_0->KTCTL >> 10) & 0x3);
         }
      }
      else
      {
         FUNC_7(VAR_1, "NBG0 mode\r\n");
      }


      VAR_1 = FUNC_5(VAR_1, 0x1);


      VAR_1 = FUNC_1(VAR_1, (VAR_0->CHCTLA & 0x70) >> 4);


      if (VAR_4 && !(VAR_0->BGON & 0x20))
      {

         VAR_1 = FUNC_0(VAR_1, (VAR_0->CHCTLA & 0xC) >> 2, VAR_0->BMPNA, VAR_0->MPOFN);
      }
      else
      {

         int VAR_7;
         u16 VAR_8=VAR_0->PNCN0 & 0x3FF;
         int VAR_9=0, VAR_10=0;

         if(VAR_0->PNCN0 & 0x8000)
            VAR_7 = 1;
         else
            VAR_7 = 2;

         FUNC_7(VAR_1, "Tile(%dH x %dV)\r\n", VAR_5, VAR_5);

         FUNC_9(VAR_0->PLSZ & 0x3, &VAR_9, &VAR_10);
         FUNC_7(VAR_1, "Plane Size = %dH x %dV\r\n", VAR_9, VAR_10);


         if (VAR_7 == 2)
         {
            FUNC_7(VAR_1, "Pattern Name data size = 2 words\r\n");
         }
         else
         {
            FUNC_7(VAR_1, "Pattern Name data size = 1 word\r\n");
            FUNC_7(VAR_1, "Character Number Supplement bit = %d\r\n", (VAR_8 >> 14) & 0x1);
            FUNC_7(VAR_1, "Special Priority bit = %d\r\n", (VAR_8 >> 9) & 0x1);
            FUNC_7(VAR_1, "Special Color Calculation bit = %d\r\n", (VAR_8 >> 8) & 0x1);
            FUNC_7(VAR_1, "Supplementary Palette number = %d\r\n", (VAR_8 >> 5) & 0x7);
            FUNC_7(VAR_1, "Supplementary Color number = %d\r\n", VAR_8 & 0x1f);
         }

         VAR_6[0] = VAR_0->MPABN0 & 0xFF;
         VAR_6[1] = VAR_0->MPABN0 >> 8;
         VAR_6[2] = VAR_0->MPCDN0 & 0xFF;
         VAR_6[3] = VAR_0->MPCDN0 >> 8;
         VAR_1 = FUNC_4(VAR_1, VAR_5, VAR_0->PNCN0, VAR_0->PLSZ & 0x3, (VAR_0->MPOFN & 0x7) << 6, 4, VAR_6);
      }

      if (VAR_0->BGON & 0x20)
      {







         if (VAR_0->RPRCTL & 0x400)
         {
            FUNC_7(VAR_1, "Read KAst Parameter = TRUE\r\n");
         }
         else
         {
            FUNC_7(VAR_1, "Read KAst Parameter = FALSE\r\n");
         }

         if (VAR_0->RPRCTL & 0x200)
         {
            FUNC_7(VAR_1, "Read Yst Parameter = TRUE\r\n");
         }
         else
         {
            FUNC_7(VAR_1, "Read Yst Parameter = FALSE\r\n");
         }

         if (VAR_0->RPRCTL & 0x100)
         {
            FUNC_7(VAR_1, "Read Xst Parameter = TRUE\r\n");
         }
         else
         {
            FUNC_7(VAR_1, "Read Xst Parameter = FALSE\r\n");
         }
      }
      else
      {





         FUNC_7(VAR_1, "Screen Scroll x = %d, y = %d\r\n", - ((VAR_0->SCXIN0 & 0x7FF) % 512), - ((VAR_0->SCYIN0 & 0x7FF) % 512));


         FUNC_7(VAR_1, "Coordinate Increments x = %f, y = %f\r\n", (float) 65536 / (VAR_0->ZMXN0.all & 0x7FF00), (float) 65536 / (VAR_0->ZMYN0.all & 0x7FF00));


         switch (VAR_0->ZMCTL & 3)
         {
            case 1:
               FUNC_7(VAR_1, "Horizontal Reduction = 1/2\r\n");
               break;
            case 2:
            case 3:
               FUNC_7(VAR_1, "Horizontal Reduction = 1/4\r\n");
               break;
            default: break;
         }

         if (VAR_3 & 0x8)
         {
            FUNC_7(VAR_1, "Line Zoom enabled\r\n");
         }

         if (VAR_3 & 0x4)
         {
            FUNC_7(VAR_1, "Line Scroll Vertical enabled\r\n");
         }

         if (VAR_3 & 0x2)
         {
            FUNC_7(VAR_1, "Line Scroll Horizontal enabled\r\n");
         }

         if (VAR_3 & 0x6)
         {
            FUNC_7(VAR_1, "Line Scroll Enabled\r\n");
            FUNC_7(VAR_1, "Line Scroll Table Address = %08X\r\n", (int)(0x05E00000 + ((VAR_0->LSTA0.all & 0x7FFFE) << 1)));

            switch (VAR_3 >> 4)
            {
               case 0:
                  FUNC_7(VAR_1, "Line Scroll Interval = Each Line\r\n");
                  break;
               case 1:
                  FUNC_7(VAR_1, "Line Scroll Interval = Every 2 Lines\r\n");
                  break;
               case 2:
                  FUNC_7(VAR_1, "Line Scroll Interval = Every 4 Lines\r\n");
                  break;
               case 3:
                  FUNC_7(VAR_1, "Line Scroll Interval = Every 8 Lines\r\n");
                  break;
            }
         }

         if (VAR_3 & 0x1)
         {
            FUNC_7(VAR_1, "Vertical Cell Scroll enabled\r\n");
            FUNC_7(VAR_1, "Vertical Cell Scroll Table Address = %08X\r\n", (int)(0x05E00000 + ((VAR_0->VCSTA.all & 0x7FFFE) << 1)));
         }
      }


      VAR_1 = FUNC_8(VAR_1, VAR_0->WCTLA, 0);




      FUNC_7(VAR_1, "Color Ram Address Offset = %X\r\n", (VAR_0->CRAOFA & 0x7) << 8);


      VAR_1 = FUNC_6(VAR_1, VAR_0->SFPRMD);






      FUNC_7(VAR_1, "Priority = %d\r\n", VAR_0->PRINA & 0x7);


      VAR_1 = FUNC_2(VAR_1, 0x0001, 0x0002, VAR_0->CCRNA & 0x1F, VAR_0->SFCCMD & 0x3);


      VAR_1 = FUNC_3(VAR_1, 0x0001);

      FUNC_7(VAR_1, "Special Color Calculation %d\r\n",(VAR_0->SFCCMD>>0)&0x03);

   }
   else
   {

      *VAR_2 = 0;
   }
}
