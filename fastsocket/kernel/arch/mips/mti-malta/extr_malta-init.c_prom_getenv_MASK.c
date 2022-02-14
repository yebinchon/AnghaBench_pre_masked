
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

char *FUNC_3(char *VAR_0)
{






 int VAR_1, VAR_2=0;

 VAR_1 = FUNC_1(VAR_0);

 while (FUNC_0(VAR_2)) {
  if(FUNC_2(VAR_0, FUNC_0(VAR_2), VAR_1) == 0) {
   return(FUNC_0(VAR_2+1));
  }
  VAR_2 += 2;
 }

 return ((void*)0);
}
