
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dictLimit; int * base; } ;
struct TYPE_7__ {int hashLog; int chainLog; } ;
struct TYPE_6__ {int* hashTable; int* chainTable; int nextToUpdate; TYPE_1__ window; TYPE_3__ cParams; } ;
typedef TYPE_2__ ZSTD_matchState_t ;
typedef TYPE_3__ ZSTD_compressionParameters ;
typedef int U32 ;
typedef int BYTE ;


 int FUNC_0 (int,char*,int,...) ;
 int VAR_0 ;
 size_t FUNC_1 (int const* const,int const,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(ZSTD_matchState_t* VAR_1,
                const BYTE* VAR_2, const BYTE* VAR_3,
                U32 VAR_4)
{
    const ZSTD_compressionParameters* const VAR_5 = &VAR_1->cParams;
    U32* const VAR_6 = VAR_1->hashTable;
    U32 const VAR_7 = VAR_5->hashLog;

    U32* const VAR_8 = VAR_1->chainTable;
    U32 const VAR_9 = VAR_5->chainLog - 1;
    U32 const VAR_10 = (1 << VAR_9) - 1;

    const BYTE* const VAR_11 = VAR_1->window.base;
    U32 const VAR_12 = (U32)(VAR_2 - VAR_11);
    U32 VAR_13 = VAR_1->nextToUpdate;

    if (VAR_13 != VAR_12)
        FUNC_0(7, "ZSTD_updateDUBT, from %u to %u (dictLimit:%u)",
                    VAR_13, VAR_12, VAR_1->window.dictLimit);
    FUNC_2(VAR_2 + 8 <= VAR_3);
    (void)VAR_3;

    FUNC_2(VAR_13 >= VAR_1->window.dictLimit);
    for ( ; VAR_13 < VAR_12 ; VAR_13++) {
        size_t const VAR_14 = FUNC_1(VAR_11 + VAR_13, VAR_7, VAR_4);
        U32 const VAR_15 = VAR_6[VAR_14];

        U32* const VAR_16 = VAR_8 + 2*(VAR_13&VAR_10);
        U32* const VAR_17 = VAR_16 + 1;

        FUNC_0(8, "ZSTD_updateDUBT: insert %u", VAR_13);
        VAR_6[VAR_14] = VAR_13;
        *VAR_16 = VAR_15;
        *VAR_17 = VAR_0;
    }
    VAR_1->nextToUpdate = VAR_12;
}
