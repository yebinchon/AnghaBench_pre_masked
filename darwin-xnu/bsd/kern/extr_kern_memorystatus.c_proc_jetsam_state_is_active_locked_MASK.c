
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
typedef int boolean_t ;
struct TYPE_3__ {int p_memstat_state; scalar_t__ p_memstat_effectivepriority; int p_memstat_dirty; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static boolean_t
FUNC_0(proc_t VAR_7) {

 if ((VAR_7->p_memstat_state & VAR_5) &&
     (VAR_7->p_memstat_effectivepriority == VAR_1)) {





  return VAR_6;
 } else if (VAR_7->p_memstat_dirty & VAR_4) {




  if (VAR_7->p_memstat_dirty & VAR_3) {




   return VAR_6;
  } else {




   return VAR_0;
  }
 } else if (VAR_7->p_memstat_effectivepriority >= VAR_2) {




  return VAR_6;
 } else {




  return VAR_0;
 }
}
