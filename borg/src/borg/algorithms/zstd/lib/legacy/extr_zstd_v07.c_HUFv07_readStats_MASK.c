
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int BYTE ;


 int FUNC_0 (int const) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int*,size_t,int const*,size_t) ;
 scalar_t__ FUNC_3 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int*,int,int) ;
 int VAR_2 ;

size_t FUNC_5(BYTE* VAR_3, size_t VAR_4, U32* VAR_5,
                     U32* VAR_6, U32* VAR_7,
                     const void* VAR_8, size_t VAR_9)
{
    U32 VAR_10;
    const BYTE* VAR_11 = (const BYTE*) VAR_8;
    size_t VAR_12;
    size_t VAR_13;

    if (!VAR_9) return FUNC_1(VAR_2);
    VAR_12 = VAR_11[0];


    if (VAR_12 >= 128) {
        if (VAR_12 >= (242)) {
            static U32 VAR_14[14] = { 1, 2, 3, 4, 7, 8, 15, 16, 31, 32, 63, 64, 127, 128 };
            VAR_13 = VAR_14[VAR_12-242];
            FUNC_4(VAR_3, 1, VAR_4);
            VAR_12 = 0;
        }
        else {
            VAR_13 = VAR_12 - 127;
            VAR_12 = ((VAR_13+1)/2);
            if (VAR_12+1 > VAR_9) return FUNC_1(VAR_2);
            if (VAR_13 >= VAR_4) return FUNC_1(VAR_1);
            VAR_11 += 1;
            { U32 VAR_15;
                for (VAR_15=0; VAR_15<VAR_13; VAR_15+=2) {
                    VAR_3[VAR_15] = VAR_11[VAR_15/2] >> 4;
                    VAR_3[VAR_15+1] = VAR_11[VAR_15/2] & 15;
    } } } }
    else {
        if (VAR_12+1 > VAR_9) return FUNC_1(VAR_2);
        VAR_13 = FUNC_2(VAR_3, VAR_4-1, VAR_11+1, VAR_12);
        if (FUNC_3(VAR_13)) return VAR_13;
    }


    FUNC_4(VAR_5, 0, (VAR_0 + 1) * sizeof(U32));
    VAR_10 = 0;
    { U32 VAR_16; for (VAR_16=0; VAR_16<VAR_13; VAR_16++) {
            if (VAR_3[VAR_16] >= VAR_0) return FUNC_1(VAR_1);
            VAR_5[VAR_3[VAR_16]]++;
            VAR_10 += (1 << VAR_3[VAR_16]) >> 1;
    } }
    if (VAR_10 == 0) return FUNC_1(VAR_1);


    { U32 const VAR_17 = FUNC_0(VAR_10) + 1;
        if (VAR_17 > VAR_0) return FUNC_1(VAR_1);
        *VAR_7 = VAR_17;

        { U32 const VAR_18 = 1 << VAR_17;
            U32 const VAR_19 = VAR_18 - VAR_10;
            U32 const VAR_20 = 1 << FUNC_0(VAR_19);
            U32 const VAR_21 = FUNC_0(VAR_19) + 1;
            if (VAR_20 != VAR_19) return FUNC_1(VAR_1);
            VAR_3[VAR_13] = (BYTE)VAR_21;
            VAR_5[VAR_21]++;
    } }


    if ((VAR_5[1] < 2) || (VAR_5[1] & 1)) return FUNC_1(VAR_1);


    *VAR_6 = (U32)(VAR_13+1);
    return VAR_12+1;
}
