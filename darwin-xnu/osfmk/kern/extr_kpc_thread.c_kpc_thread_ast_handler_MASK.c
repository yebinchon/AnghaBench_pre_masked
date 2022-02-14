
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct TYPE_3__ {int kperf_flags; int kpc_buf; } ;


 int VAR_0 ;
 int FUNC_0 () ;

void
FUNC_1( thread_t VAR_1 )
{

 if( VAR_1->kperf_flags & VAR_0 )
  VAR_1->kpc_buf = FUNC_0();
}
