
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static uint32_t FUNC_0(const void *VAR_0)
{
 const uint8_t *VAR_1 = VAR_0;

 return (uint32_t)VAR_1[0] + ((uint32_t)VAR_1[1] << 8) +
  ((uint32_t)VAR_1[2] << 16) + ((uint32_t)VAR_1[3] << 24);
}
