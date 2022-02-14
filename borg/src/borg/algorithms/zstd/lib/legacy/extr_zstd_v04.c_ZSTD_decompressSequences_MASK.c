
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sequence ;
struct TYPE_9__ {int offset; } ;
typedef TYPE_1__ seq_t ;
struct TYPE_10__ {int prevOffset; int DStream; int stateML; int stateOffb; int stateLL; int const* dumpsEnd; int const* dumps; } ;
typedef TYPE_2__ seqState_t ;
struct TYPE_11__ {int litSize; scalar_t__ dictEnd; scalar_t__ vBase; scalar_t__ base; int * OffTable; int * MLTable; int * LLTable; int const* litPtr; } ;
typedef TYPE_3__ ZSTD_DCtx ;
typedef int U32 ;
typedef int const BYTE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *,int const*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 size_t FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 (int *,int *,int *) ;
 size_t FUNC_6 (int*,int const**,size_t*,int *,int *,int *,int const*,int) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 size_t FUNC_8 (int const*,int const* const,TYPE_1__,int const**,int const* const,int const* const,int const* const,int const* const) ;
 scalar_t__ FUNC_9 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int const*,int const*,size_t) ;
 int FUNC_11 (TYPE_1__*,int ,int) ;

__attribute__((used)) static size_t FUNC_12(
                               ZSTD_DCtx* VAR_3,
                               void* VAR_4, size_t VAR_5,
                         const void* VAR_6, size_t VAR_7)
{
    const BYTE* VAR_8 = (const BYTE*)VAR_6;
    const BYTE* const VAR_9 = VAR_8 + VAR_7;
    BYTE* const VAR_10 = (BYTE* const)VAR_4;
    BYTE* VAR_11 = VAR_10;
    BYTE* const VAR_12 = VAR_10 + VAR_5;
    size_t VAR_13, VAR_14;
    const BYTE* VAR_15 = VAR_3->litPtr;
    const BYTE* const VAR_16 = VAR_15 + VAR_3->litSize;
    int VAR_17;
    const BYTE* VAR_18;
    U32* VAR_19 = VAR_3->LLTable;
    U32* VAR_20 = VAR_3->MLTable;
    U32* VAR_21 = VAR_3->OffTable;
    const BYTE* const VAR_22 = (const BYTE*) (VAR_3->base);
    const BYTE* const VAR_23 = (const BYTE*) (VAR_3->vBase);
    const BYTE* const VAR_24 = (const BYTE*) (VAR_3->dictEnd);


    VAR_13 = FUNC_6(&VAR_17, &VAR_18, &VAR_14,
                                      VAR_19, VAR_20, VAR_21,
                                      VAR_8, VAR_9-VAR_8);
    if (FUNC_9(VAR_13)) return VAR_13;
    VAR_8 += VAR_13;


    {
        seq_t VAR_25;
        seqState_t VAR_26;

        FUNC_11(&VAR_25, 0, sizeof(VAR_25));
        VAR_25.offset = 4;
        VAR_26.dumps = VAR_18;
        VAR_26.dumpsEnd = VAR_18 + VAR_14;
        VAR_26.prevOffset = 4;
        VAR_13 = FUNC_1(&(VAR_26.DStream), VAR_8, VAR_9-VAR_8);
        if (FUNC_4(VAR_13)) return FUNC_3(VAR_1);
        FUNC_5(&(VAR_26.stateLL), &(VAR_26.DStream), VAR_19);
        FUNC_5(&(VAR_26.stateOffb), &(VAR_26.DStream), VAR_21);
        FUNC_5(&(VAR_26.stateML), &(VAR_26.DStream), VAR_20);

        for ( ; (FUNC_2(&(VAR_26.DStream)) <= VAR_0) && VAR_17 ; )
        {
            size_t VAR_27;
            VAR_17--;
            FUNC_7(&VAR_25, &VAR_26);
            VAR_27 = FUNC_8(VAR_11, VAR_12, VAR_25, &VAR_15, VAR_16, VAR_22, VAR_23, VAR_24);
            if (FUNC_9(VAR_27)) return VAR_27;
            VAR_11 += VAR_27;
        }


        if ( !FUNC_0(&(VAR_26.DStream)) ) return FUNC_3(VAR_1);


        {
            size_t VAR_28 = VAR_16 - VAR_15;
            if (VAR_15 > VAR_16) return FUNC_3(VAR_1);
            if (VAR_11+VAR_28 > VAR_12) return FUNC_3(VAR_2);
            if (VAR_11 != VAR_15) FUNC_10(VAR_11, VAR_15, VAR_28);
            VAR_11 += VAR_28;
        }
    }

    return VAR_11-VAR_10;
}
