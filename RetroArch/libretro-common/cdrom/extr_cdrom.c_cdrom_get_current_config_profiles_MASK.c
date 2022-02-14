
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libretro_vfs_implementation_file ;
typedef int cdb ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,unsigned char*,int,unsigned char*,int,int ) ;
 char* FUNC_1 (unsigned short) ;
 int FUNC_2 (char*,...) ;

void FUNC_3(libretro_vfs_implementation_file *VAR_1)
{
   unsigned char VAR_2[] = {0x46, 0x2, 0, 0x0, 0, 0, 0, 0xFF, 0xFA, 0};
   unsigned char VAR_3[0xFFFA] = {0};
   int VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_3, sizeof(VAR_3), VAR_2, sizeof(VAR_2), 0);
   int VAR_5;

   FUNC_2("[CDROM] get current config profiles status code %d\n", VAR_4);

   if (VAR_4)
      return;

   FUNC_2("[CDROM] Feature Header: ");

   for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
   {
      FUNC_2("%02X ", VAR_3[VAR_5]);
   }

   FUNC_2("\n");

   FUNC_2("[CDROM] Profile List Descriptor: ");

   for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
   {
      FUNC_2("%02X ", VAR_3[8 + VAR_5]);
   }

   FUNC_2("\n");

   FUNC_2("[CDROM] Number of profiles: %u\n", VAR_3[8 + 3] / 4);

   for (VAR_5 = 0; VAR_5 < VAR_3[8 + 3] / 4; VAR_5++)
   {
      unsigned short VAR_6 = (VAR_3[8 + (4 * (VAR_5 + 1))] << 8) | VAR_3[8 + (4 * (VAR_5 + 1)) + 1];

      FUNC_2("[CDROM] Profile Number: %04X (%s) ", VAR_6, FUNC_1(VAR_6));

      if (VAR_3[8 + (4 * (VAR_5 + 1)) + 2] & 1)
         FUNC_2("(current)\n");
      else
         FUNC_2("\n");
   }
}
