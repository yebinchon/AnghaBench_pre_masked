
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolEncodingType_e ;
typedef int ZSTD_seqSymbol ;
typedef size_t U32 ;
typedef int S16 ;
typedef unsigned int BYTE ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (size_t const) ;
 size_t FUNC_2 (int *,unsigned int*,unsigned int*,void const*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (void const* const,size_t const) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (int *,int *,unsigned int,size_t const*,size_t const*,unsigned int) ;
 int FUNC_6 (int *,size_t const,size_t const) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;




 int VAR_3 ;

__attribute__((used)) static size_t FUNC_8(ZSTD_seqSymbol* VAR_4, const ZSTD_seqSymbol** VAR_5,
                                 symbolEncodingType_e VAR_6, unsigned VAR_7, U32 VAR_8,
                                 const void* VAR_9, size_t VAR_10,
                                 const U32* VAR_11, const U32* VAR_12,
                                 const ZSTD_seqSymbol* VAR_13, U32 VAR_14,
                                 int VAR_15, int VAR_16)
{
    switch(VAR_6)
    {
    case 128 :
        if (!VAR_10) return FUNC_0(VAR_3);
        if ( (*(const BYTE*)VAR_9) > VAR_7) return FUNC_0(VAR_2);
        { U32 const VAR_17 = *(const BYTE*)VAR_9;
            U32 const VAR_18 = VAR_11[VAR_17];
            U32 const VAR_19 = VAR_12[VAR_17];
            FUNC_6(VAR_4, VAR_18, VAR_19);
        }
        *VAR_5 = VAR_4;
        return 1;
    case 131 :
        *VAR_5 = VAR_13;
        return 0;
    case 129:
        if (!VAR_14) return FUNC_0(VAR_2);

        if (VAR_15 && (VAR_16 > 24 )) {
            const void* const VAR_20 = *VAR_5;
            size_t const VAR_21 = sizeof(ZSTD_seqSymbol) * (FUNC_4(VAR_8));
            FUNC_3(VAR_20, VAR_21);
        }
        return 0;
    case 130 :
        { unsigned VAR_22;
            S16 VAR_23[VAR_1+1];
            size_t const VAR_24 = FUNC_2(VAR_23, &VAR_7, &VAR_22, VAR_9, VAR_10);
            if (FUNC_1(VAR_24)) return FUNC_0(VAR_2);
            if (VAR_22 > VAR_8) return FUNC_0(VAR_2);
            FUNC_5(VAR_4, VAR_23, VAR_7, VAR_11, VAR_12, VAR_22);
            *VAR_5 = VAR_4;
            return VAR_24;
        }
    default :
        FUNC_7(0);
        return FUNC_0(VAR_0);
    }
}
