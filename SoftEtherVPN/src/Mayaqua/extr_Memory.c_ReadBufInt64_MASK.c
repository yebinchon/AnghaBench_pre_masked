
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT64 ;
typedef int BUF ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;

UINT64 FUNC_2(BUF *VAR_0)
{
 UINT64 VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_1(VAR_0, &VAR_1, sizeof(UINT64)) != sizeof(UINT64))
 {
  return 0;
 }
 return FUNC_0(VAR_1);
}
