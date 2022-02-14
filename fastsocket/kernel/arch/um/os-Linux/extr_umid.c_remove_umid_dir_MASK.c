
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char) ;
 char FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*,int ) ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_1 ;
 char* VAR_2 ;

__attribute__((used)) static void FUNC_4(void)
{
 char VAR_3[FUNC_3(VAR_2) + VAR_0 + 1], VAR_4;

 FUNC_2(VAR_3, "%s%s", VAR_2, VAR_1);
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  FUNC_0("remove_umid_dir - remove_files_and_dir failed with "
         "err = %d\n", VAR_4);
}
