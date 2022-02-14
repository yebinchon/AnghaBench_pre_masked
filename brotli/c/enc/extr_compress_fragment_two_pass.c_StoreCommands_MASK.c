
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int const uint16_t ;
typedef int MemoryManager ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int*,size_t const,int,size_t*,int const*,size_t*,size_t*) ;
 int FUNC_3 (int const,int const,size_t*,size_t*) ;
 int FUNC_4 (int*,size_t*,int const*,size_t*,size_t*) ;

__attribute__((used)) static void FUNC_5(MemoryManager* VAR_0,
                          const uint8_t* VAR_1, const size_t VAR_2,
                          const uint32_t* VAR_3, const size_t VAR_4,
                          size_t* VAR_5, uint8_t* VAR_6) {
  static const uint32_t VAR_7[128] = {
    0, 0, 0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 7, 8, 9, 10, 12, 14, 24,
    0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4,
    0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 7, 8, 9, 10, 24,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8,
    9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16,
    17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24,
  };
  static const uint32_t VAR_8[24] = {
    0, 1, 2, 3, 4, 5, 6, 8, 10, 14, 18, 26, 34, 50, 66, 98, 130, 194, 322, 578,
    1090, 2114, 6210, 22594,
  };

  uint8_t VAR_9[256];
  uint16_t VAR_10[256];
  uint32_t VAR_11[256] = { 0 };
  uint8_t VAR_12[128] = { 0 };
  uint16_t VAR_13[128] = { 0 };
  uint32_t VAR_14[128] = { 0 };
  size_t VAR_15;
  for (VAR_15 = 0; VAR_15 < VAR_2; ++VAR_15) {
    ++VAR_11[VAR_1[VAR_15]];
  }
  FUNC_2(VAR_0, VAR_11, VAR_2,
                                                      8,
                                     VAR_9, VAR_10,
                                     VAR_5, VAR_6);
  if (FUNC_1(VAR_0)) return;

  for (VAR_15 = 0; VAR_15 < VAR_4; ++VAR_15) {
    const uint32_t VAR_16 = VAR_3[VAR_15] & 0xFF;
    FUNC_0(VAR_16 < 128);
    ++VAR_14[VAR_16];
  }
  VAR_14[1] += 1;
  VAR_14[2] += 1;
  VAR_14[64] += 1;
  VAR_14[84] += 1;
  FUNC_4(VAR_14, VAR_12, VAR_13,
                                 VAR_5, VAR_6);

  for (VAR_15 = 0; VAR_15 < VAR_4; ++VAR_15) {
    const uint32_t VAR_17 = VAR_3[VAR_15];
    const uint32_t VAR_18 = VAR_17 & 0xFF;
    const uint32_t VAR_19 = VAR_17 >> 8;
    FUNC_0(VAR_18 < 128);
    FUNC_3(VAR_12[VAR_18], VAR_13[VAR_18], VAR_5, VAR_6);
    FUNC_3(VAR_7[VAR_18], VAR_19, VAR_5, VAR_6);
    if (VAR_18 < 24) {
      const uint32_t VAR_20 = VAR_8[VAR_18] + VAR_19;
      uint32_t VAR_21;
      for (VAR_21 = 0; VAR_21 < VAR_20; ++VAR_21) {
        const uint8_t VAR_22 = *VAR_1;
        FUNC_3(VAR_9[VAR_22], VAR_10[VAR_22], VAR_5, VAR_6);
        ++VAR_1;
      }
    }
  }
}
