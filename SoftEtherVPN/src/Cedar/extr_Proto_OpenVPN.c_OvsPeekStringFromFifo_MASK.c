
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int FIFO ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (char*,scalar_t__,char*) ;

UINT FUNC_4(FIFO *VAR_0, char *VAR_1, UINT VAR_2)
{
 UINT VAR_3;
 bool VAR_4 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == 0)
 {
  return 0;
 }

 FUNC_3(VAR_1, VAR_2, "");

 for (VAR_3 = 0;VAR_3 < FUNC_2(VAR_2, FUNC_1(VAR_0));VAR_3++)
 {
  char VAR_5 = *(((char *)FUNC_0(VAR_0)) + VAR_3);

  if (VAR_5 != 0)
  {
   VAR_1[VAR_3] = VAR_5;
  }
  else
  {
   VAR_1[VAR_3] = 0;
   VAR_3++;
   VAR_4 = 1;
   break;
  }
 }

 if (VAR_4 == 0)
 {
  return 0;
 }

 return VAR_3;
}
