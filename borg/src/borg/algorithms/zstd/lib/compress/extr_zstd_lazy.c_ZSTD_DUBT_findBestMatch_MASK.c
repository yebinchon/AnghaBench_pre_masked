
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* base; int lowLimit; scalar_t__* dictBase; int dictLimit; } ;
struct TYPE_9__ {int hashLog; int chainLog; unsigned int searchLog; } ;
struct TYPE_8__ {int* hashTable; int* chainTable; int nextToUpdate; TYPE_1__ window; TYPE_3__ cParams; } ;
typedef TYPE_2__ ZSTD_matchState_t ;
typedef int ZSTD_dictMode_e ;
typedef TYPE_3__ ZSTD_compressionParameters ;
typedef int U32 ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (int,char*,int const,...) ;
 int FUNC_1 (int const,int const) ;
 size_t FUNC_2 (size_t,size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t FUNC_3 (TYPE_2__*,scalar_t__ const* const,scalar_t__ const* const,size_t*,size_t,int,int const,int const) ;
 int const VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__ const* const,scalar_t__ const*,scalar_t__ const* const) ;
 scalar_t__ FUNC_5 (scalar_t__ const* const,scalar_t__ const*,scalar_t__ const* const,scalar_t__ const* const,scalar_t__ const* const) ;
 int const VAR_3 ;
 int const VAR_4 ;
 size_t FUNC_6 (scalar_t__ const* const,int const,int const) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*,int,scalar_t__ const* const,int,int const,int const) ;
 int FUNC_9 (int) ;

