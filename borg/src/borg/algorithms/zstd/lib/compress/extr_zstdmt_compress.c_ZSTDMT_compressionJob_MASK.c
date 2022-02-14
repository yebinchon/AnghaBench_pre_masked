
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


struct TYPE_19__ {int * seq; } ;
typedef TYPE_4__ rawSeqStore_t ;
struct TYPE_20__ {int capacity; int * start; } ;
typedef TYPE_5__ buffer_t ;
struct TYPE_17__ {scalar_t__ enableLdm; } ;
struct TYPE_16__ {scalar_t__ checksumFlag; } ;
struct TYPE_21__ {TYPE_2__ ldmParams; TYPE_1__ fParams; } ;
typedef TYPE_6__ ZSTD_CCtx_params ;
typedef int ZSTD_CCtx ;
struct TYPE_15__ {size_t const size; int const* start; } ;
struct TYPE_18__ {scalar_t__ size; int * start; } ;
struct TYPE_22__ {scalar_t__ jobID; size_t const fullFrameSize; int firstJob; scalar_t__ cSize; size_t consumed; int lastJob; int job_mutex; int job_cond; TYPE_11__ src; int cctxPool; int seqPool; TYPE_3__ prefix; int serial; int * cdict; TYPE_5__ dstBuff; int bufPool; TYPE_6__ params; } ;
typedef TYPE_7__ ZSTDMT_jobDescription ;
typedef size_t const U64 ;
typedef size_t U32 ;
typedef int BYTE ;


 int FUNC_0 (int,char*,size_t,...) ;
 size_t const FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (size_t const) ;
 TYPE_5__ FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 TYPE_4__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int * const) ;
 int FUNC_7 (int ,TYPE_4__) ;
 int FUNC_8 (int ,scalar_t__,size_t const) ;
 int FUNC_9 (int ,int * const,TYPE_4__,TYPE_11__,scalar_t__) ;
 int VAR_1 ;
 size_t FUNC_10 (TYPE_6__*,int ,int) ;
 int FUNC_11 (int *) ;
 int VAR_2 ;
 size_t FUNC_12 (int * const,int *,scalar_t__,int ,int ,int *,TYPE_6__,size_t const) ;
 size_t FUNC_13 (int * const,int *,int,int const*,size_t const) ;
 size_t FUNC_14 (int * const,int *,int,int const*,size_t const) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_15 (int * const) ;
 scalar_t__ FUNC_16 (size_t const) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_20(void* VAR_7)
{
    ZSTDMT_jobDescription* const VAR_8 = (ZSTDMT_jobDescription*)VAR_7;
    ZSTD_CCtx_params VAR_9 = VAR_8->params;
    ZSTD_CCtx* const VAR_10 = FUNC_4(VAR_8->cctxPool);
    rawSeqStore_t VAR_11 = FUNC_5(VAR_8->seqPool);
    buffer_t VAR_12 = VAR_8->dstBuff;
    size_t VAR_13 = 0;


    if (VAR_10==((void*)0)) FUNC_2(FUNC_1(VAR_6));
    if (VAR_12.start == ((void*)0)) {
        VAR_12 = FUNC_3(VAR_8->bufPool);
        if (VAR_12.start==((void*)0)) FUNC_2(FUNC_1(VAR_6));
        VAR_8->dstBuff = VAR_12;
    }
    if (VAR_9.ldmParams.enableLdm && VAR_11.seq == ((void*)0))
        FUNC_2(FUNC_1(VAR_6));




    if (VAR_8->jobID != 0) VAR_9.fParams.checksumFlag = 0;

    VAR_9.ldmParams.enableLdm = 0;



    if (VAR_8->cdict) {
        size_t const VAR_14 = FUNC_12(VAR_10, ((void*)0), 0, VAR_3, VAR_5, VAR_8->cdict, VAR_9, VAR_8->fullFrameSize);
        FUNC_19(VAR_8->firstJob);
        if (FUNC_16(VAR_14)) FUNC_2(VAR_14);
    } else {
        U64 const VAR_15 = VAR_8->firstJob ? VAR_8->fullFrameSize : VAR_8->src.size;
        { size_t const VAR_16 = FUNC_10(&VAR_9, VAR_2, !VAR_8->firstJob);
            if (FUNC_16(VAR_16)) FUNC_2(VAR_16);
        }
        { size_t const VAR_17 = FUNC_12(VAR_10,
                                        VAR_8->prefix.start, VAR_8->prefix.size, VAR_4,
                                        VAR_5,
                                        ((void*)0),
                                        VAR_9, VAR_15);
            if (FUNC_16(VAR_17)) FUNC_2(VAR_17);
    } }


    FUNC_9(VAR_8->serial, VAR_10, VAR_11, VAR_8->src, VAR_8->jobID);

    if (!VAR_8->firstJob) {
        size_t const VAR_18 = FUNC_13(VAR_10, VAR_12.start, VAR_12.capacity, VAR_8->src.start, 0);
        if (FUNC_16(VAR_18)) FUNC_2(VAR_18);
        FUNC_0(5, "ZSTDMT_compressionJob: flush and overwrite %u bytes of frame header (not first job)", (U32)VAR_18);
        FUNC_15(VAR_10);
    }


    { size_t const VAR_19 = 4*VAR_1;
        int const VAR_20 = (int)((VAR_8->src.size + (VAR_19-1)) / VAR_19);
        const BYTE* VAR_21 = (const BYTE*) VAR_8->src.start;
        BYTE* const VAR_22 = (BYTE*)VAR_12.start;
        BYTE* VAR_23 = VAR_22;
        BYTE* VAR_24 = VAR_23 + VAR_12.capacity;
        int VAR_25;
        if (sizeof(size_t) > sizeof(int)) FUNC_19(VAR_8->src.size < ((size_t)VAR_0) * VAR_19);
        FUNC_0(5, "ZSTDMT_compressionJob: compress %u bytes in %i blocks", (U32)VAR_8->src.size, VAR_20);
        FUNC_19(VAR_8->cSize == 0);
        for (VAR_25 = 1; VAR_25 < VAR_20; VAR_25++) {
            size_t const VAR_26 = FUNC_13(VAR_10, VAR_23, VAR_24-VAR_23, VAR_21, VAR_19);
            if (FUNC_16(VAR_26)) FUNC_2(VAR_26);
            VAR_21 += VAR_19;
            VAR_23 += VAR_26; FUNC_19(VAR_23 < VAR_24);

            FUNC_11(&VAR_8->job_mutex);
            VAR_8->cSize += VAR_26;
            VAR_8->consumed = VAR_19 * VAR_25;
            FUNC_0(5, "ZSTDMT_compressionJob: compress new block : cSize==%u bytes (total: %u)",
                        (U32)VAR_26, (U32)VAR_8->cSize);
            FUNC_17(&VAR_8->job_cond);
            FUNC_18(&VAR_8->job_mutex);
        }

        FUNC_19(VAR_19 > 0);
        FUNC_19((VAR_19 & (VAR_19 - 1)) == 0);
        if ((VAR_20 > 0) | VAR_8->lastJob ) {
            size_t const VAR_27 = VAR_8->src.size & (VAR_19-1);
            size_t const VAR_28 = ((VAR_27==0) & (VAR_8->src.size>=VAR_19)) ? VAR_19 : VAR_27;
            size_t const VAR_29 = (VAR_8->lastJob) ?
                 FUNC_14 (VAR_10, VAR_23, VAR_24-VAR_23, VAR_21, VAR_28) :
                 FUNC_13(VAR_10, VAR_23, VAR_24-VAR_23, VAR_21, VAR_28);
            if (FUNC_16(VAR_29)) FUNC_2(VAR_29);
            VAR_13 = VAR_29;
    } }

_endJob:
    FUNC_8(VAR_8->serial, VAR_8->jobID, VAR_8->cSize);
    if (VAR_8->prefix.size > 0)
        FUNC_0(5, "Finished with prefix: %zx", (size_t)VAR_8->prefix.start);
    FUNC_0(5, "Finished with source: %zx", (size_t)VAR_8->src.start);

    FUNC_7(VAR_8->seqPool, VAR_11);
    FUNC_6(VAR_8->cctxPool, VAR_10);

    FUNC_11(&VAR_8->job_mutex);
    if (FUNC_16(VAR_8->cSize)) FUNC_19(VAR_13 == 0);
    VAR_8->cSize += VAR_13;
    VAR_8->consumed = VAR_8->src.size;
    FUNC_17(&VAR_8->job_cond);
    FUNC_18(&VAR_8->job_mutex);
}
