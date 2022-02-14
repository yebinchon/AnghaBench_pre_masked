
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libretro_vfs_implementation_file ;
typedef int cdb ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,unsigned char*,size_t,unsigned char*,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_1 ;

int FUNC_3(libretro_vfs_implementation_file *VAR_2, unsigned char *VAR_3, size_t VAR_4)
{

   unsigned char VAR_5[] = {0x43, 0x2, 0x2, 0, 0, 0, 0x1, 0x9, 0x30, 0};






   int VAR_6;

   if (!VAR_3)
      return 1;

   VAR_6 = FUNC_0(VAR_2, VAR_0, VAR_3, VAR_4, VAR_5, sizeof(VAR_5), 0);

   if (VAR_6)
     return 1;
   return 0;
}
