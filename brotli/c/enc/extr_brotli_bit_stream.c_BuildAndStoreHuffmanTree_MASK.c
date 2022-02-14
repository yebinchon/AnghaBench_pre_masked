
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int depth ;
typedef int HuffmanTree ;


 int FUNC_0 (scalar_t__*,size_t const,scalar_t__*) ;
 int FUNC_1 (scalar_t__ const*,size_t const,int,int *,scalar_t__*) ;
 int FUNC_2 (scalar_t__*,size_t const,int *,size_t*,scalar_t__*) ;
 int FUNC_3 (size_t,size_t,size_t*,scalar_t__*) ;
 int FUNC_4 (scalar_t__*,size_t*,size_t,size_t,size_t*,scalar_t__*) ;
 int FUNC_5 (scalar_t__*,int ,size_t const) ;

__attribute__((used)) static void FUNC_6(const uint32_t* VAR_0,
                                     const size_t VAR_1,
                                     const size_t VAR_2,
                                     HuffmanTree* VAR_3,
                                     uint8_t* VAR_4,
                                     uint16_t* VAR_5,
                                     size_t* VAR_6,
                                     uint8_t* VAR_7) {
  size_t VAR_8 = 0;
  size_t VAR_9[4] = { 0 };
  size_t VAR_10;
  size_t VAR_11 = 0;
  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
    if (VAR_0[VAR_10]) {
      if (VAR_8 < 4) {
        VAR_9[VAR_8] = VAR_10;
      } else if (VAR_8 > 4) {
        break;
      }
      VAR_8++;
    }
  }

  {
    size_t VAR_12 = VAR_2 - 1;
    while (VAR_12) {
      VAR_12 >>= 1;
      ++VAR_11;
    }
  }

  if (VAR_8 <= 1) {
    FUNC_3(4, 1, VAR_6, VAR_7);
    FUNC_3(VAR_11, VAR_9[0], VAR_6, VAR_7);
    VAR_4[VAR_9[0]] = 0;
    VAR_5[VAR_9[0]] = 0;
    return;
  }

  FUNC_5(VAR_4, 0, VAR_1 * sizeof(VAR_4[0]));
  FUNC_1(VAR_0, VAR_1, 15, VAR_3, VAR_4);
  FUNC_0(VAR_4, VAR_1, VAR_5);

  if (VAR_8 <= 4) {
    FUNC_4(VAR_4, VAR_9, VAR_8, VAR_11, VAR_6, VAR_7);
  } else {
    FUNC_2(VAR_4, VAR_1, VAR_3, VAR_6, VAR_7);
  }
}
