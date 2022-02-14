
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int HUFv06_DEltX4 ;
typedef int BYTE ;
typedef int BITv06_DStream_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *,int const* const,size_t const) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,int * const,int const* const,int const) ;
 scalar_t__ FUNC_8 (size_t) ;
 size_t FUNC_9 (int const* const) ;
 int VAR_1 ;

size_t FUNC_10(
          void* VAR_2, size_t VAR_3,
    const void* VAR_4, size_t VAR_5,
    const U32* VAR_6)
{
    if (VAR_5 < 10) return FUNC_3(VAR_1);

    { const BYTE* const VAR_7 = (const BYTE*) VAR_4;
        BYTE* const VAR_8 = (BYTE*) VAR_2;
        BYTE* const VAR_9 = VAR_8 + VAR_3;
        const void* const VAR_10 = VAR_6;
        const HUFv06_DEltX4* const VAR_11 = ((const HUFv06_DEltX4*)VAR_10) +1;
        const U32 VAR_12 = VAR_6[0];
        size_t VAR_13;


        BITv06_DStream_t VAR_14;
        BITv06_DStream_t VAR_15;
        BITv06_DStream_t VAR_16;
        BITv06_DStream_t VAR_17;
        const size_t VAR_18 = FUNC_9(VAR_7);
        const size_t VAR_19 = FUNC_9(VAR_7+2);
        const size_t VAR_20 = FUNC_9(VAR_7+4);
        size_t VAR_21;
        const BYTE* const VAR_22 = VAR_7 + 6;
        const BYTE* const VAR_23 = VAR_22 + VAR_18;
        const BYTE* const VAR_24 = VAR_23 + VAR_19;
        const BYTE* const VAR_25 = VAR_24 + VAR_20;
        const size_t VAR_26 = (VAR_3+3) / 4;
        BYTE* const VAR_27 = VAR_8 + VAR_26;
        BYTE* const VAR_28 = VAR_27 + VAR_26;
        BYTE* const VAR_29 = VAR_28 + VAR_26;
        BYTE* VAR_30 = VAR_8;
        BYTE* VAR_31 = VAR_27;
        BYTE* VAR_32 = VAR_28;
        BYTE* VAR_33 = VAR_29;
        U32 VAR_34;

        VAR_21 = VAR_5 - (VAR_18 + VAR_19 + VAR_20 + 6);
        if (VAR_21 > VAR_5) return FUNC_3(VAR_1);
        VAR_13 = FUNC_1(&VAR_14, VAR_22, VAR_18);
        if (FUNC_8(VAR_13)) return VAR_13;
        VAR_13 = FUNC_1(&VAR_15, VAR_23, VAR_19);
        if (FUNC_8(VAR_13)) return VAR_13;
        VAR_13 = FUNC_1(&VAR_16, VAR_24, VAR_20);
        if (FUNC_8(VAR_13)) return VAR_13;
        VAR_13 = FUNC_1(&VAR_17, VAR_25, VAR_21);
        if (FUNC_8(VAR_13)) return VAR_13;


        VAR_34 = FUNC_2(&VAR_14) | FUNC_2(&VAR_15) | FUNC_2(&VAR_16) | FUNC_2(&VAR_17);
        for ( ; (VAR_34==VAR_0) && (VAR_33<(VAR_9-7)) ; ) {
            FUNC_6(VAR_30, &VAR_14);
            FUNC_6(VAR_31, &VAR_15);
            FUNC_6(VAR_32, &VAR_16);
            FUNC_6(VAR_33, &VAR_17);
            FUNC_5(VAR_30, &VAR_14);
            FUNC_5(VAR_31, &VAR_15);
            FUNC_5(VAR_32, &VAR_16);
            FUNC_5(VAR_33, &VAR_17);
            FUNC_6(VAR_30, &VAR_14);
            FUNC_6(VAR_31, &VAR_15);
            FUNC_6(VAR_32, &VAR_16);
            FUNC_6(VAR_33, &VAR_17);
            FUNC_4(VAR_30, &VAR_14);
            FUNC_4(VAR_31, &VAR_15);
            FUNC_4(VAR_32, &VAR_16);
            FUNC_4(VAR_33, &VAR_17);

            VAR_34 = FUNC_2(&VAR_14) | FUNC_2(&VAR_15) | FUNC_2(&VAR_16) | FUNC_2(&VAR_17);
        }


        if (VAR_30 > VAR_27) return FUNC_3(VAR_1);
        if (VAR_31 > VAR_28) return FUNC_3(VAR_1);
        if (VAR_32 > VAR_29) return FUNC_3(VAR_1);



        FUNC_7(VAR_30, &VAR_14, VAR_27, VAR_11, VAR_12);
        FUNC_7(VAR_31, &VAR_15, VAR_28, VAR_11, VAR_12);
        FUNC_7(VAR_32, &VAR_16, VAR_29, VAR_11, VAR_12);
        FUNC_7(VAR_33, &VAR_17, VAR_9, VAR_11, VAR_12);


        VAR_34 = FUNC_0(&VAR_14) & FUNC_0(&VAR_15) & FUNC_0(&VAR_16) & FUNC_0(&VAR_17);
        if (!VAR_34) return FUNC_3(VAR_1);


        return VAR_3;
    }
}
