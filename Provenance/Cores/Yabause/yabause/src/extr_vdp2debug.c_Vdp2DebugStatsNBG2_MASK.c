
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int BGON; int PNCN2; int CHCTLB; int PLSZ; int MPABN2; int MPCDN2; int MPOFN; int SCXN2; int SCYN2; int CRAOFA; int SFPRMD; int PRINB; int CCRNB; int SFCCMD; int WCTLB; } ;


 char* FUNC_0 (char*,int) ;
 char* FUNC_1 (char*,int,int,int,int) ;
 char* FUNC_2 (char*,int) ;
 char* FUNC_3 (char*,int,int,int,int,int,int*) ;
 char* FUNC_4 (char*,int) ;
 char* FUNC_5 (char*,int) ;
 int FUNC_6 (char*,char*,...) ;
 char* FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (int,int*,int*) ;
 TYPE_1__* VAR_0 ;

void FUNC_9(char *VAR_1, int *VAR_2)
{
   u8 VAR_3[4];

   if (VAR_0->BGON & 0x4)
   {
      int VAR_4;
      u16 VAR_5=VAR_0->PNCN2 & 0x3FF;
      int VAR_6=0, VAR_7=0;
      int VAR_8=(VAR_0->CHCTLB & 0x1) + 1;


      *VAR_2 = 1;


      VAR_1 = FUNC_4(VAR_1, 0x4);


      VAR_1 = FUNC_0(VAR_1, (VAR_0->CHCTLB & 0x2) >> 1);

      if(VAR_0->PNCN2 & 0x8000)
         VAR_4 = 1;
      else
         VAR_4 = 2;

      FUNC_6(VAR_1, "Tile(%dH x %dV)\r\n", VAR_8, VAR_8);

      FUNC_8((VAR_0->PLSZ & 0x30) >> 4, &VAR_6, &VAR_7);
      FUNC_6(VAR_1, "Plane Size = %dH x %dV\r\n", VAR_6, VAR_7);


      if (VAR_4 == 2)
      {
         FUNC_6(VAR_1, "Pattern Name data size = 2 words\r\n");
      }
      else
      {
         FUNC_6(VAR_1, "Pattern Name data size = 1 word\r\n");
         FUNC_6(VAR_1, "Character Number Supplement bit = %d\r\n", (VAR_5 >> 14) & 0x1);
         FUNC_6(VAR_1, "Special Priority bit = %d\r\n", (VAR_5 >> 9) & 0x1);
         FUNC_6(VAR_1, "Special Color Calculation bit = %d\r\n", (VAR_5 >> 8) & 0x1);
         FUNC_6(VAR_1, "Supplementary Palette number = %d\r\n", (VAR_5 >> 5) & 0x7);
         FUNC_6(VAR_1, "Supplementary Color number = %d\r\n", VAR_5 & 0x1f);
      }

      VAR_3[0] = VAR_0->MPABN2 & 0xFF;
      VAR_3[1] = VAR_0->MPABN2 >> 8;
      VAR_3[2] = VAR_0->MPCDN2 & 0xFF;
      VAR_3[3] = VAR_0->MPCDN2 >> 8;
      VAR_1 = FUNC_3(VAR_1, VAR_8, VAR_0->PNCN2, (VAR_0->PLSZ >> 4) & 0x3, (VAR_0->MPOFN & 0x700) >> 2, 4, VAR_3);
      FUNC_6(VAR_1, "Screen Scroll x = %d, y = %d\r\n", - ((VAR_0->SCXN2 & 0x7FF) % 512), - ((VAR_0->SCYN2 & 0x7FF) % 512));


      VAR_1 = FUNC_7(VAR_1, VAR_0->WCTLB, 0);




      FUNC_6(VAR_1, "Color Ram Address Offset = %X\r\n", VAR_0->CRAOFA & 0x700);


      VAR_1 = FUNC_5(VAR_1, VAR_0->SFPRMD >> 4);






      FUNC_6(VAR_1, "Priority = %d\r\n", VAR_0->PRINB & 0x7);


      VAR_1 = FUNC_1(VAR_1, 0x0004, 0x0005, VAR_0->CCRNB & 0x1F, (VAR_0->SFCCMD >> 4) & 0x3);


      VAR_1 = FUNC_2(VAR_1, 0x0004);

      FUNC_6(VAR_1, "Special Color Calculation %d\r\n",(VAR_0->SFCCMD>>4)&0x03);
   }
   else
   {

     *VAR_2 = 0;
   }
}
