
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char**,char*) ;
 int VAR_1 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(int VAR_2, char *VAR_3[])
{
 int VAR_4, VAR_5;

 VAR_5 = 0;
 VAR_0 = 0;

 while ((VAR_4 = FUNC_1(VAR_2, VAR_3, "ef:d:")) > 0) {
  switch (VAR_4) {
   case 'f':
    FUNC_3(VAR_1);
    VAR_5 = 1;
    break;
   case 'd':
    FUNC_4(VAR_1);
    VAR_5 = 1;
    break;
   case 'e':
    VAR_0 = 1;
    break;
   default:
    FUNC_2("Usage: %s [-e] [-f <file_name.cs>] [-d <directory>]\n", VAR_3[0]);
    FUNC_0(-1);
  }
 }

 if (VAR_5 == 0) {
  FUNC_2("Usage: %s [-e] [-f <file_name.cs>] [-d <directory>]\n", VAR_3[0]);
  FUNC_0(-1);
 }

 return 0;
}
