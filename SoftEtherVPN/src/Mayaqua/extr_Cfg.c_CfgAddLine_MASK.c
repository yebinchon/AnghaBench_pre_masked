
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int BUF ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int) ;

void FUNC_2(BUF *VAR_0, char *VAR_1, UINT VAR_2)
{
 UINT VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 for (VAR_3 = 0;VAR_3 < VAR_2;VAR_3++)
 {
  FUNC_1(VAR_0, "\t", 1);
 }
 FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_1));
 FUNC_1(VAR_0, "\r\n", 2);
}
