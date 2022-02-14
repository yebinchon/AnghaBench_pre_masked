
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
   unsigned char VAR_2[] = {0x46, 0x2, 0, 0x1D, 0, 0, 0, 0, 0xC, 0};
   unsigned char VAR_3[0xC] = {0};
   int VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_3, sizeof(VAR_3), VAR_2, sizeof(VAR_2), 0);
   int VAR_5;

   FUNC_1("[CDROM] get current config multi-read status code %d\n", VAR_4);

   if (VAR_4)
      return;

   FUNC_1("[CDROM] Feature Header: ");

   for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
   {
      FUNC_1("%02X ", VAR_3[VAR_5]);
   }

   FUNC_1("\n");

   FUNC_1("[CDROM] Multi-Read Feature Descriptor: ");

   for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
   {
      FUNC_1("%02X ", VAR_3[8 + VAR_5]);
   }

   FUNC_1("\n");

   FUNC_1("[CDROM] Supported commands: READ (10), READ CD, READ DISC INFORMATION, READ TRACK INFORMATION\n");
}
