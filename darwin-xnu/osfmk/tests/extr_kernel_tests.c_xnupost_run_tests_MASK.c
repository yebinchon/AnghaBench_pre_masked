
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xnupost_test_t ;
typedef size_t uint32_t ;
typedef int kern_return_t ;
struct TYPE_3__ {int xt_config; scalar_t__ xt_retval; scalar_t__ xt_expected_retval; void* xt_test_actions; void* xt_end_time; int (* xt_func ) () ;void* xt_begin_time; int xt_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

kern_return_t
FUNC_6(xnupost_test_t VAR_13, uint32_t VAR_14)
{
 uint32_t VAR_15 = 0;
 int VAR_16 = VAR_0;

 if ((VAR_12 & VAR_2) == 0) {
  FUNC_3("No POST boot-arg set.\n");
  return VAR_16;
 }

 VAR_5;
 xnupost_test_t VAR_17;
 for (; VAR_15 < VAR_14; VAR_15++) {
  FUNC_5();
  VAR_17 = &VAR_13[VAR_15];
  FUNC_0(VAR_17->xt_name);
  VAR_17->xt_begin_time = FUNC_2();
  VAR_17->xt_end_time = VAR_17->xt_begin_time;





  if ((VAR_17->xt_config & VAR_10) && !(VAR_12 & VAR_1)) {
   FUNC_1(
       "Test expects panic but "
       "no controller is present");
   VAR_17->xt_test_actions = VAR_9;
   continue;
  }

  if ((VAR_17->xt_config & VAR_11)) {
   FUNC_1("Test is marked as XT_CONFIG_IGNORE");
   VAR_17->xt_test_actions = VAR_9;
   continue;
  }

  VAR_17->xt_func();
  VAR_3;
  VAR_17->xt_retval = VAR_6;
  VAR_17->xt_end_time = FUNC_2();
  if (VAR_17->xt_retval == VAR_17->xt_expected_retval) {
   VAR_17->xt_test_actions = VAR_8;
  } else {
   VAR_17->xt_test_actions = VAR_7;
  }
 }
 VAR_4;
 return VAR_16;
}
