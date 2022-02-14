
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libretro_vfs_implementation_file ;
typedef int cdb ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,unsigned char*,int,unsigned char*,int,int ) ;
 int FUNC_1 (char*,...) ;

void FUNC_2(libretro_vfs_implementation_file *VAR_1)
{
   unsigned char VAR_2[] = {0x46, 0x2, 0, 0x1, 0, 0, 0, 0, 0x14, 0};
   unsigned char VAR_3[20] = {0};
   unsigned VAR_4 = 0;
   int VAR_5 = FUNC_0(VAR_1, VAR_0, VAR_3, sizeof(VAR_3), VAR_2, sizeof(VAR_2), 0);
   int VAR_6;
   const char *VAR_7 = "Unknown";

   FUNC_1("[CDROM] get current config core status code %d\n", VAR_5);

   if (VAR_5)
      return;

   FUNC_1("[CDROM] Feature Header: ");

   for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
   {
      FUNC_1("%02X ", VAR_3[VAR_6]);
   }

   FUNC_1("\n");

   if (VAR_3[6] == 0 && VAR_3[7] == 8)
      FUNC_1("[CDROM] Current Profile: CD-ROM\n");
   else
      FUNC_1("[CDROM] Current Profile: %02X%02X\n", VAR_3[6], VAR_3[7]);

   FUNC_1("[CDROM] Core Feature Descriptor: ");

   for (VAR_6 = 0; VAR_6 < 12; VAR_6++)
   {
      FUNC_1("%02X ", VAR_3[8 + VAR_6]);
   }

   FUNC_1("\n");

   VAR_4 = VAR_3[8 + 4] << 24 | VAR_3[8 + 5] << 16 | VAR_3[8 + 6] << 8 | VAR_3[8 + 7];

   switch (VAR_4)
   {
      case 0:
         VAR_7 = "Unspecified";
         break;
      case 1:
         VAR_7 = "SCSI Family";
         break;
      case 2:
         VAR_7 = "ATAPI";
         break;
      case 7:
         VAR_7 = "Serial ATAPI";
         break;
      case 8:
         VAR_7 = "USB";
         break;
      default:
         break;
   }

   FUNC_1("[CDROM] Physical Interface Standard: %u (%s)\n", VAR_4, VAR_7);
}
