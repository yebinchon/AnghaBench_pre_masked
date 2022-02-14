
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct seeprom_config {int checksum; } ;



int
FUNC_0(struct seeprom_config *VAR_0)
{
 int VAR_1;
 int VAR_2;
 uint32_t VAR_3;
 uint16_t *VAR_4;

 VAR_2 = (sizeof(*VAR_0)/2) - 1;
 VAR_3 = 0;
 VAR_4 = (uint16_t *)VAR_0;

 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++)
  VAR_3 = VAR_3 + VAR_4[VAR_1];
 if (VAR_3 == 0
  || (VAR_3 & 0xFFFF) != VAR_0->checksum) {
  return (0);
 } else {
  return (1);
 }
}
