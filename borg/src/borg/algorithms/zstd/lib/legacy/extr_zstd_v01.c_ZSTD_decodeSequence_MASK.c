
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t offset; size_t litLength; size_t matchLength; } ;
typedef TYPE_1__ seq_t ;
struct TYPE_6__ {size_t prevOffset; int const* dumps; int DStream; int stateML; int stateOffb; int stateLL; int const* dumpsEnd; } ;
typedef TYPE_2__ seqState_t ;
typedef int offset ;
typedef int U32 ;
typedef int const BYTE ;


 void* FUNC_0 (int *,int *) ;
 size_t FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int const*) ;

__attribute__((used)) static void FUNC_5(seq_t* VAR_3, seqState_t* VAR_4)
{
    size_t VAR_5;
    size_t VAR_6;
    size_t VAR_7;
    size_t VAR_8;
    const BYTE* VAR_9 = VAR_4->dumps;
    const BYTE* const VAR_10 = VAR_4->dumpsEnd;


    VAR_5 = FUNC_0(&(VAR_4->stateLL), &(VAR_4->DStream));
    VAR_6 = VAR_5 ? VAR_3->offset : VAR_4->prevOffset;
    VAR_4->prevOffset = VAR_3->offset;
    if (VAR_5 == VAR_1)
    {
        U32 VAR_11 = VAR_9<VAR_10 ? *VAR_9++ : 0;
        if (VAR_11 < 255) VAR_5 += VAR_11;
        else
        {
            if (VAR_9<=(VAR_10-3))
            {
                VAR_5 = FUNC_4(VAR_9) & 0xFFFFFF;
                VAR_9 += 3;
            }
        }
    }


    {
        U32 VAR_12, VAR_13;
        VAR_12 = FUNC_0(&(VAR_4->stateOffb), &(VAR_4->DStream));
        if (FUNC_3()) FUNC_2(&(VAR_4->DStream));
        VAR_13 = VAR_12 - 1;
        if (VAR_12==0) VAR_13 = 0;
        VAR_7 = ((size_t)1 << (VAR_13 & ((sizeof(VAR_7)*8)-1))) + FUNC_1(&(VAR_4->DStream), VAR_13);
        if (FUNC_3()) FUNC_2(&(VAR_4->DStream));
        if (VAR_12==0) VAR_7 = VAR_6;
    }


    VAR_8 = FUNC_0(&(VAR_4->stateML), &(VAR_4->DStream));
    if (VAR_8 == VAR_2)
    {
        U32 VAR_14 = VAR_9<VAR_10 ? *VAR_9++ : 0;
        if (VAR_14 < 255) VAR_8 += VAR_14;
        else
        {
            if (VAR_9<=(VAR_10-3))
            {
                VAR_8 = FUNC_4(VAR_9) & 0xFFFFFF;
                VAR_9 += 3;
            }
        }
    }
    VAR_8 += VAR_0;


    VAR_3->litLength = VAR_5;
    VAR_3->offset = VAR_7;
    VAR_3->matchLength = VAR_8;
    VAR_4->dumps = VAR_9;
}
