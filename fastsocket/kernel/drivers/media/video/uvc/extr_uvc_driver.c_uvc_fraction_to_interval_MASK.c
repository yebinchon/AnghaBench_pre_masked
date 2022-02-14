
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



uint32_t FUNC_0(uint32_t VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2;


 if (VAR_1 == 0 ||
     VAR_0/VAR_1 >= ((uint32_t)-1)/10000000)
  return (uint32_t)-1;





 VAR_2 = 10000000;
 while (VAR_0 > ((uint32_t)-1)/VAR_2) {
  VAR_2 /= 2;
  VAR_1 /= 2;
 }

 return VAR_1 ? VAR_0 * VAR_2 / VAR_1 : 0;
}
