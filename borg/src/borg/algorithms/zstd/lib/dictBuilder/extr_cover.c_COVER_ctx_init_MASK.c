
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int U64 ;
typedef unsigned int U32 ;
struct TYPE_7__ {size_t const* samplesSizes; unsigned int nbSamples; unsigned int nbTrainSamples; unsigned int nbTestSamples; size_t suffixSize; unsigned int* suffix; unsigned int* dmerAt; size_t* offsets; unsigned int* freqs; unsigned int d; int * samples; } ;
typedef TYPE_1__ COVER_ctx_t ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 (unsigned int*,unsigned int,int,TYPE_1__*,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t const FUNC_2 (size_t const*,unsigned int const) ;
 int FUNC_3 (int,char*,...) ;
 size_t const FUNC_4 (unsigned int,int) ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_5 (unsigned int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (unsigned int*,unsigned int,int,int *) ;
 int FUNC_8 (unsigned int*,unsigned int,int,int *) ;

__attribute__((used)) static int FUNC_9(COVER_ctx_t *VAR_7, const void *VAR_8,
                          const size_t *VAR_9, unsigned VAR_10,
                          unsigned VAR_11, double VAR_12) {
  const BYTE *const VAR_13 = (const BYTE *)VAR_8;
  const size_t VAR_14 = FUNC_2(VAR_9, VAR_10);

  const unsigned VAR_15 = VAR_12 < 1.0 ? (unsigned)((double)VAR_10 * VAR_12) : VAR_10;
  const unsigned VAR_16 = VAR_12 < 1.0 ? VAR_10 - VAR_15 : VAR_10;
  const size_t VAR_17 = VAR_12 < 1.0 ? FUNC_2(VAR_9, VAR_15) : VAR_14;
  const size_t VAR_18 = VAR_12 < 1.0 ? FUNC_2(VAR_9 + VAR_15, VAR_16) : VAR_14;

  if (VAR_14 < FUNC_4(VAR_11, sizeof(U64)) ||
      VAR_14 >= (size_t)VAR_0) {
    FUNC_3(1, "Total samples size is too large (%u MB), maximum size is %u MB\n",
                 (unsigned)(VAR_14>>20), (VAR_0 >> 20));
    return 0;
  }

  if (VAR_15 < 5) {
    FUNC_3(1, "Total number of training samples is %u and is invalid.", VAR_15);
    return 0;
  }

  if (VAR_16 < 1) {
    FUNC_3(1, "Total number of testing samples is %u and is invalid.", VAR_16);
    return 0;
  }

  FUNC_6(VAR_7, 0, sizeof(*VAR_7));
  FUNC_3(2, "Training on %u samples of total size %u\n", VAR_15,
               (unsigned)VAR_17);
  FUNC_3(2, "Testing on %u samples of total size %u\n", VAR_16,
               (unsigned)VAR_18);
  VAR_7->samples = VAR_13;
  VAR_7->samplesSizes = VAR_9;
  VAR_7->nbSamples = VAR_10;
  VAR_7->nbTrainSamples = VAR_15;
  VAR_7->nbTestSamples = VAR_16;

  VAR_7->suffixSize = VAR_17 - FUNC_4(VAR_11, sizeof(U64)) + 1;
  VAR_7->suffix = (U32 *)FUNC_5(VAR_7->suffixSize * sizeof(U32));

  VAR_7->dmerAt = (U32 *)FUNC_5(VAR_7->suffixSize * sizeof(U32));

  VAR_7->offsets = (size_t *)FUNC_5((VAR_10 + 1) * sizeof(size_t));
  if (!VAR_7->suffix || !VAR_7->dmerAt || !VAR_7->offsets) {
    FUNC_3(1, "Failed to allocate scratch buffers\n");
    FUNC_0(VAR_7);
    return 0;
  }
  VAR_7->freqs = ((void*)0);
  VAR_7->d = VAR_11;


  {
    U32 VAR_19;
    VAR_7->offsets[0] = 0;
    for (VAR_19 = 1; VAR_19 <= VAR_10; ++VAR_19) {
      VAR_7->offsets[VAR_19] = VAR_7->offsets[VAR_19 - 1] + VAR_9[VAR_19 - 1];
    }
  }
  FUNC_3(2, "Constructing partial suffix array\n");
  {




    U32 VAR_20;
    for (VAR_20 = 0; VAR_20 < VAR_7->suffixSize; ++VAR_20) {
      VAR_7->suffix[VAR_20] = VAR_20;
    }



    VAR_6 = VAR_7;




    FUNC_8(VAR_7->suffix, VAR_7->suffixSize, sizeof(U32),
          (VAR_7->d <= 8 ? &VAR_5 : &VAR_4));

  }
  FUNC_3(2, "Computing frequencies\n");







  FUNC_1(VAR_7->suffix, VAR_7->suffixSize, sizeof(U32), VAR_7,
                (VAR_7->d <= 8 ? &VAR_2 : &VAR_1), &VAR_3);
  VAR_7->freqs = VAR_7->suffix;
  VAR_7->suffix = ((void*)0);
  return 1;
}
