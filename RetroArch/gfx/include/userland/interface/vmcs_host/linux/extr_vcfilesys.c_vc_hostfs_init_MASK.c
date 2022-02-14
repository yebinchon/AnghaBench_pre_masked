
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int file_info_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,char*) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 () ;
 char* FUNC_7 (int ) ;

void FUNC_8(void)
{







   const char *VAR_5 = FUNC_7(FUNC_6());
   if (FUNC_4(VAR_5, "FILESYS") != 0 && FUNC_4(VAR_5, "HFilesys") != 0)
   {
      FUNC_3(VAR_4,"%s: vc_hostfs is deprecated. Please use stdio\n",
              FUNC_7(FUNC_6()));
   }

   FUNC_5("hostfs", &VAR_2);
   FUNC_0("init");

   VAR_3 = (file_info_t *)FUNC_2( VAR_0, sizeof( file_info_t ) );
   FUNC_1( VAR_3 != ((void*)0) );
   if (VAR_3)
   {
      VAR_1 = VAR_0;
   }
}
