
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char UCHAR ;
typedef int BUF ;


 int * FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int) ;

BUF *FUNC_3(char *VAR_0)
{
 BUF *VAR_1;
 UCHAR VAR_2, VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }
 if (FUNC_1(VAR_0) == 0 || FUNC_1(VAR_0) >= 128)
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_0();
 VAR_2 = 32;
 VAR_3 = 2 + (UCHAR)FUNC_1(VAR_0);
 FUNC_2(VAR_1, &VAR_2, 1);
 FUNC_2(VAR_1, &VAR_3, 1);
 FUNC_2(VAR_1, VAR_0, FUNC_1(VAR_0));

 return VAR_1;
}
