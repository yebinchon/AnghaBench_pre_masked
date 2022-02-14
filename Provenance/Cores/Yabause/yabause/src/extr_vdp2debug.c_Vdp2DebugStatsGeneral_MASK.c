
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int U; } ;
struct TYPE_5__ {int all; TYPE_1__ part; } ;
struct TYPE_6__ {int TVMD; int TVSTAT; int EXTEN; int BKTAU; int BKTAL; int SPCTL; int SDCTL; int WCTLC; int CRAOFB; int CCCTL; TYPE_2__ LCTA; int VCNT; int HCNT; int CCRSA; int PRISA; } ;


 char* FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*,...) ;
 char* FUNC_2 (char*,int,int) ;
 TYPE_3__* VAR_0 ;

void FUNC_3(char *VAR_1, int *VAR_2)
{
   u8 *VAR_3 = (u8 *)&VAR_0->PRISA;
   u8 *VAR_4 = (u8 *)&VAR_0->CCRSA;
   int VAR_5;

   if (VAR_0->TVMD & 0x8000)
   {

      FUNC_1(VAR_1, "Border Color Mode = %s\r\n", VAR_0->TVMD & 0x100 ? "Back screen" : "Black");

      FUNC_1(VAR_1, "Display Resolution = ");
      switch (VAR_0->TVMD & 0x7)
      {
         case 0:
         case 4:
            FUNC_1(VAR_1, "320");
            break;
         case 1:
         case 5:
            FUNC_1(VAR_1, "352");
            break;
         case 2:
         case 6:
            FUNC_1(VAR_1, "640");
            break;
         case 3:
         case 7:
            FUNC_1(VAR_1, "704");
            break;
         default:
            FUNC_1(VAR_1, "Invalid");
            break;
      }

      FUNC_1(VAR_1, " x ");

      switch ((VAR_0->TVMD >> 4) & 0x3)
      {
         case 0:
            FUNC_1(VAR_1, "224");
            break;
         case 1:
            FUNC_1(VAR_1, "240");
            break;
         case 2:
            FUNC_1(VAR_1, "256");
            break;
         default:
            FUNC_1(VAR_1, "Invalid");
            break;
      }

      if (VAR_0->TVSTAT & 0x1)
      {
         FUNC_1(VAR_1, "(PAL)\r\n");
      }
      else
      {
         FUNC_1(VAR_1, "(NTSC)\r\n");
      }

      FUNC_1(VAR_1, "Interlace Mode = ");
      switch ((VAR_0->TVMD >> 6) & 0x3)
      {
         case 0:
            FUNC_1(VAR_1, "Non-Interlace\r\n");
            break;
         case 2:
            FUNC_1(VAR_1, "Single-Density Interlace\r\n");
            break;
         case 3:
            FUNC_1(VAR_1, "Double-Density Interlace\r\n");
            break;
         default:
            FUNC_1(VAR_1, "Invalid\r\n");
            break;
      }


      FUNC_1(VAR_1, "Latches HV counter when %s\r\n", VAR_0->EXTEN & 0x200 ? "external signal triggers it" : "external latch flag is read");
      if (VAR_0->EXTEN & 0x100)
      {
         FUNC_1(VAR_1, "External Sync is being inputed\r\n");
      }


      if (VAR_0->TVSTAT & 0x200)
      {
         FUNC_1(VAR_1, "HV is latched\r\n");
      }

      if (VAR_0->TVSTAT & 0x4)
      {
         FUNC_1(VAR_1, "During H-Blank\r\n");
      }

      if (VAR_0->TVSTAT & 0x8)
      {
         FUNC_1(VAR_1, "During V-Blank\r\n");
      }

      if ((VAR_0->TVMD >> 6) & 0x2)
      {
         FUNC_1(VAR_1, "During %s Field\r\n", VAR_0->TVSTAT & 0x2 ? "Odd" : "Even");
      }

      FUNC_1(VAR_1, "H Counter = %d\r\n", VAR_0->HCNT);
      FUNC_1(VAR_1, "V Counter = %d\r\n", VAR_0->VCNT);
      FUNC_1(VAR_1, "\r\n");


      FUNC_1(VAR_1, "Line Color Screen Stuff\r\n");
      FUNC_1(VAR_1, "-----------------------\r\n");
      FUNC_1(VAR_1, "Mode = %s\r\n", VAR_0->LCTA.part.U & 0x8000 ? "Color per line" : "Single color");
      FUNC_1(VAR_1, "Address = %08lX\r\n", 0x05E00000UL | ((VAR_0->LCTA.all & 0x7FFFFUL) * 2));
      FUNC_1(VAR_1, "\r\n");


      FUNC_1(VAR_1, "Back Screen Stuff\r\n");
      FUNC_1(VAR_1, "-----------------\r\n");
      FUNC_1(VAR_1, "Mode = %s\r\n", VAR_0->BKTAU & 0x8000 ? "Color per line" : "Single color");
      FUNC_1(VAR_1, "Address = %08X\r\n", 0x05E00000 | (((VAR_0->BKTAU & 0x7) << 16) | VAR_0->BKTAL) * 2);
      VAR_1 = FUNC_0(VAR_1, 0x0020);
      FUNC_1(VAR_1, "\r\n");




      FUNC_1(VAR_1, "Sprite Stuff\r\n");
      FUNC_1(VAR_1, "------------\r\n");
      FUNC_1(VAR_1, "Sprite Type = %X\r\n", VAR_0->SPCTL & 0xF);
      FUNC_1(VAR_1, "VDP1 Framebuffer Data Format = %s\r\n", VAR_0->SPCTL & 0x20 ? "RGB and palette" : "Palette only");

      if (VAR_0->SDCTL & 0x100)
      {
         FUNC_1(VAR_1, "Transparent Shadow Enabled\r\n");
      }

      if (VAR_0->SPCTL & 0x20)
      {
         FUNC_1(VAR_1, "Sprite Window Enabled\r\n");
      }

      VAR_1 = FUNC_2(VAR_1, VAR_0->WCTLC >> 8, 1);

      FUNC_1(VAR_1, "Color RAM Offset = %X\r\n", (VAR_0->CRAOFB >> 4) & 0x7);

      if (VAR_0->CCCTL & 0x40)
      {
         FUNC_1(VAR_1, "Color Calculation Enabled\r\n");

         if (VAR_0->CCCTL & 0x8000 && (VAR_0->CCCTL & 0x0700) == 0)
         {
            FUNC_1(VAR_1, "Gradation Calculation Enabled\r\n");
         }
         else if (VAR_0->CCCTL & 0x0400)
         {
            FUNC_1(VAR_1, "Extended Color Calculation Enabled\r\n");
         }

         FUNC_1(VAR_1, "Color Calculation Condition = ");

         switch ((VAR_0->SPCTL >> 12) & 0x3)
         {
             case 0:
                FUNC_1(VAR_1, "Priority <= CC Condition Number");
                break;
             case 1:
                FUNC_1(VAR_1, "Priority == CC Condition Number");
                break;
             case 2:
                FUNC_1(VAR_1, "Priority >= CC Condition Number");
                break;
             case 3:
                FUNC_1(VAR_1, "Color Data MSB");
                break;
             default: break;
         }
         FUNC_1(VAR_1, "\r\n");

         if (((VAR_0->SPCTL >> 12) & 0x3) != 0x3)
         {
            FUNC_1(VAR_1, "Color Calculation Condition Number = %d\r\n", (VAR_0->SPCTL >> 8) & 0x7);
         }

         for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
         {



            int VAR_6 = VAR_4[VAR_5] & 0x7;

            FUNC_1(VAR_1, "Color Calculation Ratio %d = %d:%d\r\n", VAR_5, 31 - VAR_6, 1 + VAR_6);
         }
      }

      for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
      {



         int VAR_7 = VAR_3[VAR_5] & 0x7;

         FUNC_1(VAR_1, "Priority %d = %d\r\n", VAR_5, VAR_7);
      }

      VAR_1 = FUNC_0(VAR_1, 0x0040);
      *VAR_2 = 1;
   }
   else
   {
      *VAR_2 = 0;
   }
}
