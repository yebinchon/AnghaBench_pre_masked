
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {scalar_t__ c_switch; scalar_t__ kperf_c_switch; } ;



void
FUNC_0(thread_t VAR_0, boolean_t VAR_1)
{
 if (VAR_1) {
  VAR_0->kperf_c_switch = VAR_0->c_switch - 1;
 } else {
  VAR_0->kperf_c_switch = VAR_0->c_switch;
 }
}
