
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef unsigned int loff_t ;


 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int,unsigned long,char*) ;

ssize_t FUNC_1(char *VAR_4, size_t VAR_5, loff_t *VAR_6)
{
 unsigned int VAR_7;
 unsigned long VAR_8;
 char *VAR_9 = VAR_4;

 if (*VAR_6 >= VAR_0)
  return -VAR_3;
 VAR_7 = *VAR_6;
 if (VAR_7 + VAR_5 > VAR_0)
  VAR_5 = VAR_0 - VAR_7;

 for (; VAR_5 != 0; VAR_5 -= VAR_8) {
  VAR_8 = VAR_5;
  if (VAR_8 > VAR_1)
   VAR_8 = VAR_1;
  if (FUNC_0(VAR_7, VAR_8, VAR_9))
   return -VAR_2;

  VAR_9 += VAR_8;
  VAR_7 += VAR_8;
 }
 *VAR_6 = VAR_7;
 return VAR_9 - VAR_4;
}
