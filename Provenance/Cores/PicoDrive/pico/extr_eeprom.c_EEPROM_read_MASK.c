
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int eeprom_status; int eeprom_addr; unsigned int eeprom_cycle; unsigned int eeprom_slave; } ;
struct TYPE_6__ {TYPE_1__ m; } ;
struct TYPE_5__ {unsigned int* data; unsigned int eeprom_bit_out; scalar_t__ eeprom_type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 unsigned int VAR_3 ;

unsigned int FUNC_3(void)
{
  unsigned int VAR_4, VAR_5;
  unsigned int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;


  FUNC_0(VAR_1.m.eeprom_status>>6);

  VAR_6 = VAR_1.m.eeprom_status; VAR_7 = VAR_1.m.eeprom_addr&0x1fff; VAR_8 = VAR_1.m.eeprom_cycle; VAR_9 = VAR_1.m.eeprom_slave;
  VAR_10 = FUNC_1() - VAR_3;
  VAR_5 = (VAR_6>>6)&1;




  if (!(VAR_6&0x80) && VAR_10 >= 24) {
    FUNC_2(VAR_0, "eeprom: early read, cycles=%i", VAR_10);
    VAR_8++;
  }

  if (!(VAR_6 & 8));
  else if (VAR_8 == 9 || VAR_8 == 18 || VAR_8 == 27) {
    FUNC_2(VAR_0, "eeprom: r ack");
    VAR_5 = 0;
  } else if (VAR_8 > 9 && VAR_8 < 18) {

    VAR_4 = 17-VAR_8;
    if (VAR_2.eeprom_type) {

      if (VAR_9&1) {
        FUNC_2(VAR_0, "eeprom: read: addr %02x, cycle %i, reg %02x", VAR_7, VAR_8, VAR_6);
 if (VAR_4==0) FUNC_2(VAR_0, "eeprom: read done, byte %02x", VAR_2.data[VAR_7]);
        VAR_5 = (VAR_2.data[VAR_7]>>VAR_4)&1;
      }
    } else {

      if (VAR_7&1) {
        FUNC_2(VAR_0, "eeprom: read: addr %02x, cycle %i, reg %02x", VAR_7>>1, VAR_8, VAR_6);
 if (VAR_4==0) FUNC_2(VAR_0, "eeprom: read done, byte %02x", VAR_2.data[VAR_7>>1]);
        VAR_5 = (VAR_2.data[VAR_7>>1]>>VAR_4)&1;
      }
    }
  }

  return (VAR_5 << VAR_2.eeprom_bit_out);
}
