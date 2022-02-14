
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum compressor_preselect_t { ____Placeholder_compressor_preselect_t } compressor_preselect_t ;
struct TYPE_4__ {scalar_t__ lz4_failure_skips; scalar_t__ lz4_failure_run_length; scalar_t__ lz4_preselects; scalar_t__ lz4_run_length; int lz4_total_preselects; int lz4_total_failure_skips; } ;
struct TYPE_3__ {scalar_t__ lz4_max_failure_skips; scalar_t__ lz4_max_failure_run_length; scalar_t__ lz4_max_preselects; scalar_t__ lz4_run_preselection_threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static inline enum compressor_preselect_t FUNC_0(void) {
 if (VAR_3.lz4_failure_skips >= VAR_4.lz4_max_failure_skips) {
  VAR_3.lz4_failure_skips = 0;
  VAR_3.lz4_failure_run_length = 0;
 }

 if (VAR_3.lz4_failure_run_length >= VAR_4.lz4_max_failure_run_length) {
  VAR_3.lz4_failure_skips++;
  VAR_3.lz4_total_failure_skips++;
  return VAR_2;
 }

 if (VAR_3.lz4_preselects >= VAR_4.lz4_max_preselects) {
  VAR_3.lz4_preselects = 0;
  return VAR_1;
 }

 if (VAR_3.lz4_run_length >= VAR_4.lz4_run_preselection_threshold) {
  VAR_3.lz4_preselects++;
  VAR_3.lz4_total_preselects++;
  return VAR_0;
 }
 return VAR_1;
}
