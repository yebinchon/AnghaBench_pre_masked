
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __wsum ;


 scalar_t__ FUNC_0 (void const*,int) ;

__wsum FUNC_1(const void *VAR_0, int VAR_1, __wsum VAR_2)
{





 VAR_2 = (VAR_2 & 0xffff) + (VAR_2 >> 16);

 VAR_2 += FUNC_0(VAR_0, VAR_1);

 VAR_2 = (VAR_2 & 0xffff) + (VAR_2 >> 16);

 return VAR_2;
}
