
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CMDCTRL; int CMDSIZE; int CMDPMOD; int CMDCOLR; scalar_t__ CMDGRDA; scalar_t__ CMDSRCA; int CMDYA; int CMDXA; int CMDYC; int CMDXC; int CMDYD; int CMDXD; int CMDYB; int CMDXB; } ;
typedef TYPE_1__ vdp1cmd_struct ;
typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int,int ) ;

void FUNC_4(u32 VAR_1, char *VAR_2)
{
   u16 VAR_3;
   vdp1cmd_struct VAR_4;
   u32 VAR_5;

   if ((VAR_5 = FUNC_2(VAR_1)) == 0xFFFFFFFF)
      return;

   VAR_3 = FUNC_1(VAR_0, VAR_5);

   if (VAR_3 & 0x8000)
   {

      VAR_2[0] = 0x00;
      return;
   }

   if (VAR_3 & 0x4000)
   {
      FUNC_0(VAR_2, "Command is skipped\r\n");
      return;
   }

   FUNC_3(&VAR_4, VAR_5, VAR_0);

   switch (VAR_4.CMDCTRL & 0x000F)
   {
      case 0:
         FUNC_0(VAR_2, "Normal Sprite\r\n");
         FUNC_0(VAR_2, "x = %d, y = %d\r\n", VAR_4.CMDXA, VAR_4.CMDYA);
         break;
      case 1:
         FUNC_0(VAR_2, "Scaled Sprite\r\n");

         FUNC_0(VAR_2, "Zoom Point: ");

         switch ((VAR_4.CMDCTRL >> 8) & 0xF)
         {
            case 0x0:
               FUNC_0(VAR_2, "Only two coordinates\r\n");
               break;
            case 0x5:
               FUNC_0(VAR_2, "Upper-left\r\n");
               break;
            case 0x6:
               FUNC_0(VAR_2, "Upper-center\r\n");
               break;
            case 0x7:
               FUNC_0(VAR_2, "Upper-right\r\n");
               break;
            case 0x9:
               FUNC_0(VAR_2, "Center-left\r\n");
               break;
            case 0xA:
               FUNC_0(VAR_2, "Center-center\r\n");
               break;
            case 0xB:
               FUNC_0(VAR_2, "Center-right\r\n");
               break;
            case 0xC:
               FUNC_0(VAR_2, "Lower-left\r\n");
               break;
            case 0xE:
               FUNC_0(VAR_2, "Lower-center\r\n");
               break;
            case 0xF:
               FUNC_0(VAR_2, "Lower-right\r\n");
               break;
            default: break;
         }

         if (((VAR_4.CMDCTRL >> 8) & 0xF) == 0)
         {
            FUNC_0(VAR_2, "xa = %d, ya = %d, xc = %d, yc = %d\r\n", VAR_4.CMDXA, VAR_4.CMDYA, VAR_4.CMDXC, VAR_4.CMDYC);
         }
         else
         {
            FUNC_0(VAR_2, "xa = %d, ya = %d, xb = %d, yb = %d\r\n", VAR_4.CMDXA, VAR_4.CMDYA, VAR_4.CMDXB, VAR_4.CMDYB);
         }

         break;
      case 2:
         FUNC_0(VAR_2, "Distorted Sprite\r\n");
         FUNC_0(VAR_2, "x1 = %d, y1 = %d, x2 = %d, y2 = %d\r\n", VAR_4.CMDXA, VAR_4.CMDYA, VAR_4.CMDXB, VAR_4.CMDYB);
         FUNC_0(VAR_2, "x3 = %d, y3 = %d, x4 = %d, y4 = %d\r\n", VAR_4.CMDXC, VAR_4.CMDYC, VAR_4.CMDXD, VAR_4.CMDYD);
         break;
      case 3:
         FUNC_0(VAR_2, "Distorted Sprite *\r\n");
         FUNC_0(VAR_2, "x1 = %d, y1 = %d, x2 = %d, y2 = %d\r\n", VAR_4.CMDXA, VAR_4.CMDYA, VAR_4.CMDXB, VAR_4.CMDYB);
         FUNC_0(VAR_2, "x3 = %d, y3 = %d, x4 = %d, y4 = %d\r\n", VAR_4.CMDXC, VAR_4.CMDYC, VAR_4.CMDXD, VAR_4.CMDYD);
         break;
      case 4:
         FUNC_0(VAR_2, "Polygon\r\n");
         FUNC_0(VAR_2, "x1 = %d, y1 = %d, x2 = %d, y2 = %d\r\n", VAR_4.CMDXA, VAR_4.CMDYA, VAR_4.CMDXB, VAR_4.CMDYB);
         FUNC_0(VAR_2, "x3 = %d, y3 = %d, x4 = %d, y4 = %d\r\n", VAR_4.CMDXC, VAR_4.CMDYC, VAR_4.CMDXD, VAR_4.CMDYD);
         break;
      case 5:
         FUNC_0(VAR_2, "Polyline\r\n");
         FUNC_0(VAR_2, "x1 = %d, y1 = %d, x2 = %d, y2 = %d\r\n", VAR_4.CMDXA, VAR_4.CMDYA, VAR_4.CMDXB, VAR_4.CMDYB);
         FUNC_0(VAR_2, "x3 = %d, y3 = %d, x4 = %d, y4 = %d\r\n", VAR_4.CMDXC, VAR_4.CMDYC, VAR_4.CMDXD, VAR_4.CMDYD);
         break;
      case 6:
         FUNC_0(VAR_2, "Line\r\n");
         FUNC_0(VAR_2, "x1 = %d, y1 = %d, x2 = %d, y2 = %d\r\n", VAR_4.CMDXA, VAR_4.CMDYA, VAR_4.CMDXB, VAR_4.CMDYB);
         break;
      case 7:
         FUNC_0(VAR_2, "Polyline *\r\n");
         FUNC_0(VAR_2, "x1 = %d, y1 = %d, x2 = %d, y2 = %d\r\n", VAR_4.CMDXA, VAR_4.CMDYA, VAR_4.CMDXB, VAR_4.CMDYB);
         FUNC_0(VAR_2, "x3 = %d, y3 = %d, x4 = %d, y4 = %d\r\n", VAR_4.CMDXC, VAR_4.CMDYC, VAR_4.CMDXD, VAR_4.CMDYD);
         break;
      case 8:
         FUNC_0(VAR_2, "User Clipping\r\n");
         FUNC_0(VAR_2, "x1 = %d, y1 = %d, x2 = %d, y2 = %d\r\n", VAR_4.CMDXA, VAR_4.CMDYA, VAR_4.CMDXC, VAR_4.CMDYC);
         break;
      case 9:
         FUNC_0(VAR_2, "System Clipping\r\n");
         FUNC_0(VAR_2, "x1 = 0, y1 = 0, x2 = %d, y2 = %d\r\n", VAR_4.CMDXC, VAR_4.CMDYC);
         break;
      case 10:
         FUNC_0(VAR_2, "Local Coordinates\r\n");
         FUNC_0(VAR_2, "x = %d, y = %d\r\n", VAR_4.CMDXA, VAR_4.CMDYA);
         break;
      default:
         FUNC_0(VAR_2, "Invalid command\r\n");
         return;
   }


   if (!(VAR_4.CMDCTRL & 0x000C))
   {
      FUNC_0(VAR_2, "Texture address = %08X\r\n", ((unsigned int)VAR_4.CMDSRCA) << 3);
      FUNC_0(VAR_2, "Texture width = %d, height = %d\r\n", (VAR_4.CMDSIZE & 0x3F00) >> 5, VAR_4.CMDSIZE & 0xFF);
      FUNC_0(VAR_2, "Texture read direction: ");

      switch ((VAR_4.CMDCTRL >> 4) & 0x3)
      {
         case 0:
            FUNC_0(VAR_2, "Normal\r\n");
            break;
         case 1:
            FUNC_0(VAR_2, "Reversed horizontal\r\n");
            break;
         case 2:
            FUNC_0(VAR_2, "Reversed vertical\r\n");
            break;
         case 3:
            FUNC_0(VAR_2, "Reversed horizontal and vertical\r\n");
            break;
         default: break;
      }
   }


   if (!(VAR_4.CMDCTRL & 0x0008))
   {
      if (VAR_4.CMDPMOD & 0x8000)
      {
         FUNC_0(VAR_2, "MSB set\r\n");
      }

      if (VAR_4.CMDPMOD & 0x1000)
      {
         FUNC_0(VAR_2, "High Speed Shrink Enabled\r\n");
      }

      if (!(VAR_4.CMDPMOD & 0x0800))
      {
         FUNC_0(VAR_2, "Pre-clipping Enabled\r\n");
      }

      if (VAR_4.CMDPMOD & 0x0400)
      {
         FUNC_0(VAR_2, "User Clipping Enabled\r\n");
         FUNC_0(VAR_2, "Clipping Mode = %d\r\n", (VAR_4.CMDPMOD >> 9) & 0x1);
      }

      if (VAR_4.CMDPMOD & 0x0100)
      {
         FUNC_0(VAR_2, "Mesh Enabled\r\n");
      }

      if (!(VAR_4.CMDPMOD & 0x0080))
      {
         FUNC_0(VAR_2, "End Code Enabled\r\n");
      }

      if (!(VAR_4.CMDPMOD & 0x0040))
      {
         FUNC_0(VAR_2, "Transparent Pixel Enabled\r\n");
      }

      FUNC_0(VAR_2, "Color mode: ");

      switch ((VAR_4.CMDPMOD >> 3) & 0x7)
      {
         case 0:
            FUNC_0(VAR_2, "4 BPP(16 color bank)\r\n");
            FUNC_0(VAR_2, "Color bank: %08X\r\n", (VAR_4.CMDCOLR << 3));
            break;
         case 1:
            FUNC_0(VAR_2, "4 BPP(16 color LUT)\r\n");
            FUNC_0(VAR_2, "Color lookup table: %08X\r\n", (VAR_4.CMDCOLR << 3));
            break;
         case 2:
            FUNC_0(VAR_2, "8 BPP(64 color bank)\r\n");
            FUNC_0(VAR_2, "Color bank: %08X\r\n", (VAR_4.CMDCOLR << 3));
            break;
         case 3:
            FUNC_0(VAR_2, "8 BPP(128 color bank)\r\n");
            FUNC_0(VAR_2, "Color bank: %08X\r\n", (VAR_4.CMDCOLR << 3));
            break;
         case 4:
            FUNC_0(VAR_2, "8 BPP(256 color bank)\r\n");
            FUNC_0(VAR_2, "Color bank: %08X\r\n", (VAR_4.CMDCOLR << 3));
            break;
         case 5:
            FUNC_0(VAR_2, "15 BPP(RGB)\r\n");


            if (VAR_4.CMDCTRL & 0x0004)
            {
               FUNC_0(VAR_2, "Non-textured color: %04X\r\n", VAR_4.CMDCOLR);
            }
            break;
         default: break;
      }

      FUNC_0(VAR_2, "Color Calc. mode: ");

      switch (VAR_4.CMDPMOD & 0x7)
      {
         case 0:
            FUNC_0(VAR_2, "Replace\r\n");
            break;
         case 1:
            FUNC_0(VAR_2, "Cannot overwrite/Shadow\r\n");
            break;
         case 2:
            FUNC_0(VAR_2, "Half-luminance\r\n");
            break;
         case 3:
            FUNC_0(VAR_2, "Replace/Half-transparent\r\n");
            break;
         case 4:
            FUNC_0(VAR_2, "Gouraud Shading\r\n");
            FUNC_0(VAR_2, "Gouraud Shading Table = %08X\r\n", ((unsigned int)VAR_4.CMDGRDA) << 3);
            break;
         case 6:
            FUNC_0(VAR_2, "Gouraud Shading + Half-luminance\r\n");
            FUNC_0(VAR_2, "Gouraud Shading Table = %08X\r\n", ((unsigned int)VAR_4.CMDGRDA) << 3);
            break;
         case 7:
            FUNC_0(VAR_2, "Gouraud Shading/Gouraud Shading + Half-transparent\r\n");
            FUNC_0(VAR_2, "Gouraud Shading Table = %08X\r\n", ((unsigned int)VAR_4.CMDGRDA) << 3);
            break;
         default: break;
      }
   }
}
