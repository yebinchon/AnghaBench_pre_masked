
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int BUF ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;

bool FUNC_2(BUF *VAR_0, UINT VAR_1)
{

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_1 = FUNC_0(VAR_1);

 FUNC_1(VAR_0, &VAR_1, sizeof(UINT));
 return 1;
}
