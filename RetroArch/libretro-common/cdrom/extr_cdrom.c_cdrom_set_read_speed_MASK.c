
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libretro_vfs_implementation_file ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ,unsigned char*,int,int ) ;

int FUNC_1(libretro_vfs_implementation_file *VAR_1, unsigned VAR_2)
{

   unsigned char VAR_3[] = {0xBB, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

   VAR_3[2] = (VAR_2 >> 24) & 0xFF;
   VAR_3[3] = (VAR_2 >> 16) & 0xFF;
   VAR_3[4] = (VAR_2 >> 8) & 0xFF;
   VAR_3[5] = VAR_2 & 0xFF;

   return FUNC_0(VAR_1, VAR_0, ((void*)0), 0, VAR_3, sizeof(VAR_3), 0);
}
