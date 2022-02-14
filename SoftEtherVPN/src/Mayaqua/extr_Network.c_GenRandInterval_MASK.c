
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 () ;

UINT FUNC_3(UINT VAR_0, UINT VAR_1)
{
 UINT VAR_2, VAR_3;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 VAR_3 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2 == VAR_3)
 {
  return VAR_2;
 }

 return (FUNC_2() % (VAR_3 - VAR_2)) + VAR_2;
}
