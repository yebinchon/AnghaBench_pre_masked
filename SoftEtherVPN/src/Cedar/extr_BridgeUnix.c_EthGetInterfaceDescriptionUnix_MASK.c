
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int UINT ;
typedef int BUF ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,int,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int * FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int,char*) ;
 int FUNC_8 (char*) ;

bool FUNC_9(char *VAR_1, char *VAR_2, UINT VAR_3)
{
 char VAR_4[VAR_0];
 bool VAR_5 = 0;
 BUF *VAR_6;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_7(VAR_2, VAR_3, VAR_1);

 FUNC_1(VAR_4, sizeof(VAR_4), "/etc/sysconfig/networking/devices/ifcfg-%s", VAR_1);

 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6 != ((void*)0))
 {
  char *VAR_7 = FUNC_0(VAR_6);

  if (FUNC_4(VAR_7) == 0)
  {
   if (FUNC_6(VAR_7, "#"))
   {
    char VAR_8[VAR_0];

    FUNC_7(VAR_8, sizeof(VAR_8), VAR_7 + 1);

    FUNC_8(VAR_8);
    VAR_8[60] = 0;

    FUNC_7(VAR_2, VAR_3, VAR_8);

    VAR_5 = 1;
   }
  }

  FUNC_2(VAR_7);

  FUNC_3(VAR_6);
 }

 return VAR_5;
}
