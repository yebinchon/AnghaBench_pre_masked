
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mph_panic_log_offset; scalar_t__ mph_stackshot_offset; scalar_t__ mph_stackshot_len; scalar_t__ mph_panic_log_len; scalar_t__ mph_other_log_offset; scalar_t__ mph_other_log_len; int mph_panic_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (char*,scalar_t__,...) ;
 TYPE_1__* VAR_2 ;

void
FUNC_3()
{

 if (VAR_2->mph_panic_log_offset == 0) {
  FUNC_1();
  VAR_2->mph_panic_flags |= VAR_0;
  return;
 }

 VAR_2->mph_panic_flags |= VAR_0;


 if(!(((VAR_2->mph_stackshot_offset == 0) && (VAR_2->mph_stackshot_len == 0)) ||
   ((VAR_2->mph_stackshot_offset != 0) && (VAR_2->mph_stackshot_len != 0)))) {
  FUNC_2("panic_info contains invalid stackshot metadata: mph_stackshot_offset 0x%x mph_stackshot_len 0x%x\n",
    VAR_2->mph_stackshot_offset, VAR_2->mph_stackshot_len);
 }





 if ((VAR_2->mph_panic_log_len != 0) && (VAR_2->mph_other_log_offset == 0)) {
  VAR_2->mph_other_log_offset = FUNC_0(VAR_1);


  if (VAR_2->mph_other_log_len != 0) {
   FUNC_2("panic_info contains invalid other log metadata (zero offset but non-zero length), length was 0x%x, zeroing value\n",
     VAR_2->mph_other_log_len);
   VAR_2->mph_other_log_len = 0;
  }
 }

 return;
}
