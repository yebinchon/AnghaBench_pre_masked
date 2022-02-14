
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BUF ;


 int * FUNC_0 () ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,int ) ;

BUF *FUNC_5(char *VAR_0)
{
 BUF *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return FUNC_0();
 }

 if (FUNC_1(VAR_0, "0x") == 0)
 {

  VAR_1 = FUNC_0();
  FUNC_4(VAR_1, VAR_0, FUNC_2(VAR_0));
 }
 else
 {

  VAR_1 = FUNC_3(VAR_0 + 2);
 }

 return VAR_1;
}
