
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int * crc_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int const) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int) ;
 int VAR_3 ;

uint32_t FUNC_4(uint32_t VAR_4, crc_stream VAR_5, size_t VAR_6) {
  crc_stream VAR_7 = VAR_5;
  crc_stream VAR_8;



  uint32_t VAR_9, VAR_10, VAR_11;



  VAR_9 = VAR_4 ^ 0xffffffff;



  while (VAR_6 && ((uintptr_t)VAR_7 & 7) != 0) {
    VAR_9 = FUNC_2((uint32_t)(VAR_9), *VAR_7);
    ++VAR_7;
    --VAR_6;
  }
  while (VAR_6 >= 3 * VAR_0) {
    VAR_10 = 0;
    VAR_11 = 0;
    VAR_8 = VAR_7 + VAR_0;
    do {
      VAR_9 = FUNC_0(VAR_9, *(uint32_t *)(VAR_7));
      VAR_10 = FUNC_0(VAR_10, *(const uint32_t *)(VAR_7 + VAR_0));
      VAR_11 = FUNC_0(VAR_11, *(const uint32_t *)(VAR_7 + 2 * VAR_0));
      VAR_7 += 4;
    } while (VAR_7 < VAR_8);
    VAR_9 = FUNC_3(VAR_2, (uint32_t)(VAR_9)) ^ VAR_10;
    VAR_9 = FUNC_3(VAR_2, (uint32_t)(VAR_9)) ^ VAR_11;
    VAR_7 += 2 * VAR_0;
    VAR_6 -= 3 * VAR_0;
  }




  while (VAR_6 >= 3 * VAR_1) {
    VAR_10 = 0;
    VAR_11 = 0;
    VAR_8 = VAR_7 + VAR_1;
    do {
      VAR_9 = FUNC_0(VAR_9, *(const uint32_t *)(VAR_7));
      VAR_10 = FUNC_0(VAR_10, *(const uint32_t *)(VAR_7 + VAR_1));
      VAR_11 = FUNC_0(VAR_11, *(const uint32_t *)(VAR_7 + 2 * VAR_1));
      VAR_7 += 4;
    } while (VAR_7 < VAR_8);
    VAR_9 = FUNC_3(VAR_3, (uint32_t)(VAR_9)) ^ VAR_10;
    VAR_9 = FUNC_3(VAR_3, (uint32_t)(VAR_9)) ^ VAR_11;
    VAR_7 += 2 * VAR_1;
    VAR_6 -= 3 * VAR_1;
  }



  VAR_8 = VAR_7 + (VAR_6 - (VAR_6 & 7));
  while (VAR_7 < VAR_8) {
    VAR_9 = FUNC_0(VAR_9, *(const uint32_t *)(VAR_7));
    VAR_7 += 4;
  }

  VAR_6 &= 7;


  while (VAR_6) {
    VAR_9 = FUNC_2((uint32_t)(VAR_9), *VAR_7);
    ++VAR_7;
    --VAR_6;
  }


  return (uint32_t)(VAR_9) ^ 0xffffffff;
}
