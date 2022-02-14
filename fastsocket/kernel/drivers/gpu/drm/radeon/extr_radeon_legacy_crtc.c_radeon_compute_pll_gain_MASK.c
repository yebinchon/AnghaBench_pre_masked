
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint16_t ;



__attribute__((used)) static uint8_t FUNC_0(uint16_t VAR_0, uint16_t VAR_1,
           uint16_t VAR_2)
{
 unsigned int VAR_3;

 if (!VAR_1)
  return 1;

 VAR_3 = ((unsigned)VAR_0 * VAR_2) / VAR_1;





 if (VAR_3 >= 30000)



  return 7;
 else if (VAR_3 >= 18000)



  return 4;
 else



  return 1;
}
