
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int type_histo ;
typedef int length_histo ;
struct TYPE_4__ {int * length_bits; int * length_depths; int * type_bits; int * type_depths; } ;
typedef int HuffmanTree ;
typedef int BlockTypeCodeCalculator ;
typedef TYPE_1__ BlockSplitCode ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int const) ;
 int FUNC_1 (int *,size_t const,size_t const,int *,int *,int *,size_t*,int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int *,int const) ;
 int FUNC_4 (TYPE_1__*,int const,int const,int,size_t*,int *) ;
 int FUNC_5 (size_t const,size_t*,int *) ;
 int FUNC_6 (int *,int ,size_t const) ;

__attribute__((used)) static void FUNC_7(const uint8_t* VAR_2,
                                        const uint32_t* VAR_3,
                                        const size_t VAR_4,
                                        const size_t VAR_5,
                                        HuffmanTree* VAR_6,
                                        BlockSplitCode* VAR_7,
                                        size_t* VAR_8,
                                        uint8_t* VAR_9) {
  uint32_t VAR_10[VAR_0];
  uint32_t VAR_11[VAR_1];
  size_t VAR_12;
  BlockTypeCodeCalculator VAR_13;
  FUNC_6(VAR_10, 0, (VAR_5 + 2) * sizeof(VAR_10[0]));
  FUNC_6(VAR_11, 0, sizeof(VAR_11));
  FUNC_2(&VAR_13);
  for (VAR_12 = 0; VAR_12 < VAR_4; ++VAR_12) {
    size_t VAR_14 = FUNC_3(&VAR_13, VAR_2[VAR_12]);
    if (VAR_12 != 0) ++VAR_10[VAR_14];
    ++VAR_11[FUNC_0(VAR_3[VAR_12])];
  }
  FUNC_5(VAR_5 - 1, VAR_8, VAR_9);
  if (VAR_5 > 1) {
    FUNC_1(&VAR_10[0], VAR_5 + 2, VAR_5 + 2, VAR_6,
                             &VAR_7->type_depths[0], &VAR_7->type_bits[0],
                             VAR_8, VAR_9);
    FUNC_1(&VAR_11[0], VAR_1,
                             VAR_1,
                             VAR_6, &VAR_7->length_depths[0],
                             &VAR_7->length_bits[0], VAR_8, VAR_9);
    FUNC_4(VAR_7, VAR_3[0], VAR_2[0], 1, VAR_8, VAR_9);
  }
}
