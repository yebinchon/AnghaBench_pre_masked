
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int eeprom_status; unsigned int eeprom_addr; unsigned int eeprom_cycle; unsigned int eeprom_slave; } ;
struct TYPE_6__ {TYPE_1__ m; } ;
struct TYPE_5__ {int eeprom_type; unsigned char* data; int changed; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_4)
{
  unsigned int VAR_5 = VAR_1.m.eeprom_status, VAR_6 = VAR_1.m.eeprom_addr;
  unsigned int VAR_7 = VAR_1.m.eeprom_cycle, VAR_8 = VAR_1.m.eeprom_slave;

  FUNC_1(VAR_0, "eeprom: scl/sda: %i/%i -> %i/%i, newtime=%i", (VAR_5&2)>>1, VAR_5&1,
    (VAR_4&2)>>1, VAR_4&1, FUNC_0() - VAR_3);
  VAR_6 &= 0x1fff;

  if(VAR_5 & VAR_4 & 2) {

    if((VAR_5 & 1) && !(VAR_4&1)) {

      FUNC_1(VAR_0, "eeprom: -start-");

      VAR_7 = 0;
      VAR_5 |= 8;
    } else if(!(VAR_5 & 1) && (VAR_4&1)) {

      FUNC_1(VAR_0, "eeprom: -stop-");
      VAR_5 &= ~8;
    }
  }
  else if((VAR_5 & 8) && !(VAR_5 & 2) && (VAR_4&2))
  {

    VAR_7++;
    if(VAR_2.eeprom_type) {

      if((VAR_8&1) && VAR_7 == 18) {
        VAR_7 = 9;
        VAR_6++;
                                                      VAR_6&=0x1fff;
      }
      else if(VAR_2.eeprom_type == 2 && VAR_7 == 27) VAR_7 = 18;
      else if(VAR_7 == 36) VAR_7 = 27;
    } else {

      if(VAR_7 == 18) {
        VAR_7 = 9;
        if(VAR_6&1) { VAR_6+=2; VAR_6&=0xff; }
      }
    }
    FUNC_1(VAR_0, "eeprom: scyc: %i", VAR_7);
  }
  else if((VAR_5 & 8) && (VAR_5 & 2) && !(VAR_4&2))
  {

    if(VAR_2.eeprom_type) {

      if(VAR_7 == 9 || VAR_7 == 18 || VAR_7 == 27);
      else if( (VAR_2.eeprom_type == 3 && VAR_7 > 27) || (VAR_2.eeprom_type == 2 && VAR_7 > 18) ) {
        if(!(VAR_8&1)) {

          unsigned char *VAR_9=VAR_2.data+VAR_6;
          *VAR_9 <<= 1; *VAR_9 |= VAR_4&1;
          if(VAR_7 == 26 || VAR_7 == 35) {
            VAR_6=(VAR_6&~0xf)|((VAR_6+1)&0xf);
            FUNC_1(VAR_0, "eeprom: write done, addr inc to: %x, last byte=%02x", VAR_6, *VAR_9);
          }
          VAR_2.changed = 1;
        }
      } else if(VAR_7 > 9) {
        if(!(VAR_8&1)) {

          VAR_6<<=1;
          if(VAR_2.eeprom_type == 2) VAR_6&=0xff; else VAR_6&=0x1fff;
          VAR_6|=VAR_4&1;
          if(VAR_7==17||VAR_7==26) {
            FUNC_1(VAR_0, "eeprom: addr reg done: %x", VAR_6);
            if(VAR_7==17&&VAR_2.eeprom_type==2) { VAR_6&=0xff; VAR_6|=(VAR_8<<7)&0x700; }
          }
        }
      } else {

        VAR_8<<=1; VAR_8|=VAR_4&1;
        if(VAR_7==8) FUNC_1(VAR_0, "eeprom: slave done: %x", VAR_8);
      }
    } else {

      if(VAR_7 == 9);
      else if(VAR_7 > 9) {
        if(!(VAR_6&1)) {

          unsigned char *VAR_10=VAR_2.data+(VAR_6>>1);
          *VAR_10 <<= 1; *VAR_10 |= VAR_4&1;
          if(VAR_7 == 17) {
            VAR_6=(VAR_6&0xf9)|((VAR_6+2)&6);
            FUNC_1(VAR_0, "eeprom: write done, addr inc to: %x, last byte=%02x", VAR_6>>1, *VAR_10);
          }
          VAR_2.changed = 1;
        }
      } else {

        VAR_6<<=1; VAR_6|=VAR_4&1; VAR_6&=0xff;
        if(VAR_7==8) FUNC_1(VAR_0, "eeprom: addr done: %x", VAR_6>>1);
      }
    }
  }

  VAR_5 &= ~3; VAR_5 |= VAR_4&3;
  VAR_1.m.eeprom_status = (unsigned char) VAR_5;
  VAR_1.m.eeprom_cycle = (unsigned char) VAR_7;
  VAR_1.m.eeprom_slave = (unsigned char) VAR_8;
  VAR_1.m.eeprom_addr = (unsigned short)VAR_6;
}
