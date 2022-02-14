
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {int lz4_compressed_bytes; int lz4_wk_compression_negative_delta; int lz4_wk_compression_delta; int lz4_compression_failures; int lz4_compressions; } ;
struct TYPE_5__ {scalar_t__ lz4_run_length; int lz4_total_negatives; scalar_t__ lz4_failure_run_length; int lz4_total_unprofitables; int lz4_total_failures; } ;
struct TYPE_4__ {int wkdm_reeval_threshold; scalar_t__ lz4_run_continue_bytes; scalar_t__ lz4_profitable_bytes; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static inline void FUNC_2(int VAR_4, int VAR_5, int VAR_6) {
 FUNC_0(VAR_1.lz4_compressions++);

 if (VAR_4 == 0) {
  FUNC_0(VAR_1.lz4_compressed_bytes+=VAR_0);
  FUNC_0(VAR_1.lz4_compression_failures++);
  VAR_2.lz4_failure_run_length++;
  FUNC_0(VAR_2.lz4_total_failures++);
  VAR_2.lz4_run_length = 0;
 } else {
  VAR_2.lz4_failure_run_length = 0;

  FUNC_0(VAR_1.lz4_compressed_bytes+=VAR_4);

  if (VAR_4 <= VAR_3.wkdm_reeval_threshold) {
   VAR_2.lz4_run_length = 0;
  } else {
   if (!VAR_5) {
    VAR_2.lz4_run_length++;
   }
  }

  if (VAR_5) {
   if (FUNC_1(VAR_6 > VAR_4)) {
    uint32_t VAR_7 = VAR_6 - VAR_4;
    FUNC_0(VAR_1.lz4_wk_compression_delta+=VAR_7);
    if (VAR_7 >= VAR_3.lz4_run_continue_bytes) {
     VAR_2.lz4_run_length++;
    } else if (VAR_7 <= VAR_3.lz4_profitable_bytes) {
     VAR_2.lz4_failure_run_length++;
     FUNC_0(VAR_2.lz4_total_unprofitables++);
     VAR_2.lz4_run_length = 0;
    } else {
     VAR_2.lz4_run_length = 0;
    }
   } else {
    FUNC_0(VAR_1.lz4_wk_compression_negative_delta+=(VAR_4-VAR_6));
    VAR_2.lz4_failure_run_length++;
    FUNC_0(VAR_2.lz4_total_negatives++);
    VAR_2.lz4_run_length = 0;
   }
  }
 }
}
