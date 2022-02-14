
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* eeprom_wb; } ;
struct TYPE_4__ {TYPE_1__ m; } ;


 int FUNC_0 (unsigned char) ;
 TYPE_2__ VAR_0 ;

void FUNC_1(unsigned int VAR_1, unsigned int VAR_2)
{
  unsigned char *VAR_3 = VAR_0.m.eeprom_wb;
  VAR_3[VAR_1 & 1] = VAR_2;
  FUNC_0((VAR_3[0] << 8) | VAR_3[1]);
}
