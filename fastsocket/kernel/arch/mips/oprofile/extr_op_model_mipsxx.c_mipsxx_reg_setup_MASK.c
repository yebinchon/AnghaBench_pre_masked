
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct op_counter_config {scalar_t__ count; scalar_t__ exl; scalar_t__ user; scalar_t__ kernel; int event; int enabled; } ;
struct TYPE_4__ {unsigned int num_counters; } ;
struct TYPE_3__ {int* control; scalar_t__* counter; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void FUNC_1(struct op_counter_config *VAR_6)
{
 unsigned int VAR_7 = VAR_4.num_counters;
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_5.control[VAR_8] = 0;
  VAR_5.counter[VAR_8] = 0;

  if (!VAR_6[VAR_8].enabled)
   continue;

  VAR_5.control[VAR_8] = FUNC_0(VAR_6[VAR_8].event) |
                   VAR_1;
  if (VAR_6[VAR_8].kernel)
   VAR_5.control[VAR_8] |= VAR_2;
  if (VAR_6[VAR_8].user)
   VAR_5.control[VAR_8] |= VAR_3;
  if (VAR_6[VAR_8].exl)
   VAR_5.control[VAR_8] |= VAR_0;
  VAR_5.counter[VAR_8] = 0x80000000 - VAR_6[VAR_8].count;
 }
}
