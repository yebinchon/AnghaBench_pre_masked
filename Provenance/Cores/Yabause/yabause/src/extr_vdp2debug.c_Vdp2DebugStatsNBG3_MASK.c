
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int BGON; int PNCN3; int CHCTLB; int PLSZ; int MPABN3; int MPCDN3; int MPOFN; int SCXN3; int SCYN3; int WCTLB; int CRAOFA; int SFPRMD; int PRINB; int CCRNB; int SFCCMD; } ;


 char* FUNC_0 (char*,int) ;
 char* FUNC_1 (char*,int,int,int,int) ;
 char* FUNC_2 (char*,int) ;
 char* FUNC_3 (char*,int,int,int,int,int,int*) ;
 char* FUNC_4 (char*,int) ;
 char* FUNC_5 (char*,int) ;
 int FUNC_6 (char*,char*,...) ;
 char* FUNC_7 (char*,int,int ) ;
 int FUNC_8 (int,int*,int*) ;
 TYPE_1__* VAR_0 ;

void FUNC_9(char *VAR_1, int *VAR_2)
{
   u8 VAR_3[4];

   if (VAR_0->BGON & 0x8)
   {
      int VAR_4;
      u16 VAR_5=VAR_0->PNCN3 & 0x3FF;
      int VAR_6=0, VAR_7=0;
      int VAR_8=((VAR_0->CHCTLB & 0x10) >> 4) + 1;


      *VAR_2 = 1;


      VAR_1 = FUNC_4(VAR_1, 0x8);


      VAR_1 = FUNC_0(VAR_1, (VAR_0->CHCTLB & 0x20) >> 5);

      if(VAR_0->PNCN3 & 0x8000)
         VAR_4 = 1;
      else
         VAR_4 = 2;

      FUNC_6(VAR_1, "Tile(%dH x %dV)\r\n", VAR_8, VAR_8);

      FUNC_8((VAR_0->PLSZ & 0xC0) >> 6, &VAR_6, &VAR_7);
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

      VAR_3[0] = VAR_0->MPABN3 & 0xFF;
      VAR_3[1] = VAR_0->MPABN3 >> 8;
      VAR_3[2] = VAR_0->MPCDN3 & 0xFF;
      VAR_3[3] = VAR_0->MPCDN3 >> 8;
      VAR_1 = FUNC_3(VAR_1, VAR_8, VAR_0->PNCN3, (VAR_0->PLSZ & 0xC0) >> 6, (VAR_0->MPOFN & 0x7000) >> 6, 4, VAR_3);
      FUNC_6(VAR_1, "Screen Scroll x = %d, y = %d\r\n", - ((VAR_0->SCXN3 & 0x7FF) % 512), - ((VAR_0->SCYN3 & 0x7FF) % 512));


      VAR_1 = FUNC_7(VAR_1, VAR_0->WCTLB >> 8, 0);




      FUNC_6(VAR_1, "Color Ram Address Offset = %X\r\n", VAR_0->CRAOFA & 0x7000);


      VAR_1 = FUNC_5(VAR_1, VAR_0->SFPRMD >> 6);




      FUNC_6(VAR_1, "Priority = %d\r\n", (VAR_0->PRINB >> 8) & 0x7);


      VAR_1 = FUNC_1(VAR_1, 0x0008, 0x0006, (VAR_0->CCRNB >> 8) & 0x1F, (VAR_0->SFCCMD >> 6) & 0x3);


      VAR_1 = FUNC_2(VAR_1, 0x0008);

      FUNC_6(VAR_1, "Special Color Calculation %d\r\n",(VAR_0->SFCCMD>>6)&0x03);
   }
   else
   {

      *VAR_2 = 0;
   }
}
