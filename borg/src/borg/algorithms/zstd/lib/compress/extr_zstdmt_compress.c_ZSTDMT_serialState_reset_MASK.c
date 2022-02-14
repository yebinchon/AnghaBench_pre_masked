
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_18__ {unsigned int hashLog; unsigned int bucketSizeLog; int hashRateLog; scalar_t__ enableLdm; int minMatchLength; } ;
struct TYPE_15__ {scalar_t__ checksumFlag; } ;
struct TYPE_14__ {unsigned int windowLog; } ;
struct TYPE_19__ {scalar_t__ jobSize; TYPE_4__ ldmParams; int customMem; TYPE_1__ fParams; TYPE_10__ cParams; } ;
struct TYPE_16__ {TYPE_4__* bucketOffsets; TYPE_4__* hashTable; int window; int hashPower; } ;
struct TYPE_17__ {TYPE_5__ params; TYPE_2__ ldmState; int ldmWindow; int xxhState; scalar_t__ nextJobID; } ;
typedef TYPE_3__ serialState_t ;
typedef TYPE_4__ ldmEntry_t ;
typedef int ZSTD_customMem ;
typedef TYPE_5__ ZSTD_CCtx_params ;
typedef int ZSTDMT_seqPool ;
typedef scalar_t__ U32 ;
typedef TYPE_4__ BYTE ;


 int FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_10__*) ;
 int FUNC_5 (TYPE_4__,size_t) ;
 scalar_t__ FUNC_6 (size_t const,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_4__*,int ,size_t const) ;

__attribute__((used)) static int FUNC_11(serialState_t* VAR_0, ZSTDMT_seqPool* VAR_1, ZSTD_CCtx_params VAR_2, size_t VAR_3)
{

    if (VAR_2.ldmParams.enableLdm) {
        FUNC_0(4, "LDM window size = %u KB", (1U << VAR_2.cParams.windowLog) >> 10);
        FUNC_4(&VAR_2.ldmParams, &VAR_2.cParams);
        FUNC_9(VAR_2.ldmParams.hashLog >= VAR_2.ldmParams.bucketSizeLog);
        FUNC_9(VAR_2.ldmParams.hashRateLog < 32);
        VAR_0->ldmState.hashPower =
                FUNC_7(VAR_2.ldmParams.minMatchLength);
    } else {
        FUNC_10(&VAR_2.ldmParams, 0, sizeof(VAR_2.ldmParams));
    }
    VAR_0->nextJobID = 0;
    if (VAR_2.fParams.checksumFlag)
        FUNC_1(&VAR_0->xxhState, 0);
    if (VAR_2.ldmParams.enableLdm) {
        ZSTD_customMem VAR_4 = VAR_2.customMem;
        unsigned const VAR_5 = VAR_2.ldmParams.hashLog;
        size_t const VAR_6 = ((size_t)1 << VAR_5) * sizeof(ldmEntry_t);
        unsigned const VAR_7 =
            VAR_2.ldmParams.hashLog - VAR_2.ldmParams.bucketSizeLog;
        size_t const VAR_8 = (size_t)1 << VAR_7;
        unsigned const VAR_9 =
            VAR_0->params.ldmParams.hashLog -
            VAR_0->params.ldmParams.bucketSizeLog;

        FUNC_2(VAR_1, FUNC_5(VAR_2.ldmParams, VAR_3));

        FUNC_8(&VAR_0->ldmState.window);
        VAR_0->ldmWindow = VAR_0->ldmState.window;

        if (VAR_0->ldmState.hashTable == ((void*)0) || VAR_0->params.ldmParams.hashLog < VAR_5) {
            FUNC_3(VAR_0->ldmState.hashTable, VAR_4);
            VAR_0->ldmState.hashTable = (ldmEntry_t*)FUNC_6(VAR_6, VAR_4);
        }
        if (VAR_0->ldmState.bucketOffsets == ((void*)0) || VAR_9 < VAR_7) {
            FUNC_3(VAR_0->ldmState.bucketOffsets, VAR_4);
            VAR_0->ldmState.bucketOffsets = (BYTE*)FUNC_6(VAR_8, VAR_4);
        }
        if (!VAR_0->ldmState.hashTable || !VAR_0->ldmState.bucketOffsets)
            return 1;

        FUNC_10(VAR_0->ldmState.hashTable, 0, VAR_6);
        FUNC_10(VAR_0->ldmState.bucketOffsets, 0, VAR_8);
    }
    VAR_0->params = VAR_2;
    VAR_0->params.jobSize = (U32)VAR_3;
    return 0;
}
