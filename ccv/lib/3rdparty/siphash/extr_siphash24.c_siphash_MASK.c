
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int const*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_2(uint8_t *VAR_4, const uint8_t *VAR_5, uint64_t VAR_6, const uint8_t *VAR_7) {

  uint64_t VAR_8 = 0x736f6d6570736575ULL;
  uint64_t VAR_9 = 0x646f72616e646f6dULL;
  uint64_t VAR_10 = 0x6c7967656e657261ULL;
  uint64_t VAR_11 = 0x7465646279746573ULL;
  uint64_t VAR_12;
  uint64_t VAR_13 = FUNC_1(VAR_7);
  uint64_t VAR_14 = FUNC_1(VAR_7 + 8);
  uint64_t VAR_15;
  int VAR_16;
  const uint8_t *VAR_17 = VAR_5 + VAR_6 - (VAR_6 % sizeof(uint64_t));
  const int VAR_18 = VAR_6 & 7;
  VAR_12 = ((uint64_t)VAR_6) << 56;
  VAR_11 ^= VAR_14;
  VAR_10 ^= VAR_13;
  VAR_9 ^= VAR_14;
  VAR_8 ^= VAR_13;





  for (; VAR_5 != VAR_17; VAR_5 += 8) {
    VAR_15 = FUNC_1(VAR_5);
    VAR_11 ^= VAR_15;

    VAR_1;
    for (VAR_16 = 0; VAR_16 < VAR_2; ++VAR_16)
      VAR_0;

    VAR_8 ^= VAR_15;
  }

  switch (VAR_18) {
  case 7:
    VAR_12 |= ((uint64_t)VAR_5[6]) << 48;
  case 6:
    VAR_12 |= ((uint64_t)VAR_5[5]) << 40;
  case 5:
    VAR_12 |= ((uint64_t)VAR_5[4]) << 32;
  case 4:
    VAR_12 |= ((uint64_t)VAR_5[3]) << 24;
  case 3:
    VAR_12 |= ((uint64_t)VAR_5[2]) << 16;
  case 2:
    VAR_12 |= ((uint64_t)VAR_5[1]) << 8;
  case 1:
    VAR_12 |= ((uint64_t)VAR_5[0]);
    break;
  case 0:
    break;
  }

  VAR_11 ^= VAR_12;

  VAR_1;
  for (VAR_16 = 0; VAR_16 < VAR_2; ++VAR_16)
    VAR_0;

  VAR_8 ^= VAR_12;


  VAR_10 ^= 0xff;




  VAR_1;
  for (VAR_16 = 0; VAR_16 < VAR_3; ++VAR_16)
    VAR_0;

  VAR_12 = VAR_8 ^ VAR_9 ^ VAR_10 ^ VAR_11;
  FUNC_0(VAR_4, VAR_12);
  return 0;
}
