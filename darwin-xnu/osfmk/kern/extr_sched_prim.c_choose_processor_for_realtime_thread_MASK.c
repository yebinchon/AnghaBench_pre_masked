
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* processor_t ;
typedef TYPE_2__* processor_set_t ;
struct TYPE_8__ {int cpu_bitmask; int recommended_bitmask; int pending_AST_cpu_mask; } ;
struct TYPE_7__ {scalar_t__ state; scalar_t__ current_pri; struct TYPE_7__* processor_primary; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 TYPE_1__** VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static processor_t
FUNC_2(processor_set_t VAR_7)
{
 uint64_t VAR_8 = (VAR_7->cpu_bitmask & VAR_7->recommended_bitmask & ~VAR_7->pending_AST_cpu_mask);

 for (int VAR_9 = FUNC_0(VAR_8); VAR_9 >= 0; VAR_9 = FUNC_1(VAR_8, VAR_9)) {
  processor_t VAR_10 = VAR_5[VAR_9];

  if (VAR_10->processor_primary != VAR_10) {
   continue;
  }

  if (VAR_10->state == VAR_2) {
   return VAR_10;
  }

  if ((VAR_10->state != VAR_4) && (VAR_10->state != VAR_1)) {
   continue;
  }

  if (VAR_10->current_pri >= VAR_0) {
   continue;
  }

  return VAR_10;

 }

 if (!VAR_6) {
  return VAR_3;
 }


 for (int VAR_11 = FUNC_0(VAR_8); VAR_11 >= 0; VAR_11 = FUNC_1(VAR_8, VAR_11)) {
  processor_t VAR_12 = VAR_5[VAR_11];

  if (VAR_12->processor_primary == VAR_12) {
   continue;
  }

  if (VAR_12->state == VAR_2) {
   return VAR_12;
  }

  if ((VAR_12->state != VAR_4) && (VAR_12->state != VAR_1)) {
   continue;
  }

  if (VAR_12->current_pri >= VAR_0) {
   continue;
  }

  return VAR_12;

 }

 return VAR_3;
}
