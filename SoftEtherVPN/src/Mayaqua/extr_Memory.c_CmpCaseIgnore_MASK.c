
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef scalar_t__ UCHAR ;


 int FUNC_0 (char,char) ;
 char FUNC_1 (char) ;

int FUNC_2(void *VAR_0, void *VAR_1, UINT VAR_2)
{
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == 0)
 {
  return 0;
 }

 for (VAR_3 = 0;VAR_3 < VAR_2;VAR_3++)
 {
  char VAR_4 = (char)(*(((UCHAR *)VAR_0) + VAR_3));
  char VAR_5 = (char)(*(((UCHAR *)VAR_1) + VAR_3));

  VAR_4 = FUNC_1(VAR_4);
  VAR_5 = FUNC_1(VAR_5);

  if (VAR_4 != VAR_5)
  {
   return FUNC_0(VAR_4, VAR_5);
  }
 }

 return 0;
}
