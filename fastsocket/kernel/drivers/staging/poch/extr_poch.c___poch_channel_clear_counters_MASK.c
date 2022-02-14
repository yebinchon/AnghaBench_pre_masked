
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fifo_overflow; scalar_t__ fifo_empty; scalar_t__ pll_unlock; } ;
struct channel_info {TYPE_1__ counters; } ;



__attribute__((used)) static void FUNC_0(struct channel_info *VAR_0)
{
 VAR_0->counters.pll_unlock = 0;
 VAR_0->counters.fifo_empty = 0;
 VAR_0->counters.fifo_overflow = 0;
}
