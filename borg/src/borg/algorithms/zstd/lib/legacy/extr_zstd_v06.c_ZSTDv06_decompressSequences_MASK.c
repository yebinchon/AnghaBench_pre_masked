
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sequence ;
struct TYPE_9__ {void* offset; scalar_t__ matchLength; scalar_t__ litLength; } ;
typedef TYPE_1__ seq_t ;
struct TYPE_10__ {int DStream; int stateML; int stateOffb; int stateLL; void** prevOffset; } ;
typedef TYPE_2__ seqState_t ;
struct TYPE_11__ {int litSize; int flagRepeatTable; scalar_t__ dictEnd; scalar_t__ vBase; scalar_t__ base; int * OffTable; int * MLTable; int * LLTable; int * litPtr; } ;
typedef TYPE_3__ ZSTDv06_DCtx ;
typedef size_t U32 ;
typedef int FSEv06_DTable ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int *,int const*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (size_t const) ;
 int FUNC_4 (int *,int *,int *) ;
 void* VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_5 (int*,int *,int *,int *,int ,int const*,size_t) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 size_t FUNC_7 (int *,int * const,TYPE_1__,int const**,int const* const,int const* const,int const* const,int const* const) ;
 scalar_t__ FUNC_8 (size_t const) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int *,int const*,size_t const) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int FUNC_11 (char*,size_t,size_t,size_t,size_t) ;

__attribute__((used)) static size_t FUNC_12(
                               ZSTDv06_DCtx* VAR_5,
                               void* VAR_6, size_t VAR_7,
                         const void* VAR_8, size_t VAR_9)
{
    const BYTE* VAR_10 = (const BYTE*)VAR_8;
    const BYTE* const VAR_11 = VAR_10 + VAR_9;
    BYTE* const VAR_12 = (BYTE* const)VAR_6;
    BYTE* const VAR_13 = VAR_12 + VAR_7;
    BYTE* VAR_14 = VAR_12;
    const BYTE* VAR_15 = VAR_5->litPtr;
    const BYTE* const VAR_16 = VAR_15 + VAR_5->litSize;
    FSEv06_DTable* VAR_17 = VAR_5->LLTable;
    FSEv06_DTable* VAR_18 = VAR_5->MLTable;
    FSEv06_DTable* VAR_19 = VAR_5->OffTable;
    const BYTE* const VAR_20 = (const BYTE*) (VAR_5->base);
    const BYTE* const VAR_21 = (const BYTE*) (VAR_5->vBase);
    const BYTE* const VAR_22 = (const BYTE*) (VAR_5->dictEnd);
    int VAR_23;


    { size_t const VAR_24 = FUNC_5(&VAR_23, VAR_17, VAR_18, VAR_19, VAR_5->flagRepeatTable, VAR_10, VAR_9);
        if (FUNC_8(VAR_24)) return VAR_24;
        VAR_10 += VAR_24;
        VAR_5->flagRepeatTable = 0;
    }


    if (VAR_23) {
        seq_t VAR_25;
        seqState_t VAR_26;

        FUNC_10(&VAR_25, 0, sizeof(VAR_25));
        VAR_25.offset = VAR_1;
        { U32 VAR_27; for (VAR_27=0; VAR_27<VAR_2; VAR_27++) VAR_26.prevOffset[VAR_27] = VAR_1; }
        { size_t const VAR_28 = FUNC_0(&(VAR_26.DStream), VAR_10, VAR_11-VAR_10);
          if (FUNC_3(VAR_28)) return FUNC_2(VAR_3); }
        FUNC_4(&(VAR_26.stateLL), &(VAR_26.DStream), VAR_17);
        FUNC_4(&(VAR_26.stateOffb), &(VAR_26.DStream), VAR_19);
        FUNC_4(&(VAR_26.stateML), &(VAR_26.DStream), VAR_18);

        for ( ; (FUNC_1(&(VAR_26.DStream)) <= VAR_0) && VAR_23 ; ) {
            VAR_23--;
            FUNC_6(&VAR_25, &VAR_26);
            { size_t const VAR_29 = FUNC_7(VAR_14, VAR_13, VAR_25, &VAR_15, VAR_16, VAR_20, VAR_21, VAR_22);
                if (FUNC_8(VAR_29)) return VAR_29;
                VAR_14 += VAR_29;
        } }


        if (VAR_23) return FUNC_2(VAR_3);
    }


    { size_t const VAR_30 = VAR_16 - VAR_15;
        if (VAR_15 > VAR_16) return FUNC_2(VAR_3);
        if (VAR_14+VAR_30 > VAR_13) return FUNC_2(VAR_4);
        FUNC_9(VAR_14, VAR_15, VAR_30);
        VAR_14 += VAR_30;
    }

    return VAR_14-VAR_12;
}
