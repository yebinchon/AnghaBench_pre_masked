
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct op_counter_config {int event; int count; int enabled; } ;
struct TYPE_4__ {unsigned int num_counters; } ;
struct TYPE_3__ {int ctrl; unsigned long cnt_hi; unsigned long cnt_lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_0(struct op_counter_config *VAR_4)
{
 unsigned int VAR_5 = VAR_2.num_counters;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_3[VAR_6].ctrl = 0;
  VAR_3[VAR_6].cnt_hi = 0;
  VAR_3[VAR_6].cnt_lo = 0;

  if (!VAR_4[VAR_6].enabled)
   continue;

  VAR_3[VAR_6].ctrl |= VAR_4[VAR_6].event | VAR_0 | VAR_1;
  VAR_3[VAR_6].cnt_hi = (unsigned long)((VAR_4->count >> 32) & 0xffff);
  VAR_3[VAR_6].cnt_lo = (unsigned long)(VAR_4->count & 0xffffffff);
 }
}
