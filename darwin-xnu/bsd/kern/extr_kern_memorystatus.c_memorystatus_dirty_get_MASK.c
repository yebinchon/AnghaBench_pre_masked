
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_3__ {int p_memstat_dirty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

int
FUNC_2(proc_t VAR_8) {
 int VAR_9 = 0;

 FUNC_0();

 if (VAR_8->p_memstat_dirty & VAR_7) {
  VAR_9 |= VAR_3;
  if (VAR_8->p_memstat_dirty & VAR_5) {
   VAR_9 |= VAR_0;
  }
  if (VAR_8->p_memstat_dirty & VAR_4) {
   VAR_9 |= VAR_1;
  }
  if (VAR_8->p_memstat_dirty & VAR_6) {
   VAR_9 |= VAR_2;
  }
 }

 FUNC_1();

 return VAR_9;
}
