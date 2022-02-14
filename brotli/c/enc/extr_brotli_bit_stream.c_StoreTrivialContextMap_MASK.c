
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int histogram ;
typedef int HuffmanTree ;


 int VAR_0 ;
 int FUNC_0 (int,int,size_t*,int*) ;
 int FUNC_1 (int*,size_t,size_t,int *,int*,int*,size_t*,int*) ;
 int FUNC_2 (size_t,size_t*,int*) ;
 int FUNC_3 (int*,int ,size_t) ;

__attribute__((used)) static void FUNC_4(size_t VAR_1,
                                   size_t VAR_2,
                                   HuffmanTree* VAR_3,
                                   size_t* VAR_4,
                                   uint8_t* VAR_5) {
  FUNC_2(VAR_1 - 1, VAR_4, VAR_5);
  if (VAR_1 > 1) {
    size_t VAR_6 = VAR_2 - 1u;
    size_t VAR_7 = (1u << VAR_6) - 1u;
    size_t VAR_8 = VAR_1 + VAR_6;
    uint32_t VAR_9[VAR_0];
    uint8_t VAR_10[VAR_0];
    uint16_t VAR_11[VAR_0];
    size_t VAR_12;
    FUNC_3(VAR_9, 0, VAR_8 * sizeof(VAR_9[0]));

    FUNC_0(1, 1, VAR_4, VAR_5);
    FUNC_0(4, VAR_6 - 1, VAR_4, VAR_5);
    VAR_9[VAR_6] = (uint32_t)VAR_1;
    VAR_9[0] = 1;
    for (VAR_12 = VAR_2; VAR_12 < VAR_8; ++VAR_12) {
      VAR_9[VAR_12] = 1;
    }
    FUNC_1(VAR_9, VAR_8, VAR_8,
                             VAR_3, VAR_10, VAR_11, VAR_4, VAR_5);
    for (VAR_12 = 0; VAR_12 < VAR_1; ++VAR_12) {
      size_t VAR_13 = (VAR_12 == 0 ? 0 : VAR_12 + VAR_2 - 1);
      FUNC_0(VAR_10[VAR_13], VAR_11[VAR_13], VAR_4, VAR_5);
      FUNC_0(
          VAR_10[VAR_6], VAR_11[VAR_6], VAR_4, VAR_5);
      FUNC_0(VAR_6, VAR_7, VAR_4, VAR_5);
    }

    FUNC_0(1, 1, VAR_4, VAR_5);
  }
}