__attribute__((used)) static size_t
FUNC_10(ZSTD_matchState_t* VAR_5,
                        const BYTE* const VAR_6, const BYTE* const VAR_7,
                        size_t* VAR_8,
                        U32 const VAR_9,
                        const ZSTD_dictMode_e VAR_10)
{
    const ZSTD_compressionParameters* const VAR_11 = &VAR_5->cParams;
    U32* const VAR_12 = VAR_5->hashTable;
    U32 const VAR_13 = VAR_11->hashLog;
    size_t const VAR_14 = FUNC_6(VAR_6, VAR_13, VAR_9);
    U32 VAR_15 = VAR_12[VAR_14];

    const BYTE* const VAR_16 = VAR_5->window.base;
    U32 const VAR_17 = (U32)(VAR_6-VAR_16);
    U32 const VAR_18 = VAR_5->window.lowLimit;

    U32* const VAR_19 = VAR_5->chainTable;
    U32 const VAR_20 = VAR_11->chainLog - 1;
    U32 const VAR_21 = (1 << VAR_20) - 1;
    U32 const VAR_22 = (VAR_21 >= VAR_17) ? 0 : VAR_17 - VAR_21;
    U32 const VAR_23 = FUNC_1(VAR_22, VAR_18);

    U32* VAR_24 = VAR_19 + 2*(VAR_15&VAR_21);
    U32* VAR_25 = VAR_19 + 2*(VAR_15&VAR_21) + 1;
    U32 VAR_26 = 1U << VAR_11->searchLog;
    U32 VAR_27 = VAR_26;
    U32 VAR_28 = 0;

    FUNC_0(7, "ZSTD_DUBT_findBestMatch (%u) ", VAR_17);
    FUNC_9(VAR_6 <= VAR_7-8);


    while ( (VAR_15 > VAR_23)
         && (*VAR_25 == VAR_1)
         && (VAR_27 > 1) ) {
        FUNC_0(8, "ZSTD_DUBT_findBestMatch: candidate %u is unsorted",
                    VAR_15);
        *VAR_25 = VAR_28;
        VAR_28 = VAR_15;
        VAR_15 = *VAR_24;
        VAR_24 = VAR_19 + 2*(VAR_15&VAR_21);
        VAR_25 = VAR_19 + 2*(VAR_15&VAR_21) + 1;
        VAR_27 --;
    }



    if ( (VAR_15 > VAR_23)
      && (*VAR_25==VAR_1) ) {
        FUNC_0(7, "ZSTD_DUBT_findBestMatch: nullify last unsorted candidate %u",
                    VAR_15);
        *VAR_24 = *VAR_25 = 0;
    }


    VAR_15 = VAR_28;
    while (VAR_15) {
        U32* const VAR_29 = VAR_19 + 2*(VAR_15&VAR_21) + 1;
        U32 const VAR_30 = *VAR_29;
        FUNC_8(VAR_5, VAR_15, VAR_7,
                         VAR_27, VAR_23, VAR_10);
        VAR_15 = VAR_30;
        VAR_27++;
    }


    { size_t VAR_31 = 0, VAR_32 = 0;
        const BYTE* const VAR_33 = VAR_5->window.dictBase;
        const U32 VAR_34 = VAR_5->window.dictLimit;
        const BYTE* const VAR_35 = VAR_33 + VAR_34;
        const BYTE* const VAR_36 = VAR_16 + VAR_34;
        U32* VAR_37 = VAR_19 + 2*(VAR_17&VAR_21);
        U32* VAR_38 = VAR_19 + 2*(VAR_17&VAR_21) + 1;
        U32 VAR_39 = VAR_17 + 8 + 1;
        U32 VAR_40;
        size_t VAR_41 = 0;

        VAR_15 = VAR_12[VAR_14];
        VAR_12[VAR_14] = VAR_17;

        while (VAR_26-- && (VAR_15 > VAR_18)) {
            U32* const VAR_42 = VAR_19 + 2*(VAR_15 & VAR_21);
            size_t VAR_43 = FUNC_2(VAR_31, VAR_32);
            const BYTE* VAR_44;

            if ((VAR_10 != VAR_4) || (VAR_15+VAR_43 >= VAR_34)) {
                VAR_44 = VAR_16 + VAR_15;
                VAR_43 += FUNC_4(VAR_6+VAR_43, VAR_44+VAR_43, VAR_7);
            } else {
                VAR_44 = VAR_33 + VAR_15;
                VAR_43 += FUNC_5(VAR_6+VAR_43, VAR_44+VAR_43, VAR_7, VAR_35, VAR_36);
                if (VAR_15+VAR_43 >= VAR_34)
                    VAR_44 = VAR_16 + VAR_15;
            }

            if (VAR_43 > VAR_41) {
                if (VAR_43 > VAR_39 - VAR_15)
                    VAR_39 = VAR_15 + (U32)VAR_43;
                if ( (4*(int)(VAR_43-VAR_41)) > (int)(FUNC_7(VAR_17-VAR_15+1) - FUNC_7((U32)VAR_8[0]+1)) )
                    VAR_41 = VAR_43, *VAR_8 = VAR_2 + VAR_17 - VAR_15;
                if (VAR_6+VAR_43 == VAR_7) {
                    if (VAR_10 == VAR_3) {
                        VAR_26 = 0;


                    }
                    break;
                }
            }

            if (VAR_44[VAR_43] < VAR_6[VAR_43]) {

                *VAR_37 = VAR_15;
                VAR_31 = VAR_43;
                if (VAR_15 <= VAR_22) { VAR_37=&VAR_40; break; }
                VAR_37 = VAR_42+1;
                VAR_15 = VAR_42[1];
            } else {

                *VAR_38 = VAR_15;
                VAR_32 = VAR_43;
                if (VAR_15 <= VAR_22) { VAR_38=&VAR_40; break; }
                VAR_38 = VAR_42;
                VAR_15 = VAR_42[0];
        } }

        *VAR_37 = *VAR_38 = 0;

        if (VAR_10 == VAR_3 && VAR_26) {
            VAR_41 = FUNC_3(
                    VAR_5, VAR_6, VAR_7,
                    VAR_8, VAR_41, VAR_26,
                    VAR_9, VAR_10);
        }

        FUNC_9(VAR_39 > VAR_17+8);
        VAR_5->nextToUpdate = VAR_39 - 8;
        if (VAR_41 >= VAR_0) {
            U32 const VAR_45 = VAR_17 - ((U32)*VAR_8 - VAR_2); (void)VAR_45;
            FUNC_0(8, "ZSTD_DUBT_findBestMatch(%u) : found match of length %u and offsetCode %u (pos %u)",
                        VAR_17, (U32)VAR_41, (U32)*VAR_8, VAR_45);
        }
        return VAR_41;
    }
}
