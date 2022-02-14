
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
 int FUNC_0 () ;
 int FUNC_1 () ;

int
FUNC_2(proc_t VAR_5) {
 int VAR_6;

 FUNC_0();

 VAR_5->p_memstat_dirty |= VAR_1;

 if ((VAR_5->p_memstat_dirty & (VAR_2|VAR_0)) == VAR_2) {

  VAR_6 = VAR_3;
 } else {

  VAR_6 = VAR_4;
 }

 FUNC_1();

 return VAR_6;
}
