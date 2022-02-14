
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

unsigned long long FUNC_2(volatile void *VAR_0, u64 VAR_1, u64 VAR_2)
{
 u64 VAR_3;
 unsigned long VAR_4;


 FUNC_1(VAR_4);
 VAR_3 = *(u64 *)VAR_0;
 if (VAR_3 == VAR_1)
  *(u64 *)VAR_0 = VAR_2;
 FUNC_0(VAR_4);
 return VAR_3;
}
