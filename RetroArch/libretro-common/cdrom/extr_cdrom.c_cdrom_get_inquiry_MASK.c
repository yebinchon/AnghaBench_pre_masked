
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libretro_vfs_implementation_file ;
typedef int cdb ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,unsigned char*,int,unsigned char*,int,int ) ;
 int FUNC_1 (char*,unsigned char*,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,char*,char*) ;

int FUNC_4(libretro_vfs_implementation_file *VAR_1, char *VAR_2, int VAR_3, bool *VAR_4)
{

   unsigned char VAR_5[] = {0x12, 0, 0, 0, 0xff, 0};
   unsigned char VAR_6[256] = {0};
   int VAR_7 = FUNC_0(VAR_1, VAR_0, VAR_6, sizeof(VAR_6), VAR_5, sizeof(VAR_5), 0);
   bool VAR_8 = 0;

   if (VAR_7)
      return 1;

   if (VAR_2 && VAR_3 >= 32)
   {
      FUNC_2(VAR_2, 0, VAR_3);


      FUNC_1(VAR_2, VAR_6 + 8, 8);

      VAR_2[8] = ' ';


      FUNC_1(VAR_2 + 9, VAR_6 + 16, 16);

      VAR_2[25] = ' ';


      FUNC_1(VAR_2 + 26, VAR_6 + 32, 4);
   }

   VAR_8 = (VAR_6[0] == 5);

   if (VAR_4 && VAR_8)
      *VAR_4 = 1;




   return 0;
}
