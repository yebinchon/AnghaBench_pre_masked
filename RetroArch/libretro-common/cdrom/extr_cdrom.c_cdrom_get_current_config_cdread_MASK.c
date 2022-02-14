
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
   unsigned char VAR_2[] = {0x46, 0x2, 0, 0x1E, 0, 0, 0, 0, 0x10, 0};
   unsigned char VAR_3[0x10] = {0};
   int VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_3, sizeof(VAR_3), VAR_2, sizeof(VAR_2), 0);
   int VAR_5;

   FUNC_1("[CDROM] get current config cd read status code %d\n", VAR_4);

   if (VAR_4)
      return;

   FUNC_1("[CDROM] Feature Header: ");

   for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
   {
      FUNC_1("%02X ", VAR_3[VAR_5]);
   }

   FUNC_1("\n");

   FUNC_1("[CDROM] CD Read Feature Descriptor: ");

   for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
   {
      FUNC_1("%02X ", VAR_3[8 + VAR_5]);
   }

   if (VAR_3[8 + 2] & 1)
      FUNC_1("(current)\n");

   FUNC_1("[CDROM] Supported commands: READ CD, READ CD MSF, READ TOC/PMA/ATIP\n");
}
