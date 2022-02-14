
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lang ;
typedef int LIST ;
typedef int LANGLIST ;


 int * FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int VAR_0 ;
 int FUNC_3 () ;

LANGLIST *FUNC_4(LIST *VAR_1)
{
 LANGLIST *VAR_2 = ((void*)0);

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }




 if (1)
 {
  char VAR_3[VAR_0];

  if (FUNC_2("LANG", VAR_3, sizeof(VAR_3)))
  {
   VAR_2 = FUNC_0(VAR_1, VAR_3);
  }
  else
  {
   VAR_2 = FUNC_0(VAR_1, "C");
  }
 }


 return VAR_2;
}
