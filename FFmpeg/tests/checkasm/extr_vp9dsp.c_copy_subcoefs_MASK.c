
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;
typedef enum TxfmType { ____Placeholder_TxfmType } TxfmType ;
typedef enum TxfmMode { ____Placeholder_TxfmMode } TxfmMode ;


 int FUNC_0 (int*,int const*) ;
 int FUNC_1 (int*) ;
 int*** VAR_0 ;

__attribute__((used)) static int FUNC_2(int16_t *VAR_1, const int16_t *VAR_2, enum TxfmMode VAR_3,
                         enum TxfmType VAR_4, int VAR_5, int VAR_6, int VAR_7)
{







    int VAR_8;
    const int16_t *VAR_9 = VAR_0[VAR_3][VAR_4];
    int VAR_10;

    for (VAR_8 = 0; VAR_8 < VAR_5 * VAR_5; VAR_8++) {
        int VAR_11 = VAR_9[VAR_8], VAR_12 = VAR_11 % VAR_5, VAR_13 = VAR_11 / VAR_5;


        if (VAR_12 >= VAR_6 || VAR_13 >= VAR_6)
            break;


        if (VAR_7 == 8) {
            VAR_1[VAR_11] = VAR_2[VAR_11];
        } else {
            FUNC_0(&VAR_1[VAR_11 * 2], &VAR_2[VAR_11 * 2]);
        }
    }

    VAR_10 = VAR_8;

    for (; VAR_8 < VAR_5 * VAR_5; VAR_8++) {
        int VAR_14 = VAR_9[VAR_8];


        if (VAR_7 == 8) {
            VAR_1[VAR_14] = 0;
        } else {
            FUNC_1(&VAR_1[VAR_14 * 2]);
        }
    }

    return VAR_10;
}
