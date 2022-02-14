
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static uint8_t FUNC_0(char VAR_0)
{
 if (VAR_0 >= '0' && VAR_0 <= '9') {
  return (uint8_t)(VAR_0 - '0');
 }

 if (VAR_0 >= 'a' && VAR_0 <= 'f') {
  return (uint8_t)(10 + VAR_0 - 'a');
 }


 return (uint8_t)(10 + VAR_0 - 'A');
}
