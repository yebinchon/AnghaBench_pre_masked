
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int dist_cache ;
struct TYPE_8__ {int alphabet_size_limit; } ;
struct TYPE_9__ {TYPE_1__ dist; int quality; int size_hint; int disable_literal_context_modeling; } ;
typedef int MetaBlockSplit ;
typedef int MemoryManager ;
typedef int ContextType ;
typedef int ContextLut ;
typedef int Command ;
typedef TYPE_2__ BrotliEncoderParams ;
typedef int BROTLI_BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,int const,size_t const,TYPE_2__*,int const,int const,int *,size_t const,int ,int *) ;
 int FUNC_4 (int *,int const*,int const,size_t const,int const,int const,int ,size_t,int const*,int *,size_t const,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int const*,int const,size_t const,size_t const,int const,int const,int const,TYPE_2__*,int ,int *,size_t const,int *,size_t*,int*) ;
 int FUNC_7 (int *,int const*,int const,size_t const,size_t const,int const,TYPE_2__ const*,int *,size_t const,size_t*,int*) ;
 int FUNC_8 (int *,int const*,int const,size_t const,size_t const,int const,TYPE_2__ const*,int *,size_t const,size_t*,int*) ;
 int FUNC_9 (int const,int const*,int const,size_t const,size_t const,size_t*,int*) ;
 int FUNC_10 (int,int,size_t*,int*) ;
 int FUNC_11 (int const*,int const,size_t const,size_t const,int ,int ,size_t*,int const**) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_14 (int const*,size_t const,int const,size_t const,size_t const,size_t const) ;
 int FUNC_15 (int const) ;
 int FUNC_16 (int*,int const*,int) ;

__attribute__((used)) static void FUNC_17(MemoryManager* VAR_4,
                                   const uint8_t* VAR_5,
                                   const size_t VAR_6,
                                   const uint64_t VAR_7,
                                   const size_t VAR_8,
                                   const BROTLI_BOOL VAR_9,
                                   ContextType VAR_10,
                                   const BrotliEncoderParams* VAR_11,
                                   const uint8_t VAR_12,
                                   const uint8_t VAR_13,
                                   const size_t VAR_14,
                                   const size_t VAR_15,
                                   Command* VAR_16,
                                   const int* VAR_17,
                                   int* VAR_18,
                                   size_t* VAR_19,
                                   uint8_t* VAR_20) {
  const uint32_t VAR_21 = FUNC_15(VAR_7);
  uint16_t VAR_22;
  uint8_t VAR_23;
  ContextLut VAR_24 = FUNC_0(VAR_10);
  BrotliEncoderParams VAR_25 = *VAR_11;

  if (VAR_8 == 0) {

    FUNC_10(2, 3, VAR_19, VAR_20);
    *VAR_19 = (*VAR_19 + 7u) & ~7u;
    return;
  }

  if (!FUNC_14(VAR_5, VAR_6, VAR_7, VAR_8,
                      VAR_14, VAR_15)) {


    FUNC_16(VAR_18, VAR_17, 4 * sizeof(VAR_18[0]));
    FUNC_9(VAR_9, VAR_5,
                                     VAR_21, VAR_6, VAR_8,
                                     VAR_19, VAR_20);
    return;
  }

  FUNC_1(*VAR_19 <= 14);
  VAR_22 = (uint16_t)((VAR_20[1] << 8) | VAR_20[0]);
  VAR_23 = (uint8_t)(*VAR_19);
  if (VAR_11->quality <= VAR_0) {
    FUNC_7(VAR_4, VAR_5, VAR_21,
                             VAR_8, VAR_6, VAR_9, VAR_11,
                             VAR_16, VAR_15,
                             VAR_19, VAR_20);
    if (FUNC_2(VAR_4)) return;
  } else if (VAR_11->quality < VAR_1) {
    FUNC_8(VAR_4, VAR_5, VAR_21,
                                VAR_8, VAR_6, VAR_9, VAR_11,
                                VAR_16, VAR_15,
                                VAR_19, VAR_20);
    if (FUNC_2(VAR_4)) return;
  } else {
    MetaBlockSplit VAR_26;
    FUNC_13(&VAR_26);
    if (VAR_11->quality < VAR_2) {
      size_t VAR_27 = 1;
      const uint32_t* VAR_28 = ((void*)0);
      if (!VAR_11->disable_literal_context_modeling) {
        FUNC_11(
            VAR_5, VAR_21, VAR_8, VAR_6, VAR_11->quality,
            VAR_11->size_hint, &VAR_27,
            &VAR_28);
      }
      FUNC_4(VAR_4, VAR_5, VAR_21, VAR_6,
          VAR_12, VAR_13, VAR_24, VAR_27,
          VAR_28, VAR_16, VAR_15, &VAR_26);
      if (FUNC_2(VAR_4)) return;
    } else {
      FUNC_3(VAR_4, VAR_5, VAR_21, VAR_6, &VAR_25,
                           VAR_12, VAR_13,
                           VAR_16, VAR_15,
                           VAR_10,
                           &VAR_26);
      if (FUNC_2(VAR_4)) return;
    }
    if (VAR_11->quality >= VAR_3) {



      FUNC_5(VAR_25.dist.alphabet_size_limit, &VAR_26);
    }
    FUNC_6(VAR_4, VAR_5, VAR_21, VAR_8, VAR_6,
                         VAR_12, VAR_13,
                         VAR_9,
                         &VAR_25,
                         VAR_10,
                         VAR_16, VAR_15,
                         &VAR_26,
                         VAR_19, VAR_20);
    if (FUNC_2(VAR_4)) return;
    FUNC_12(VAR_4, &VAR_26);
  }
  if (VAR_8 + 4 < (*VAR_19 >> 3)) {

    FUNC_16(VAR_18, VAR_17, 4 * sizeof(VAR_18[0]));
    VAR_20[0] = (uint8_t)VAR_22;
    VAR_20[1] = (uint8_t)(VAR_22 >> 8);
    *VAR_19 = VAR_23;
    FUNC_9(VAR_9, VAR_5,
                                     VAR_21, VAR_6,
                                     VAR_8, VAR_19, VAR_20);
  }
}
