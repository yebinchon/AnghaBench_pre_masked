
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;

void FUNC_4(char *VAR_1, char *VAR_2, char *VAR_3)
{
 char *VAR_4, *VAR_5;


 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_0);

 while(VAR_4)
 {


  VAR_5 = FUNC_1(VAR_1, VAR_3, VAR_0);
  while(VAR_5)
  {
   if (VAR_5 <= VAR_4 && VAR_4 < VAR_5 + FUNC_3(VAR_3)) break;
   VAR_5 = FUNC_1(VAR_5+1, VAR_3, VAR_0);
  }
  if (!VAR_5)
  {
   FUNC_2(VAR_4 + FUNC_3(VAR_3), VAR_4+FUNC_3(VAR_2), FUNC_3(VAR_4+FUNC_3(VAR_2))+1);

   FUNC_0(VAR_4, VAR_3, FUNC_3(VAR_3));
  }

  VAR_4 = FUNC_1(VAR_4+FUNC_3(VAR_3), VAR_2, VAR_0);
 }
}
