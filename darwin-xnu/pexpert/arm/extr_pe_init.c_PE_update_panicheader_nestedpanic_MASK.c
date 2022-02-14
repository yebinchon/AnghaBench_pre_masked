
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ eph_panic_log_offset; scalar_t__ eph_panic_log_len; scalar_t__ eph_other_log_offset; scalar_t__ eph_other_log_len; scalar_t__ eph_stackshot_offset; scalar_t__ eph_stackshot_len; int eph_panic_flags; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void
FUNC_3()
{
 if (!VAR_2)
  return;




 if (VAR_2->eph_panic_log_offset == 0) {
  FUNC_1();
  VAR_2->eph_panic_flags |= VAR_0;
  return;
 }

 VAR_2->eph_panic_flags |= VAR_0;





 if (VAR_2->eph_panic_log_len == 0) {
  VAR_2->eph_panic_log_len = FUNC_0(VAR_1);


  FUNC_2(VAR_2->eph_other_log_offset == VAR_2->eph_other_log_len == 0);
 }


 FUNC_2(((VAR_2->eph_stackshot_offset == 0) && (VAR_2->eph_stackshot_len == 0)) ||
   ((VAR_2->eph_stackshot_offset != 0) && (VAR_2->eph_stackshot_len != 0)));





 if (VAR_2->eph_other_log_offset == 0) {
  VAR_2->eph_other_log_offset = FUNC_0(VAR_1);


  FUNC_2(VAR_2->eph_other_log_len == 0);
 }

 return;
}
