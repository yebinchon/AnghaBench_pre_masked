
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int *,size_t*,int const**) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int const*,size_t,size_t,size_t,int,size_t,size_t*,int const**) ;

__attribute__((used)) static void FUNC_2(const uint8_t* VAR_1,
    size_t VAR_2, size_t VAR_3, size_t VAR_4, int VAR_5, size_t VAR_6,
    size_t* VAR_7, const uint32_t** VAR_8) {
  if (VAR_5 < VAR_0 || VAR_3 < 64) {
    return;
  } else if (FUNC_1(
      VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8)) {

  } else {



    const size_t VAR_9 = VAR_2 + VAR_3;
    uint32_t VAR_10[9] = { 0 };
    for (; VAR_2 + 64 <= VAR_9; VAR_2 += 4096) {
      static const int VAR_11[4] = { 0, 0, 1, 2 };
      const size_t VAR_12 = VAR_2 + 64;
      int VAR_13 = VAR_11[VAR_1[VAR_2 & VAR_4] >> 6] * 3;
      size_t VAR_14;
      for (VAR_14 = VAR_2 + 1; VAR_14 < VAR_12; ++VAR_14) {
        const uint8_t VAR_15 = VAR_1[VAR_14 & VAR_4];
        ++VAR_10[VAR_13 + VAR_11[VAR_15 >> 6]];
        VAR_13 = VAR_11[VAR_15 >> 6] * 3;
      }
    }
    FUNC_0(VAR_5, &VAR_10[0], VAR_7,
                     VAR_8);
  }
}
