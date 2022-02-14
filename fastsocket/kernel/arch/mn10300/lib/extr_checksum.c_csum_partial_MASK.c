
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __wsum ;


 scalar_t__ FUNC_0 (void const*,int) ;

__wsum FUNC_1(const void *VAR_0, int VAR_1, __wsum VAR_2)
{
 __wsum VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 VAR_3 += VAR_2;
 if (VAR_2 > VAR_3)
  VAR_3++;
 return VAR_3;
}
