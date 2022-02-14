
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;



void
FUNC_0(void *VAR_0, int VAR_1) {

 uint8_t *VAR_2 = (uint8_t*) VAR_0;

 do {
  if ((VAR_2[7] & 0x14) == 0x04) {
   uint32_t VAR_3;
   uint16_t VAR_4;
   uint8_t VAR_5;
   uint8_t VAR_6;

   VAR_3 = *((uint32_t*)(VAR_2));
   VAR_4 = *((uint32_t*)(VAR_2+4));
   VAR_5 = VAR_2[6] >> 4;
   VAR_6 = VAR_2[7];

   *((uint16_t*)VAR_2) = VAR_3 & 0xFFFF;
   *((uint16_t*)(VAR_2+2)) = VAR_4;
   VAR_2[4] = VAR_5;
   VAR_2[5] = VAR_6;
   *((uint16_t*)(VAR_2+6)) = VAR_3 >> 16;

  } else {
   uint32_t VAR_7;
   uint16_t VAR_8;
   uint8_t VAR_9, VAR_10;

   VAR_7 = *((uint32_t*)(VAR_2));
   VAR_8 = *((uint16_t*)(VAR_2+4));
   VAR_10 = VAR_2[6];
   VAR_9 = VAR_2[7];

   *((uint16_t*)(VAR_2)) = VAR_8;
   *((uint16_t*)(VAR_2+2)) = VAR_7 & 0xFFFF;
   VAR_2[4] = (VAR_7 >> 16) & 0xFF;
   VAR_2[5] = VAR_9;
   VAR_2[6] = VAR_10;
   VAR_2[7] = VAR_7 >> 24;
  }
  VAR_2 += 8;
 } while (--VAR_1);
}
