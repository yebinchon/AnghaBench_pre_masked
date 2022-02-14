
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_10__ {scalar_t__ distance_postfix_bits; scalar_t__ num_direct_distance_codes; scalar_t__ max_distance; } ;
struct TYPE_9__ {int cmd_prefix_; int dist_prefix_; } ;
typedef int HistogramDistance ;
typedef TYPE_1__ Command ;
typedef TYPE_2__ BrotliDistanceParams ;
typedef scalar_t__ BROTLI_BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 double FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*,TYPE_2__ const*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,int*,scalar_t__*) ;

__attribute__((used)) static BROTLI_BOOL FUNC_6(const Command* VAR_2,
                                       size_t VAR_3,
                                       const BrotliDistanceParams* VAR_4,
                                       const BrotliDistanceParams* VAR_5,
                                       double* VAR_6) {
  size_t VAR_7;
  BROTLI_BOOL VAR_8 = VAR_0;
  uint16_t VAR_9;
  uint32_t VAR_10;
  double VAR_11 = 0.0;
  HistogramDistance VAR_12;
  FUNC_4(&VAR_12);

  if (VAR_4->distance_postfix_bits == VAR_5->distance_postfix_bits &&
      VAR_4->num_direct_distance_codes ==
      VAR_5->num_direct_distance_codes) {
    VAR_8 = VAR_1;
  }

  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
    const Command* VAR_13 = &VAR_2[VAR_7];
    if (FUNC_1(VAR_13) && VAR_13->cmd_prefix_ >= 128) {
      if (VAR_8) {
        VAR_9 = VAR_13->dist_prefix_;
      } else {
        uint32_t VAR_14 = FUNC_2(VAR_13, VAR_4);
        if (VAR_14 > VAR_5->max_distance) {
          return VAR_0;
        }
        FUNC_5(VAR_14,
                                 VAR_5->num_direct_distance_codes,
                                 VAR_5->distance_postfix_bits,
                                 &VAR_9,
                                 &VAR_10);
      }
      FUNC_3(&VAR_12, VAR_9 & 0x3FF);
      VAR_11 += VAR_9 >> 10;
    }
  }

  *VAR_6 = FUNC_0(&VAR_12) + VAR_11;
  return VAR_1;
}
