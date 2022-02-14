
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int eeprom_status; } ;
struct TYPE_6__ {TYPE_1__ m; } ;
struct TYPE_5__ {unsigned int eeprom_bit_cl; unsigned int eeprom_bit_in; } ;


 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_0(unsigned int VAR_2)
{
  unsigned int VAR_3, VAR_4 = VAR_0.m.eeprom_status;

  VAR_4 &= ~0xc0;


  VAR_3 = (VAR_2 >> VAR_1.eeprom_bit_cl) & 1;
  VAR_4 |= VAR_3 << 7;


  VAR_3 = (VAR_2 >> VAR_1.eeprom_bit_in) & 1;
  VAR_4 |= VAR_3 << 6;

  VAR_0.m.eeprom_status = (unsigned char) VAR_4;
}
