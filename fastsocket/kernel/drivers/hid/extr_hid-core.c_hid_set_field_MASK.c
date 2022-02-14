
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_field {unsigned int report_size; unsigned int report_count; scalar_t__ logical_minimum; scalar_t__* value; scalar_t__ usage; TYPE_1__* report; } ;
typedef scalar_t__ __s32 ;
struct TYPE_2__ {int device; } ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,unsigned int) ;
 scalar_t__ FUNC_3 (int ,unsigned int) ;

int FUNC_4(struct hid_field *VAR_0, unsigned VAR_1, __s32 VAR_2)
{
 unsigned VAR_3 = VAR_0->report_size;

 FUNC_1(VAR_0->report->device, VAR_0->usage + VAR_1, VAR_2);

 if (VAR_1 >= VAR_0->report_count) {
  FUNC_0("offset (%d) exceeds report_count (%d)\n", VAR_1, VAR_0->report_count);
  return -1;
 }
 if (VAR_0->logical_minimum < 0) {
  if (VAR_2 != FUNC_3(FUNC_2(VAR_2, VAR_3), VAR_3)) {
   FUNC_0("value %d is out of range\n", VAR_2);
   return -1;
  }
 }
 VAR_0->value[VAR_1] = VAR_2;
 return 0;
}
