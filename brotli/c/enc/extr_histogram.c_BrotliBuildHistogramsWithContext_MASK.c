
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {size_t type_; } ;
struct TYPE_8__ {int cmd_prefix_; size_t insert_len_; int dist_prefix_; } ;
typedef int HistogramLiteral ;
typedef int HistogramDistance ;
typedef int HistogramCommand ;
typedef int ContextType ;
typedef int ContextLut ;
typedef TYPE_1__ Command ;
typedef TYPE_2__ BlockSplitIterator ;
typedef int BlockSplit ;


 size_t FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int const) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*) ;
 size_t FUNC_4 (TYPE_1__ const*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int const) ;
 int FUNC_8 (TYPE_2__*,int const*) ;

void FUNC_9(
    const Command* VAR_2, const size_t VAR_3,
    const BlockSplit* VAR_4, const BlockSplit* VAR_5,
    const BlockSplit* VAR_6, const uint8_t* VAR_7, size_t VAR_8,
    size_t VAR_9, uint8_t VAR_10, uint8_t VAR_11,
    const ContextType* VAR_12, HistogramLiteral* VAR_13,
    HistogramCommand* VAR_14,
    HistogramDistance* VAR_15) {
  size_t VAR_16 = VAR_8;
  BlockSplitIterator VAR_17;
  BlockSplitIterator VAR_18;
  BlockSplitIterator VAR_19;
  size_t VAR_20;

  FUNC_8(&VAR_17, VAR_4);
  FUNC_8(&VAR_18, VAR_5);
  FUNC_8(&VAR_19, VAR_6);
  for (VAR_20 = 0; VAR_20 < VAR_3; ++VAR_20) {
    const Command* VAR_21 = &VAR_2[VAR_20];
    size_t VAR_22;
    FUNC_2(&VAR_18);
    FUNC_5(&VAR_14[VAR_18.type_],
        VAR_21->cmd_prefix_);

    for (VAR_22 = VAR_21->insert_len_; VAR_22 != 0; --VAR_22) {
      size_t VAR_23;
      FUNC_2(&VAR_17);
      VAR_23 = VAR_17.type_;
      if (VAR_12) {
        ContextLut VAR_24 = FUNC_1(VAR_12[VAR_23]);
        VAR_23 = (VAR_23 << VAR_1) +
            FUNC_0(VAR_10, VAR_11, VAR_24);
      }
      FUNC_7(&VAR_13[VAR_23],
          VAR_7[VAR_16 & VAR_9]);
      VAR_11 = VAR_10;
      VAR_10 = VAR_7[VAR_16 & VAR_9];
      ++VAR_16;
    }
    VAR_16 += FUNC_3(VAR_21);
    if (FUNC_3(VAR_21)) {
      VAR_11 = VAR_7[(VAR_16 - 2) & VAR_9];
      VAR_10 = VAR_7[(VAR_16 - 1) & VAR_9];
      if (VAR_21->cmd_prefix_ >= 128) {
        size_t VAR_25;
        FUNC_2(&VAR_19);
        VAR_25 = (VAR_19.type_ << VAR_0) +
            FUNC_4(VAR_21);
        FUNC_6(&VAR_15[VAR_25],
            VAR_21->dist_prefix_ & 0x3FF);
      }
    }
  }
}
