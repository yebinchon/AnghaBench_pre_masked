
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int ssize_t ;



__attribute__((used)) static ssize_t
FUNC_0(uint8_t **VAR_0)
{
 uint8_t *VAR_1 = *VAR_0;
 uint32_t VAR_2, VAR_3 = 0;

 VAR_2 = *VAR_1 & 0x7f;

 if (*VAR_1++ & 0x80) {
  if (VAR_2 > sizeof(uint32_t))
   return (-1);
  while (VAR_2--)
   VAR_3 = (VAR_3 << 8) + *VAR_1++;
 } else {
  VAR_3 = VAR_2;
 }
 *VAR_0 = VAR_1;
 return (VAR_3);
}
