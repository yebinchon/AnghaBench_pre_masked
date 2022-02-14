
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libretro_vfs_implementation_file ;
typedef int cdb ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,unsigned char*,int,unsigned char*,int,int ) ;
 int FUNC_1 (char*,unsigned short,unsigned char,unsigned char) ;

bool FUNC_2(libretro_vfs_implementation_file *VAR_1)
{

   unsigned char VAR_2[] = {0x43, 0x2, 0x4, 0, 0, 0, 0, 0x9, 0x30, 0};
   unsigned char VAR_3[32] = {0};
   unsigned short VAR_4 = 0;
   int VAR_5 = FUNC_0(VAR_1, VAR_0, VAR_3, sizeof(VAR_3), VAR_2, sizeof(VAR_2), 0);

   if (VAR_5)
     return 0;

   VAR_4 = VAR_3[0] << 8 | VAR_3[1];





   if (VAR_4 < 5)
      return 0;

   return 1;
}
