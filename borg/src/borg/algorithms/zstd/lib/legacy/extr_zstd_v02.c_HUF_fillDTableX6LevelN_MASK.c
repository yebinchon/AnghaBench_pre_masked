
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int weight; int symbol; } ;
typedef TYPE_1__ sortedSymbol_t ;
typedef int * rankVal_t ;
typedef int rankVal ;
typedef int U32 ;
struct TYPE_11__ {int nbBytes; int nbBits; } ;
struct TYPE_10__ {int * byte; } ;
typedef TYPE_2__ HUF_DSeqX6 ;
typedef TYPE_3__ HUF_DDescX6 ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static void FUNC_1(HUF_DDescX6* VAR_1, HUF_DSeqX6* VAR_2, int VAR_3,
                           const rankVal_t VAR_4, const U32 VAR_5, const int VAR_6, const U32 VAR_7,
                           const sortedSymbol_t* VAR_8, const U32 VAR_9, const U32* VAR_10,
                           const U32 VAR_11, HUF_DSeqX6 VAR_12, HUF_DDescX6 VAR_13)
{
    const int VAR_14 = VAR_11 - VAR_3;
    const int VAR_15 = VAR_11 - VAR_7;
    const U32 VAR_16 = VAR_13.nbBytes;
    U32 VAR_17[VAR_0 + 1];
    U32 VAR_18, VAR_19;


    FUNC_0(VAR_17, VAR_4[VAR_5], sizeof(VAR_17));


    if (VAR_6>1)
    {
        U32 VAR_20;
        const U32 VAR_21 = VAR_17[VAR_6];
        for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++)
        {
            VAR_2[VAR_20] = VAR_12;
            VAR_1[VAR_20] = VAR_13;
        }
    }


    VAR_13.nbBytes++;
    VAR_18 = VAR_10[VAR_6];
    for (VAR_19=VAR_18; VAR_19<VAR_9; VAR_19++)
    {
        const BYTE VAR_22 = VAR_8[VAR_19].symbol;
        const U32 VAR_23 = VAR_8[VAR_19].weight;
        const int VAR_24 = VAR_11 - VAR_23;
        const int VAR_25 = VAR_5+VAR_24;
        const U32 VAR_26 = VAR_17[VAR_23];
        const U32 VAR_27 = 1 << (VAR_3-VAR_24);
        VAR_12.byte[VAR_16] = VAR_22;
        VAR_13.nbBits = (BYTE)VAR_25;

        if ((VAR_16<3) && (VAR_3-VAR_25 >= VAR_15))
        {
            int VAR_28 = VAR_25 + VAR_14;
            if (VAR_28 < 1) VAR_28 = 1;
            FUNC_1(VAR_1+VAR_26, VAR_2+VAR_26, VAR_3-VAR_24,
                           VAR_4, VAR_25, VAR_28, VAR_7,
                           VAR_8, VAR_9, VAR_10,
                           VAR_11, VAR_12, VAR_13);
        }
        else
        {
            U32 VAR_29;
            const U32 VAR_30 = VAR_26 + VAR_27;
            for (VAR_29 = VAR_26; VAR_29 < VAR_30; VAR_29++)
            {
                VAR_1[VAR_29] = VAR_13;
                VAR_2[VAR_29] = VAR_12;
            }
        }
        VAR_17[VAR_23] += VAR_27;
    }
}
