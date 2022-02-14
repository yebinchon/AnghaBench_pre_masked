
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int8_t ;
struct TYPE_3__ {int avctx; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AC3DecodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (int *,int) ;
 int** VAR_3 ;

__attribute__((used)) static int FUNC_2(AC3DecodeContext *VAR_4,
                            GetBitContext *VAR_5, int VAR_6, int VAR_7,
                            uint8_t VAR_8, int8_t *VAR_9)
{
    int VAR_10, VAR_11, VAR_12, VAR_13;
    int VAR_14[256];
    int VAR_15, VAR_16;


    VAR_13 = VAR_6 + (VAR_6 == VAR_2);
    for (VAR_12 = 0, VAR_10 = 0; VAR_12 < VAR_7; VAR_12++) {
        VAR_15 = FUNC_1(VAR_5, 7);
        if (VAR_15 >= 125) {
            FUNC_0(VAR_4->avctx, VAR_1, "expacc %d is out-of-range\n", VAR_15);
            return VAR_0;
        }
        VAR_14[VAR_10++] = VAR_3[VAR_15][0];
        VAR_14[VAR_10++] = VAR_3[VAR_15][1];
        VAR_14[VAR_10++] = VAR_3[VAR_15][2];
    }


    VAR_16 = VAR_8;
    for (VAR_10 = 0, VAR_11 = 0; VAR_10 < VAR_7 * 3; VAR_10++) {
        VAR_16 += VAR_14[VAR_10] - 2;
        if (VAR_16 > 24U) {
            FUNC_0(VAR_4->avctx, VAR_1, "exponent %d is out-of-range\n", VAR_16);
            return VAR_0;
        }
        switch (VAR_13) {
        case 4: VAR_9[VAR_11++] = VAR_16;
                VAR_9[VAR_11++] = VAR_16;
        case 2: VAR_9[VAR_11++] = VAR_16;
        case 1: VAR_9[VAR_11++] = VAR_16;
        }
    }
    return 0;
}
