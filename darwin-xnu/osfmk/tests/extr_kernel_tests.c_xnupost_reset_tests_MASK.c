
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xnupost_test_t ;
typedef size_t uint32_t ;
typedef int kern_return_t ;
struct TYPE_3__ {int xt_retval; int xt_test_actions; scalar_t__ xt_end_time; scalar_t__ xt_begin_time; } ;


 int VAR_0 ;
 int VAR_1 ;

kern_return_t
FUNC_0(xnupost_test_t VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4 = 0;
 xnupost_test_t VAR_5;
 for (; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = &VAR_2[VAR_4];
  VAR_5->xt_begin_time = 0;
  VAR_5->xt_end_time = 0;
  VAR_5->xt_test_actions = VAR_1;
  VAR_5->xt_retval = -1;
 }
 return VAR_0;
}
