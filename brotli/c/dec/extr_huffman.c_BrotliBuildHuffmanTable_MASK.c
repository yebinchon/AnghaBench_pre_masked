
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int table ;
typedef int brotli_reg_t ;
typedef int HuffmanCode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int*,int,int) ;
 int FUNC_4 (int *,int,int,int ) ;
 int FUNC_5 (int *,int *,size_t) ;

uint32_t FUNC_6(HuffmanCode* VAR_3,
                                 int VAR_4,
                                 const uint16_t* const VAR_5,
                                 uint16_t* VAR_6) {
  HuffmanCode VAR_7;
  HuffmanCode* VAR_8;
  int VAR_9;
  int VAR_10;
  brotli_reg_t VAR_11;
  brotli_reg_t VAR_12;
  brotli_reg_t VAR_13;
  brotli_reg_t VAR_14;
  int VAR_15;
  int VAR_16;
  int VAR_17;
  int VAR_18;
  int VAR_19 = -1;
  int VAR_20;
  int VAR_21;

  FUNC_0(VAR_4 <= VAR_2);
  FUNC_0(VAR_0 - VAR_4 <=
                VAR_2);

  while (VAR_5[VAR_19] == 0xFFFF) VAR_19--;
  VAR_19 += VAR_0 + 1;

  VAR_8 = VAR_3;
  VAR_16 = VAR_4;
  VAR_17 = 1 << VAR_16;
  VAR_18 = VAR_17;



  if (VAR_16 > VAR_19) {
    VAR_16 = VAR_19;
    VAR_17 = 1 << VAR_16;
  }
  VAR_11 = 0;
  VAR_12 = VAR_1;
  VAR_20 = 1;
  VAR_15 = 2;
  do {
    VAR_10 = VAR_20 - (VAR_0 + 1);
    for (VAR_21 = VAR_6[VAR_20]; VAR_21 != 0; --VAR_21) {
      VAR_10 = VAR_5[VAR_10];
      VAR_7 = FUNC_2((uint8_t)VAR_20, (uint16_t)VAR_10);
      FUNC_4(&VAR_8[FUNC_1(VAR_11)], VAR_15, VAR_17, VAR_7);
      VAR_11 += VAR_12;
    }
    VAR_15 <<= 1;
    VAR_12 >>= 1;
  } while (++VAR_20 <= VAR_16);


  while (VAR_18 != VAR_17) {
    FUNC_5(&VAR_8[VAR_17], &VAR_8[0],
           (size_t)VAR_17 * sizeof(VAR_8[0]));
    VAR_17 <<= 1;
  }


  VAR_12 = VAR_1 >> (VAR_4 - 1);
  VAR_13 = (VAR_1 << 1);
  VAR_14 = VAR_1;
  for (VAR_9 = VAR_4 + 1, VAR_15 = 2; VAR_9 <= VAR_19; ++VAR_9) {
    VAR_10 = VAR_9 - (VAR_0 + 1);
    for (; VAR_6[VAR_9] != 0; --VAR_6[VAR_9]) {
      if (VAR_13 == (VAR_1 << 1U)) {
        VAR_8 += VAR_17;
        VAR_16 = FUNC_3(VAR_6, VAR_9, VAR_4);
        VAR_17 = 1 << VAR_16;
        VAR_18 += VAR_17;
        VAR_13 = FUNC_1(VAR_11);
        VAR_11 += VAR_12;
        VAR_3[VAR_13] = FUNC_2(
            (uint8_t)(VAR_16 + VAR_4),
            (uint16_t)(((size_t)(VAR_8 - VAR_3)) - VAR_13));
        VAR_13 = 0;
      }
      VAR_10 = VAR_5[VAR_10];
      VAR_7 = FUNC_2((uint8_t)(VAR_9 - VAR_4), (uint16_t)VAR_10);
      FUNC_4(
          &VAR_8[FUNC_1(VAR_13)], VAR_15, VAR_17, VAR_7);
      VAR_13 += VAR_14;
    }
    VAR_15 <<= 1;
    VAR_14 >>= 1;
  }
  return (uint32_t)VAR_18;
}
