
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
struct _throttle_io_info_t {scalar_t__ throttle_io_periods; scalar_t__ throttle_disabled; } ;
typedef int boolean_t ;
struct TYPE_3__ {int uu_lowpri_window; int uu_throttle_bc; struct _throttle_io_info_t* uu_throttle_info; } ;


 int FUNC_0 (char*,struct _throttle_io_info_t*,struct _throttle_io_info_t*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct _throttle_io_info_t*) ;
 int FUNC_2 (struct _throttle_io_info_t*,int ) ;

__attribute__((used)) static
void FUNC_3(uthread_t VAR_1, struct _throttle_io_info_t *VAR_2, boolean_t VAR_3, boolean_t VAR_4)
{
 if (VAR_0 == 0 || VAR_2->throttle_disabled)
  return;

 if (VAR_2->throttle_io_periods == 0) {
  FUNC_2(VAR_2, VAR_4);
 }
 if (VAR_1->uu_throttle_info == ((void*)0)) {

  VAR_1->uu_throttle_info = VAR_2;
  FUNC_1(VAR_2);
  FUNC_0("updating info = %p\n", VAR_2, VAR_2 );

  VAR_1->uu_lowpri_window = 1;
  VAR_1->uu_throttle_bc = VAR_3;
 }
}
