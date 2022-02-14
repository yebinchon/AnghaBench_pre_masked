
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int CHCTLB; int BGON; int RPMD; int KTCTL; int WCTLD; int MPOFR; int PNCR; int PLSZ; int MPABRA; int MPCDRA; int MPEFRA; int MPGHRA; int MPIJRA; int MPKLRA; int MPMNRA; int MPOPRA; int MPABRB; int MPCDRB; int MPEFRB; int MPGHRB; int MPIJRB; int MPKLRB; int MPMNRB; int MPOPRB; int CRAOFB; int SFPRMD; int PRIR; int CCRR; int SFCCMD; int WCTLC; int BMPNB; } ;


 char* FUNC_0 (char*,int,int ,int) ;
 char* FUNC_1 (char*,int) ;
 char* FUNC_2 (char*,int,int,int,int) ;
 char* FUNC_3 (char*,int) ;
 char* FUNC_4 (char*,int,int,int,int,int,int*) ;
 char* FUNC_5 (char*,int) ;
 char* FUNC_6 (char*,int) ;
 int FUNC_7 (char*,char*,...) ;
 char* FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (int,int*,int*,int*,int*) ;
 int FUNC_10 (int,int*,int*) ;
 TYPE_1__* VAR_0 ;

void FUNC_11(char *VAR_1, int *VAR_2)
{
   int VAR_3=((VAR_0->CHCTLB & 0x100) >> 8) + 1;
   u8 VAR_4[16];
   int VAR_5, VAR_6, VAR_7, VAR_8;

   if (VAR_0->BGON & 0x10)
   {

      int VAR_9=0;
      int VAR_10=0, VAR_11=0;

      *VAR_2 = 1;


      switch (VAR_0->RPMD & 0x3)
      {
         case 0:

            VAR_9 = 0;
            VAR_10 = VAR_0->KTCTL & 0x1;
            VAR_11 = (VAR_0->KTCTL >> 2) & 0x3;
            FUNC_7(VAR_1, "Using Parameter %C\r\n", 'A' + VAR_9);
            break;
         case 1:

            VAR_9 = 1;
            VAR_10 = VAR_0->KTCTL & 0x100;
            VAR_11 = (VAR_0->KTCTL >> 10) & 0x3;
            FUNC_7(VAR_1, "Using Parameter B\r\n");
            break;
         case 2:

            FUNC_7(VAR_1, "Parameter A/B switched via coefficients\r\n");
            break;
         case 3:

            FUNC_7(VAR_1, "Parameter A/B switched parameter window\r\n");
            if (VAR_0->WCTLD & 0x2)
            {
               FUNC_7(VAR_1, "Rotation Window 0 Enabled\r\n");
               FUNC_9(0, &VAR_5, &VAR_6, &VAR_7, &VAR_8);
               FUNC_7(VAR_1, "Horizontal start = %d\r\n", VAR_5);
               FUNC_7(VAR_1, "Vertical start = %d\r\n", VAR_6);
               FUNC_7(VAR_1, "Horizontal end = %d\r\n", VAR_7);
               FUNC_7(VAR_1, "Vertical end = %d\r\n", VAR_8);
            }
            else if (VAR_0->WCTLD & 0x4)
            {
               FUNC_7(VAR_1, "Rotation Window 1 Enabled\r\n");
               FUNC_9(1, &VAR_5, &VAR_6, &VAR_7, &VAR_8);
               FUNC_7(VAR_1, "Horizontal start = %d\r\n", VAR_5);
               FUNC_7(VAR_1, "Vertical start = %d\r\n", VAR_6);
               FUNC_7(VAR_1, "Horizontal end = %d\r\n", VAR_7);
               FUNC_7(VAR_1, "Vertical end = %d\r\n", VAR_8);
            }
            break;
      }

      if (VAR_10)
      {
         FUNC_7(VAR_1, "Coefficient Table Enabled(Mode %d)\r\n", VAR_11);
      }


      VAR_1 = FUNC_5(VAR_1, 0x10);


      VAR_1 = FUNC_1(VAR_1, (VAR_0->CHCTLB >> 12) & 0x7);


      if (VAR_0->CHCTLB & 0x200)
      {

         if (VAR_9 == 0)
         {

            VAR_1 = FUNC_0(VAR_1, (VAR_0->CHCTLB & 0x400) >> 10, VAR_0->BMPNB, VAR_0->MPOFR);
         }
         else
         {

            VAR_1 = FUNC_0(VAR_1, (VAR_0->CHCTLB & 0x400) >> 10, VAR_0->BMPNB, VAR_0->MPOFR >> 4);
         }
      }
      else
      {

         int VAR_12;
         u16 VAR_13=VAR_0->PNCR & 0x3FF;
         int VAR_14=0, VAR_15=0;

         if(VAR_0->PNCR & 0x8000)
            VAR_12 = 1;
         else
            VAR_12 = 2;

         FUNC_7(VAR_1, "Tile(%dH x %dV)\r\n", VAR_3, VAR_3);

         if (VAR_9 == 0)
         {

            FUNC_10((VAR_0->PLSZ & 0x300) >> 8, &VAR_14, &VAR_15);
         }
         else
         {

            FUNC_10((VAR_0->PLSZ & 0x3000) >> 8, &VAR_14, &VAR_15);
         }

         FUNC_7(VAR_1, "Plane Size = %dH x %dV\r\n", VAR_14, VAR_15);


         if (VAR_12 == 2)
         {
            FUNC_7(VAR_1, "Pattern Name data size = 2 words\r\n");
         }
         else
         {
            FUNC_7(VAR_1, "Pattern Name data size = 1 word\r\n");
            FUNC_7(VAR_1, "Character Number Supplement bit = %d\r\n", (VAR_13 >> 14) & 0x1);
            FUNC_7(VAR_1, "Special Priority bit = %d\r\n", (VAR_13 >> 9) & 0x1);
            FUNC_7(VAR_1, "Special Color Calculation bit = %d\r\n", (VAR_13 >> 8) & 0x1);
            FUNC_7(VAR_1, "Supplementary Palette number = %d\r\n", (VAR_13 >> 5) & 0x7);
            FUNC_7(VAR_1, "Supplementary Color number = %d\r\n", VAR_13 & 0x1f);
         }

         if (VAR_9 == 0)
         {

            VAR_4[0] = VAR_0->MPABRA & 0xFF;
            VAR_4[1] = VAR_0->MPABRA >> 8;
            VAR_4[2] = VAR_0->MPCDRA & 0xFF;
            VAR_4[3] = VAR_0->MPCDRA >> 8;
            VAR_4[4] = VAR_0->MPEFRA & 0xFF;
            VAR_4[5] = VAR_0->MPEFRA >> 8;
            VAR_4[6] = VAR_0->MPGHRA & 0xFF;
            VAR_4[7] = VAR_0->MPGHRA >> 8;
            VAR_4[8] = VAR_0->MPIJRA & 0xFF;
            VAR_4[9] = VAR_0->MPIJRA >> 8;
            VAR_4[10] = VAR_0->MPKLRA & 0xFF;
            VAR_4[11] = VAR_0->MPKLRA >> 8;
            VAR_4[12] = VAR_0->MPMNRA & 0xFF;
            VAR_4[13] = VAR_0->MPMNRA >> 8;
            VAR_4[14] = VAR_0->MPOPRA & 0xFF;
            VAR_4[15] = VAR_0->MPOPRA >> 8;
            VAR_1 = FUNC_4(VAR_1, VAR_3, VAR_0->PNCR, (VAR_0->PLSZ >> 8) & 0x3, (VAR_0->MPOFR & 0x7) << 6, 16, VAR_4);
         }
         else
         {

            VAR_4[0] = VAR_0->MPABRB & 0xFF;
            VAR_4[1] = VAR_0->MPABRB >> 8;
            VAR_4[2] = VAR_0->MPCDRB & 0xFF;
            VAR_4[3] = VAR_0->MPCDRB >> 8;
            VAR_4[4] = VAR_0->MPEFRB & 0xFF;
            VAR_4[5] = VAR_0->MPEFRB >> 8;
            VAR_4[6] = VAR_0->MPGHRB & 0xFF;
            VAR_4[7] = VAR_0->MPGHRB >> 8;
            VAR_4[8] = VAR_0->MPIJRB & 0xFF;
            VAR_4[9] = VAR_0->MPIJRB >> 8;
            VAR_4[10] = VAR_0->MPKLRB & 0xFF;
            VAR_4[11] = VAR_0->MPKLRB >> 8;
            VAR_4[12] = VAR_0->MPMNRB & 0xFF;
            VAR_4[13] = VAR_0->MPMNRB >> 8;
            VAR_4[14] = VAR_0->MPOPRB & 0xFF;
            VAR_4[15] = VAR_0->MPOPRB >> 8;
            VAR_1 = FUNC_4(VAR_1, VAR_3, VAR_0->PNCR, (VAR_0->PLSZ >> 12) & 0x3, (VAR_0->MPOFR & 0x70) << 2, 16, VAR_4);
         }
      }


      VAR_1 = FUNC_8(VAR_1, VAR_0->WCTLC, 0);




      FUNC_7(VAR_1, "Color Ram Address Offset = %X\r\n", (VAR_0->CRAOFB & 0x7) << 8);


      VAR_1 = FUNC_6(VAR_1, VAR_0->SFPRMD >> 8);






      FUNC_7(VAR_1, "Priority = %d\r\n", VAR_0->PRIR & 0x7);


      VAR_1 = FUNC_2(VAR_1, 0x0010, 0x0001, VAR_0->CCRR & 0x1F, (VAR_0->SFCCMD >> 8) & 0x3);


      VAR_1 = FUNC_3(VAR_1, 0x0010);

      FUNC_7(VAR_1, "Special Color Calculation %d\r\n",(VAR_0->SFCCMD>>8)&0x03);
   }
   else
   {

      *VAR_2 = 0;
   }
}
