
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_22__ {int zParams; } ;
typedef TYPE_2__ ZDICT_cover_params_t ;
typedef int U64 ;
struct TYPE_23__ {size_t dictBufferCapacity; int best; TYPE_2__ parameters; TYPE_6__* ctx; } ;
typedef TYPE_3__ U32 ;
typedef TYPE_3__ U16 ;
struct TYPE_21__ {int finalize; } ;
struct TYPE_24__ {int f; int nbTrainSamples; int nbSamples; int offsets; int samples; int samplesSizes; TYPE_1__ accelParams; int freqs; } ;
typedef TYPE_3__ FASTCOVER_tryParameters_data_t ;
typedef TYPE_6__ FASTCOVER_ctx_t ;
typedef TYPE_3__ BYTE ;


 int FUNC_0 (int ,size_t,TYPE_2__ const,TYPE_3__* const,size_t) ;
 size_t FUNC_1 (TYPE_2__ const,int ,int ,int ,int,int ,TYPE_3__* const,size_t) ;
 int FUNC_2 (int,char*) ;
 size_t FUNC_3 (int ) ;
 size_t FUNC_4 (TYPE_6__ const* const,TYPE_3__*,TYPE_3__* const,size_t,TYPE_2__ const,TYPE_3__*) ;
 int VAR_0 ;
 size_t FUNC_5 (TYPE_3__* const,size_t,TYPE_3__* const,size_t,int ,int ,unsigned int const,int ) ;
 scalar_t__ FUNC_6 (size_t) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (TYPE_3__* const) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_11(void *VAR_1)
{

  FASTCOVER_tryParameters_data_t *const VAR_2 = (FASTCOVER_tryParameters_data_t *)VAR_1;
  const FASTCOVER_ctx_t *const VAR_3 = VAR_2->ctx;
  const ZDICT_cover_params_t VAR_4 = VAR_2->parameters;
  size_t VAR_5 = VAR_2->dictBufferCapacity;
  size_t VAR_6 = FUNC_3(VAR_0);

  U16* VAR_7 = (U16 *)FUNC_7(((U64)1 << VAR_3->f), sizeof(U16));

  BYTE *const VAR_8 = (BYTE * const)FUNC_9(VAR_5);
  U32 *VAR_9 = (U32*) FUNC_9(((U64)1 << VAR_3->f) * sizeof(U32));
  if (!VAR_7 || !VAR_8 || !VAR_9) {
    FUNC_2(1, "Failed to allocate buffers: out of memory\n");
    goto _cleanup;
  }

  FUNC_10(VAR_9, VAR_3->freqs, ((U64)1 << VAR_3->f) * sizeof(U32));

  { const size_t VAR_10 = FUNC_4(VAR_3, VAR_9, VAR_8, VAR_5,
                                                  VAR_4, VAR_7);
    const unsigned VAR_11 = (unsigned)(VAR_3->nbTrainSamples * VAR_3->accelParams.finalize / 100);
    VAR_5 = FUNC_5(
        VAR_8, VAR_5, VAR_8 + VAR_10, VAR_5 - VAR_10,
        VAR_3->samples, VAR_3->samplesSizes, VAR_11, VAR_4.zParams);
    if (FUNC_6(VAR_5)) {
      FUNC_2(1, "Failed to finalize dictionary\n");
      goto _cleanup;
    }
  }

  VAR_6 = FUNC_1(VAR_4, VAR_3->samplesSizes,
                                                       VAR_3->samples, VAR_3->offsets,
                                                       VAR_3->nbTrainSamples, VAR_3->nbSamples,
                                                       VAR_8, VAR_5);
_cleanup:
  FUNC_0(VAR_2->best, VAR_6, VAR_4, VAR_8,
                    VAR_5);
  FUNC_8(VAR_2);
  FUNC_8(VAR_7);
  FUNC_8(VAR_8);
  FUNC_8(VAR_9);
}
