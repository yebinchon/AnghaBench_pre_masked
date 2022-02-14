
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cp_response ;


 int FUNC_0 (char*,char*,int,int *) ;
 char* FUNC_1 (char*,int,char) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(void)
{
 char VAR_0[]="QUERY COMMAND RECORDING ";
 char VAR_1[80];
 char *VAR_2;
 int VAR_3,VAR_4;

 FUNC_0(VAR_0, VAR_1, sizeof(VAR_1), ((void*)0));
 VAR_3 = FUNC_3(VAR_1,sizeof(VAR_1));

 VAR_2=FUNC_1(VAR_1,VAR_3,'=');
 if (!VAR_2)
  return 0;
 VAR_2++;
 if (!FUNC_2("ANY",VAR_2,3))
  return 1;
 if (!FUNC_2("NONE",VAR_2,4))
  return 0;




        for (VAR_4=VAR_2-VAR_1; VAR_4<VAR_3; VAR_4++)
  if ( VAR_1[VAR_4]=='A' || VAR_1[VAR_4]=='B' )
   return 1;
 return 0;
}
