
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef size_t loff_t ;


 size_t VAR_0 ;
 int FUNC_0 (void*,void const*,size_t) ;

ssize_t FUNC_1(void *VAR_1, size_t VAR_2, loff_t *VAR_3,
    const void *VAR_4, size_t VAR_5)
{
 loff_t VAR_6 = *VAR_3;

 if (VAR_6 < 0)
  return -VAR_0;
 if (VAR_6 >= VAR_5)
  return 0;
 if (VAR_2 > VAR_5 - VAR_6)
  VAR_2 = VAR_5 - VAR_6;
 FUNC_0(VAR_1, VAR_4 + VAR_6, VAR_2);
 *VAR_3 = VAR_6 + VAR_2;

 return VAR_2;
}
