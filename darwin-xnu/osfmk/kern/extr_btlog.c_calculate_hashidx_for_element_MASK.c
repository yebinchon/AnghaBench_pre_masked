
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ caller_will_remove_entries_for_element; } ;
typedef TYPE_1__ btlog_t ;



uint32_t
FUNC_0(uintptr_t VAR_0, btlog_t *VAR_1)
{
 if (VAR_1->caller_will_remove_entries_for_element) {
  uint32_t VAR_2 = 0;

  VAR_2 = (uint32_t) ((VAR_0 & 0xFF00) >> 0x8);

  return VAR_2;
 } else {
  return 0;
 }
}
