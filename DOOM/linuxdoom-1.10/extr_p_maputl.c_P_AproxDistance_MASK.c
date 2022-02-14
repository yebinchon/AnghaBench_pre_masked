
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fixed_t ;


 int FUNC_0 (int) ;

fixed_t
FUNC_1
( fixed_t VAR_0,
  fixed_t VAR_1 )
{
    VAR_0 = FUNC_0(VAR_0);
    VAR_1 = FUNC_0(VAR_1);
    if (VAR_0 < VAR_1)
 return VAR_0+VAR_1-(VAR_0>>1);
    return VAR_0+VAR_1-(VAR_1>>1);
}
