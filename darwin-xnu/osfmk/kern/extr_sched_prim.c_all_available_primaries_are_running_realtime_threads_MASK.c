
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* processor_t ;
typedef TYPE_2__* processor_set_t ;
struct TYPE_6__ {int cpu_bitmask; int recommended_bitmask; } ;
struct TYPE_5__ {scalar_t__ state; scalar_t__ current_pri; struct TYPE_5__* processor_primary; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 TYPE_1__** VAR_4 ;

__attribute__((used)) static bool
FUNC_2(processor_set_t VAR_5)
{
 uint64_t VAR_6 = (VAR_5->cpu_bitmask & VAR_5->recommended_bitmask);

 for (int VAR_7 = FUNC_0(VAR_6); VAR_7 >= 0; VAR_7 = FUNC_1(VAR_6, VAR_7)) {
  processor_t VAR_8 = VAR_4[VAR_7];

  if (VAR_8->processor_primary != VAR_8) {
   continue;
  }

  if (VAR_8->state == VAR_2) {
   return 0;
  }

  if (VAR_8->state == VAR_1) {
   return 0;
  }

  if (VAR_8->state != VAR_3) {







   continue;
  }

  if (VAR_8->current_pri < VAR_0) {
   return 0;
  }
 }

 return 1;
}
