
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_20__ {scalar_t__ alphabet_size_max; scalar_t__ alphabet_size_limit; int distance_postfix_bits; int num_direct_distance_codes; } ;
struct TYPE_19__ {TYPE_7__ dist; } ;
struct TYPE_18__ {size_t cmd_prefix_; size_t insert_len_; int dist_prefix_; int dist_extra_; } ;
struct TYPE_16__ {size_t num_types; int num_blocks; int lengths; int types; } ;
struct TYPE_15__ {size_t num_types; int num_blocks; int lengths; int types; } ;
struct TYPE_14__ {size_t num_types; int num_blocks; int lengths; int types; } ;
struct TYPE_17__ {scalar_t__ literal_context_map_size; scalar_t__ distance_context_map_size; int distance_context_map; int literal_context_map; int distance_histograms_size; int distance_histograms; int command_histograms_size; int command_histograms; int literal_histograms_size; int literal_histograms; TYPE_3__ literal_split; TYPE_2__ distance_split; TYPE_1__ command_split; } ;
typedef TYPE_4__ MetaBlockSplit ;
typedef int MemoryManager ;
typedef int ContextType ;
typedef int ContextLut ;
typedef TYPE_5__ Command ;
typedef TYPE_6__ BrotliEncoderParams ;
typedef TYPE_7__ BrotliDistanceParams ;
typedef int BlockEncoder ;
typedef scalar_t__ BROTLI_BOOL ;


 int FUNC_0 (int *,int,int ) ;
 size_t FUNC_1 (size_t,size_t,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (scalar_t__,int,size_t*,size_t*) ;
 int FUNC_8 (int *,int,size_t*,size_t*) ;
 int FUNC_9 (int *,int *,int ,int ,scalar_t__,int,size_t*,size_t*) ;
 int FUNC_10 (int *,int *,int ,int ,scalar_t__,int,size_t*,size_t*) ;
 int FUNC_11 (int *,int *,int ,int ,scalar_t__,int,size_t*,size_t*) ;
 int FUNC_12 (int *,int *) ;
 scalar_t__ FUNC_13 (TYPE_5__ const*) ;
 size_t FUNC_14 (TYPE_5__ const*) ;
 int FUNC_15 (int *,int ,scalar_t__,int ,int,size_t*,size_t*) ;
 int VAR_5 ;
 int FUNC_16 (int *,scalar_t__,size_t,int ,int ,int ) ;
 int FUNC_17 (size_t*,size_t*) ;
 int VAR_6 ;
 int FUNC_18 (TYPE_5__ const*,size_t*,size_t*) ;
 int FUNC_19 (scalar_t__,size_t,size_t*,size_t*) ;
 int FUNC_20 (int *,size_t const,size_t*,size_t*) ;
 int FUNC_21 (int *,size_t,size_t,int ,size_t*,size_t*,int ) ;
 int FUNC_22 (int ,int ,int,size_t*,size_t*) ;
 int VAR_7 ;

void FUNC_23(MemoryManager* VAR_8,
    const uint8_t* VAR_9, size_t VAR_10, size_t VAR_11, size_t VAR_12,
    uint8_t VAR_13, uint8_t VAR_14, BROTLI_BOOL VAR_15,
    const BrotliEncoderParams* VAR_16, ContextType VAR_17,
    const Command* VAR_18, size_t VAR_19, const MetaBlockSplit* VAR_20,
    size_t* VAR_21, uint8_t* VAR_22) {

  size_t VAR_23 = VAR_10;
  size_t VAR_24;
  uint32_t VAR_25 = VAR_16->dist.alphabet_size_max;
  uint32_t VAR_26 = VAR_16->dist.alphabet_size_limit;
  VAR_5* VAR_7;
  ContextLut VAR_27 = FUNC_2(VAR_17);
  BlockEncoder VAR_28;
  BlockEncoder VAR_29;
  BlockEncoder VAR_30;
  const BrotliDistanceParams* VAR_31 = &VAR_16->dist;
  FUNC_3(
      VAR_26 <= VAR_3);

  FUNC_19(VAR_15, VAR_11, VAR_21, VAR_22);

  VAR_7 = FUNC_0(VAR_8, VAR_5, VAR_6);
  if (FUNC_6(VAR_8) || FUNC_5(VAR_7)) return;
  FUNC_16(&VAR_28, VAR_4,
      VAR_20->literal_split.num_types, VAR_20->literal_split.types,
      VAR_20->literal_split.lengths, VAR_20->literal_split.num_blocks);
  FUNC_16(&VAR_29, VAR_2,
      VAR_20->command_split.num_types, VAR_20->command_split.types,
      VAR_20->command_split.lengths, VAR_20->command_split.num_blocks);
  FUNC_16(&VAR_30, VAR_26,
      VAR_20->distance_split.num_types, VAR_20->distance_split.types,
      VAR_20->distance_split.lengths, VAR_20->distance_split.num_blocks);

  FUNC_8(&VAR_28, VAR_7, VAR_21, VAR_22);
  FUNC_8(&VAR_29, VAR_7, VAR_21, VAR_22);
  FUNC_8(
      &VAR_30, VAR_7, VAR_21, VAR_22);

  FUNC_7(2, VAR_31->distance_postfix_bits, VAR_21, VAR_22);
  FUNC_7(
      4, VAR_31->num_direct_distance_codes >> VAR_31->distance_postfix_bits,
      VAR_21, VAR_22);
  for (VAR_24 = 0; VAR_24 < VAR_20->literal_split.num_types; ++VAR_24) {
    FUNC_7(2, VAR_17, VAR_21, VAR_22);
  }

  if (VAR_20->literal_context_map_size == 0) {
    FUNC_22(VAR_20->literal_histograms_size,
        VAR_1, VAR_7, VAR_21, VAR_22);
  } else {
    FUNC_15(VAR_8,
        VAR_20->literal_context_map, VAR_20->literal_context_map_size,
        VAR_20->literal_histograms_size, VAR_7, VAR_21, VAR_22);
    if (FUNC_6(VAR_8)) return;
  }

  if (VAR_20->distance_context_map_size == 0) {
    FUNC_22(VAR_20->distance_histograms_size,
        VAR_0, VAR_7, VAR_21, VAR_22);
  } else {
    FUNC_15(VAR_8,
        VAR_20->distance_context_map, VAR_20->distance_context_map_size,
        VAR_20->distance_histograms_size, VAR_7, VAR_21, VAR_22);
    if (FUNC_6(VAR_8)) return;
  }

  FUNC_11(VAR_8, &VAR_28, VAR_20->literal_histograms,
      VAR_20->literal_histograms_size, VAR_4, VAR_7,
      VAR_21, VAR_22);
  if (FUNC_6(VAR_8)) return;
  FUNC_9(VAR_8, &VAR_29, VAR_20->command_histograms,
      VAR_20->command_histograms_size, VAR_2, VAR_7,
      VAR_21, VAR_22);
  if (FUNC_6(VAR_8)) return;
  FUNC_10(VAR_8, &VAR_30, VAR_20->distance_histograms,
      VAR_20->distance_histograms_size, VAR_25, VAR_7,
      VAR_21, VAR_22);
  if (FUNC_6(VAR_8)) return;
  FUNC_4(VAR_8, VAR_7);

  for (VAR_24 = 0; VAR_24 < VAR_19; ++VAR_24) {
    const Command VAR_32 = VAR_18[VAR_24];
    size_t VAR_33 = VAR_32.cmd_prefix_;
    FUNC_20(&VAR_29, VAR_33, VAR_21, VAR_22);
    FUNC_18(&VAR_32, VAR_21, VAR_22);
    if (VAR_20->literal_context_map_size == 0) {
      size_t VAR_34;
      for (VAR_34 = VAR_32.insert_len_; VAR_34 != 0; --VAR_34) {
        FUNC_20(&VAR_28, VAR_9[VAR_23 & VAR_12], VAR_21, VAR_22);
        ++VAR_23;
      }
    } else {
      size_t VAR_35;
      for (VAR_35 = VAR_32.insert_len_; VAR_35 != 0; --VAR_35) {
        size_t VAR_36 =
            FUNC_1(VAR_13, VAR_14, VAR_27);
        uint8_t VAR_37 = VAR_9[VAR_23 & VAR_12];
        FUNC_21(&VAR_28, VAR_37, VAR_36,
            VAR_20->literal_context_map, VAR_21, VAR_22,
            VAR_1);
        VAR_14 = VAR_13;
        VAR_13 = VAR_37;
        ++VAR_23;
      }
    }
    VAR_23 += FUNC_13(&VAR_32);
    if (FUNC_13(&VAR_32)) {
      VAR_14 = VAR_9[(VAR_23 - 2) & VAR_12];
      VAR_13 = VAR_9[(VAR_23 - 1) & VAR_12];
      if (VAR_32.cmd_prefix_ >= 128) {
        size_t VAR_38 = VAR_32.dist_prefix_ & 0x3FF;
        uint32_t VAR_39 = VAR_32.dist_prefix_ >> 10;
        uint64_t VAR_40 = VAR_32.dist_extra_;
        if (VAR_20->distance_context_map_size == 0) {
          FUNC_20(&VAR_30, VAR_38, VAR_21, VAR_22);
        } else {
          size_t VAR_41 = FUNC_14(&VAR_32);
          FUNC_21(&VAR_30, VAR_38, VAR_41,
              VAR_20->distance_context_map, VAR_21, VAR_22,
              VAR_0);
        }
        FUNC_7(VAR_39, VAR_40, VAR_21, VAR_22);
      }
    }
  }
  FUNC_12(VAR_8, &VAR_30);
  FUNC_12(VAR_8, &VAR_29);
  FUNC_12(VAR_8, &VAR_28);
  if (VAR_15) {
    FUNC_17(VAR_21, VAR_22);
  }
}
