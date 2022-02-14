
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_7__ {int all; } ;
struct TYPE_6__ {int all; } ;
struct TYPE_5__ {int all; } ;
struct TYPE_8__ {int SCRCTL; int CHCTLA; int BGON; int BMPNA; int MPOFN; int PNCN1; int PLSZ; int MPABN1; int MPCDN1; int SCXIN1; int SCYIN1; int ZMCTL; int WCTLA; int CRAOFA; int SFPRMD; int PRINA; int CCRNA; int SFCCMD; TYPE_3__ VCSTA; TYPE_2__ LSTA1; TYPE_1__ ZMXN1; } ;


 char* FUNC_0 (char*,int,int,int) ;
 char* FUNC_1 (char*,int) ;
 char* FUNC_2 (char*,int,int,int,int) ;
 char* FUNC_3 (char*,int) ;
 char* FUNC_4 (char*,int,int,int,int,int,int*) ;
 char* FUNC_5 (char*,int) ;
 char* FUNC_6 (char*,int) ;
 int FUNC_7 (char*,char*,...) ;
 char* FUNC_8 (char*,int,int ) ;
 int FUNC_9 (int,int*,int*) ;
 TYPE_4__* VAR_0 ;

void FUNC_10(char *VAR_1, int *VAR_2)
{
   u16 VAR_3 = (VAR_0->SCRCTL >> 8) & 0x3F;
   int VAR_4=VAR_0->CHCTLA & 0x200;
   int VAR_5=((VAR_0->CHCTLA & 0x100) >> 8) + 1;
   u8 VAR_6[4];

   if (VAR_0->BGON & 0x2)
   {

      *VAR_2 = 1;


      VAR_1 = FUNC_5(VAR_1, 0x2);


      VAR_1 = FUNC_1(VAR_1, (VAR_0->CHCTLA & 0x3000) >> 12);


      if (VAR_4)
      {

         VAR_1 = FUNC_0(VAR_1, (VAR_0->CHCTLA & 0xC00) >> 10, VAR_0->BMPNA >> 8, VAR_0->MPOFN >> 4);
      }
      else
      {
         int VAR_7;
         u16 VAR_8=VAR_0->PNCN1 & 0x3FF;
         int VAR_9=0, VAR_10=0;

         if(VAR_0->PNCN1 & 0x8000)
           VAR_7 = 1;
         else
           VAR_7 = 2;


         FUNC_7(VAR_1, "Tile(%dH x %dV)\r\n", VAR_5, VAR_5);

         FUNC_9((VAR_0->PLSZ & 0xC) >> 2, &VAR_9, &VAR_10);
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

         VAR_6[0] = VAR_0->MPABN1 & 0xFF;
         VAR_6[1] = VAR_0->MPABN1 >> 8;
         VAR_6[2] = VAR_0->MPCDN1 & 0xFF;
         VAR_6[3] = VAR_0->MPCDN1 >> 8;
         VAR_1 = FUNC_4(VAR_1, VAR_5, VAR_0->PNCN1, (VAR_0->PLSZ & 0xC) >> 2, (VAR_0->MPOFN & 0x70) << 2, 4, VAR_6);
      }





         FUNC_7(VAR_1, "Screen Scroll x = %d, y = %d\r\n", - ((VAR_0->SCXIN1 & 0x7FF) % 512), - ((VAR_0->SCYIN1 & 0x7FF) % 512));


      FUNC_7(VAR_1, "Coordinate Increments x = %f, y = %f\r\n", (float) 65536 / (VAR_0->ZMXN1.all & 0x7FF00), (float) 65536 / (VAR_0->ZMXN1.all & 0x7FF00));


      switch ((VAR_0->ZMCTL >> 8) & 3)
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
         FUNC_7(VAR_1, "Line Zoom X enabled\r\n");
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
         FUNC_7(VAR_1, "Line Scroll Table Address = %08X\r\n", (int)(0x05E00000 + ((VAR_0->LSTA1.all & 0x7FFFE) << 1)));
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


      VAR_1 = FUNC_8(VAR_1, VAR_0->WCTLA >> 8, 0);




      FUNC_7(VAR_1, "Color Ram Address Offset = %X\r\n", (VAR_0->CRAOFA & 0x70) << 4);


      VAR_1 = FUNC_6(VAR_1, VAR_0->SFPRMD >> 2);






      FUNC_7(VAR_1, "Priority = %d\r\n", (VAR_0->PRINA >> 8) & 0x7);


      VAR_1 = FUNC_2(VAR_1, 0x0002, 0x0004, (VAR_0->CCRNA >> 8) & 0x1F, (VAR_0->SFCCMD >> 2) & 0x3);


      VAR_1 = FUNC_3(VAR_1, 0x0002);

      FUNC_7(VAR_1, "Special Color Calculation %d\r\n",(VAR_0->SFCCMD>>2)&0x03);
   }
   else

     *VAR_2 = 0;
}
