
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



__attribute__((used)) static u64 FUNC_0(u64 VAR_0, u64 VAR_1, u64 VAR_2)
{
 u64 VAR_3 = VAR_2 & VAR_1;
 if (!VAR_3)
  return 0;



 VAR_3 = (VAR_3 & ~(VAR_3-1)) - 1;



 if (VAR_0 == VAR_1 && ((VAR_0 | VAR_3) & VAR_2) != VAR_2)
  return 0;

 return VAR_3;
}
