
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

unsigned int FUNC_0(int VAR_1)
{
 int VAR_2;
 unsigned int VAR_3 = 0;

 if (VAR_1 == VAR_0) {
  VAR_3 = 1;
 } else if (VAR_1 >= 9900 && VAR_1 <= 9905) {
  VAR_2 = VAR_1 - 9900;
  for (VAR_3 = 1; VAR_2 > 0; VAR_2--)
   VAR_3 *= 10;
 }

 return VAR_3;
}
