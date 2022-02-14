
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (void*,char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

void FUNC_5(void *VAR_1)
{
 char VAR_2[VAR_0];
 char *VAR_3;


 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_2, sizeof(VAR_2));


 for(VAR_3=VAR_2; *VAR_3; VAR_3++)
  if(*VAR_3 == '.')
   *VAR_3 = 0;

 FUNC_4(VAR_2);
 FUNC_3(VAR_2);

 FUNC_1(VAR_1, VAR_2, FUNC_2(VAR_2));
}
