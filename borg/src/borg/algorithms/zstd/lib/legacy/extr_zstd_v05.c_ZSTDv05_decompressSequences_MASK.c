
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sequence ;
struct TYPE_9__ {void* offset; } ;
typedef TYPE_1__ seq_t ;
struct TYPE_10__ {int DStream; int stateML; int stateOffb; int stateLL; void* prevOffset; int const* dumpsEnd; int const* dumps; } ;
typedef TYPE_2__ seqState_t ;
struct TYPE_11__ {int litSize; unsigned int* LLTable; unsigned int* MLTable; unsigned int* OffTable; int flagStaticTables; scalar_t__ dictEnd; scalar_t__ vBase; scalar_t__ base; int * litPtr; } ;
typedef TYPE_3__ ZSTDv05_DCtx ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int *,int const*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (int *,int *,unsigned int*) ;
 void* VAR_1 ;
 size_t FUNC_5 (int*,int const**,size_t*,unsigned int*,unsigned int*,unsigned int*,int const*,size_t,int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 size_t FUNC_7 (int *,int * const,TYPE_1__,int const**,int const* const,int const* const,int const* const,int const* const) ;
 scalar_t__ FUNC_8 (size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int *,int const*,size_t) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;

__attribute__((used)) static size_t FUNC_11(
                               ZSTDv05_DCtx* VAR_4,
                               void* VAR_5, size_t VAR_6,
                         const void* VAR_7, size_t VAR_8)
{
    const BYTE* VAR_9 = (const BYTE*)VAR_7;
    const BYTE* const VAR_10 = VAR_9 + VAR_8;
    BYTE* const VAR_11 = (BYTE* const)VAR_5;
    BYTE* VAR_12 = VAR_11;
    BYTE* const VAR_13 = VAR_11 + VAR_6;
    size_t VAR_14, VAR_15=0;
    const BYTE* VAR_16 = VAR_4->litPtr;
    const BYTE* const VAR_17 = VAR_16 + VAR_4->litSize;
    int VAR_18=0;
    const BYTE* VAR_19 = ((void*)0);
    unsigned* VAR_20 = VAR_4->LLTable;
    unsigned* VAR_21 = VAR_4->MLTable;
    unsigned* VAR_22 = VAR_4->OffTable;
    const BYTE* const VAR_23 = (const BYTE*) (VAR_4->base);
    const BYTE* const VAR_24 = (const BYTE*) (VAR_4->vBase);
    const BYTE* const VAR_25 = (const BYTE*) (VAR_4->dictEnd);


    VAR_14 = FUNC_5(&VAR_18, &VAR_19, &VAR_15,
                                      VAR_20, VAR_21, VAR_22,
                                      VAR_9, VAR_8, VAR_4->flagStaticTables);
    if (FUNC_8(VAR_14)) return VAR_14;
    VAR_9 += VAR_14;


    if (VAR_18) {
        seq_t VAR_26;
        seqState_t VAR_27;

        FUNC_10(&VAR_26, 0, sizeof(VAR_26));
        VAR_26.offset = VAR_1;
        VAR_27.dumps = VAR_19;
        VAR_27.dumpsEnd = VAR_19 + VAR_15;
        VAR_27.prevOffset = VAR_1;
        VAR_14 = FUNC_0(&(VAR_27.DStream), VAR_9, VAR_10-VAR_9);
        if (FUNC_3(VAR_14)) return FUNC_2(VAR_2);
        FUNC_4(&(VAR_27.stateLL), &(VAR_27.DStream), VAR_20);
        FUNC_4(&(VAR_27.stateOffb), &(VAR_27.DStream), VAR_22);
        FUNC_4(&(VAR_27.stateML), &(VAR_27.DStream), VAR_21);

        for ( ; (FUNC_1(&(VAR_27.DStream)) <= VAR_0) && VAR_18 ; ) {
            size_t VAR_28;
            VAR_18--;
            FUNC_6(&VAR_26, &VAR_27);
            VAR_28 = FUNC_7(VAR_12, VAR_13, VAR_26, &VAR_16, VAR_17, VAR_23, VAR_24, VAR_25);
            if (FUNC_8(VAR_28)) return VAR_28;
            VAR_12 += VAR_28;
        }


        if (VAR_18) return FUNC_2(VAR_2);
    }


    {
        size_t VAR_29 = VAR_17 - VAR_16;
        if (VAR_16 > VAR_17) return FUNC_2(VAR_2);
        if (VAR_12+VAR_29 > VAR_13) return FUNC_2(VAR_3);
        FUNC_9(VAR_12, VAR_16, VAR_29);
        VAR_12 += VAR_29;
    }

    return VAR_12-VAR_11;
}
