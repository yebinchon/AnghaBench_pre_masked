
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;



uint64_t FUNC_0(const void* VAR_0, size_t VAR_1) {

  const uint64_t VAR_2 = 0xc6a4a7935bd1e995;
 const int VAR_3 = 47;
 const uint64_t * VAR_4 = (const uint64_t*)VAR_0;
 const uint64_t * VAR_5 = VAR_4 + (VAR_1/8);

 uint64_t VAR_6 = 0xCe110 ^ (VAR_1 * VAR_2);

 while (VAR_4 != VAR_5) {
  uint64_t VAR_7 = *VAR_4++;
  VAR_7 *= VAR_2;
  VAR_7 ^= VAR_7 >> VAR_3;
  VAR_7 *= VAR_2;
  VAR_6 ^= VAR_7;
  VAR_6 *= VAR_2;
 }

 const unsigned char * VAR_8 = (const unsigned char*)VAR_4;

 switch (VAR_1 & 7) {
    case 7: VAR_6 ^= (uint64_t)(VAR_8[6]) << 48;
    case 6: VAR_6 ^= (uint64_t)(VAR_8[5]) << 40;
    case 5: VAR_6 ^= (uint64_t)(VAR_8[4]) << 32;
    case 4: VAR_6 ^= (uint64_t)(VAR_8[3]) << 24;
    case 3: VAR_6 ^= (uint64_t)(VAR_8[2]) << 16;
    case 2: VAR_6 ^= (uint64_t)(VAR_8[1]) << 8;
    case 1: VAR_6 ^= (uint64_t)(VAR_8[0]);
            VAR_6 *= VAR_2;
 };

 VAR_6 ^= VAR_6 >> VAR_3;
 VAR_6 *= VAR_2;
 VAR_6 ^= VAR_6 >> VAR_3;

 return VAR_6;

}
