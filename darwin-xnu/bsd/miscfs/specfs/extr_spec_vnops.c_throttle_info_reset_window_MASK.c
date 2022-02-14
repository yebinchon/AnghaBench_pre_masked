
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
struct _throttle_io_info_t {int dummy; } ;
struct TYPE_4__ {int uu_throttle_bc; scalar_t__ uu_lowpri_window; struct _throttle_io_info_t* uu_throttle_info; } ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (struct _throttle_io_info_t*) ;

void FUNC_3(uthread_t VAR_0)
{
 struct _throttle_io_info_t *VAR_1;

 if (VAR_0 == ((void*)0))
  VAR_0 = FUNC_1(FUNC_0());

 if ( (VAR_1 = VAR_0->uu_throttle_info) ) {
  FUNC_2(VAR_1);

  VAR_0->uu_throttle_info = ((void*)0);
  VAR_0->uu_lowpri_window = 0;
  VAR_0->uu_throttle_bc = 0;
 }
}
