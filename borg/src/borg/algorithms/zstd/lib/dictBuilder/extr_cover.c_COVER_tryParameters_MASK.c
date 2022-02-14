
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int zParams; scalar_t__ d; scalar_t__ k; } ;
typedef TYPE_1__ ZDICT_cover_params_t ;
struct TYPE_19__ {size_t dictBufferCapacity; int best; TYPE_1__ parameters; TYPE_4__* ctx; } ;
typedef TYPE_2__ U32 ;
struct TYPE_20__ {int suffixSize; int nbSamples; scalar_t__ nbTrainSamples; int offsets; int samples; int samplesSizes; int freqs; } ;
typedef TYPE_2__ COVER_tryParameters_data_t ;
typedef int COVER_map_t ;
typedef TYPE_4__ COVER_ctx_t ;
typedef TYPE_2__ BYTE ;


 int FUNC_0 (int ,size_t,TYPE_1__ const,TYPE_2__* const,size_t) ;
 size_t FUNC_1 (TYPE_4__ const* const,TYPE_2__*,int *,TYPE_2__* const,size_t,TYPE_1__ const) ;
 size_t FUNC_2 (TYPE_1__ const,int ,int ,int ,scalar_t__,int ,TYPE_2__* const,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int,char*) ;
 size_t FUNC_6 (int ) ;
 int VAR_0 ;
 size_t FUNC_7 (TYPE_2__* const,size_t,TYPE_2__* const,size_t,int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_8 (size_t) ;
 int FUNC_9 (TYPE_2__* const) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_12(void *VAR_1) {

  COVER_tryParameters_data_t *const VAR_2 = (COVER_tryParameters_data_t *)VAR_1;
  const COVER_ctx_t *const VAR_3 = VAR_2->ctx;
  const ZDICT_cover_params_t VAR_4 = VAR_2->parameters;
  size_t VAR_5 = VAR_2->dictBufferCapacity;
  size_t VAR_6 = FUNC_6(VAR_0);

  COVER_map_t VAR_7;
  BYTE *const VAR_8 = (BYTE * const)FUNC_10(VAR_5);
  U32 *VAR_9 = (U32 *)FUNC_10(VAR_3->suffixSize * sizeof(U32));
  if (!FUNC_4(&VAR_7, VAR_4.k - VAR_4.d + 1)) {
    FUNC_5(1, "Failed to allocate dmer map: out of memory\n");
    goto _cleanup;
  }
  if (!VAR_8 || !VAR_9) {
    FUNC_5(1, "Failed to allocate buffers: out of memory\n");
    goto _cleanup;
  }

  FUNC_11(VAR_9, VAR_3->freqs, VAR_3->suffixSize * sizeof(U32));

  {
    const size_t VAR_10 = FUNC_1(VAR_3, VAR_9, &VAR_7, VAR_8,
                                              VAR_5, VAR_4);
    VAR_5 = FUNC_7(
        VAR_8, VAR_5, VAR_8 + VAR_10, VAR_5 - VAR_10,
        VAR_3->samples, VAR_3->samplesSizes, (unsigned)VAR_3->nbTrainSamples,
        VAR_4.zParams);
    if (FUNC_8(VAR_5)) {
      FUNC_5(1, "Failed to finalize dictionary\n");
      goto _cleanup;
    }
  }

  VAR_6 = FUNC_2(VAR_4, VAR_3->samplesSizes,
                                                       VAR_3->samples, VAR_3->offsets,
                                                       VAR_3->nbTrainSamples, VAR_3->nbSamples,
                                                       VAR_8, VAR_5);

_cleanup:
  FUNC_0(VAR_2->best, VAR_6, VAR_4, VAR_8,
                    VAR_5);
  FUNC_9(VAR_2);
  FUNC_3(&VAR_7);
  if (VAR_8) {
    FUNC_9(VAR_8);
  }
  if (VAR_9) {
    FUNC_9(VAR_9);
  }
}
