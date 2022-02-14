
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libretro_vfs_implementation_file ;
typedef int cdrom_path_bin ;
typedef int RFILE ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char const,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (char*,int ,int ) ;

bool FUNC_5(const char VAR_1)
{
   RFILE *VAR_2;
   char VAR_3[256] = {0};

   FUNC_0(VAR_3, sizeof(VAR_3), VAR_1, 1, 0);

   VAR_2 = FUNC_4(VAR_3, VAR_0, 0);

   if (VAR_2)
   {
      libretro_vfs_implementation_file *VAR_4 = FUNC_3(VAR_2);
      bool VAR_5 = 0;

      VAR_5 = FUNC_1(VAR_4);

      FUNC_2(VAR_2);

      return VAR_5;
   }

   return 0;
}
