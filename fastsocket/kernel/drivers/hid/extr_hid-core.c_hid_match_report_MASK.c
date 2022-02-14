
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_report_id {scalar_t__ report_type; } ;
struct hid_report {scalar_t__ type; } ;
struct hid_device {TYPE_1__* driver; } ;
struct TYPE_2__ {struct hid_report_id* report_table; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct hid_device *VAR_2, struct hid_report *VAR_3)
{
 const struct hid_report_id *VAR_4 = VAR_2->driver->report_table;

 if (!VAR_4)
  return 1;

 for (; VAR_4->report_type != VAR_1; VAR_4++)
  if (VAR_4->report_type == VAR_0 ||
    VAR_4->report_type == VAR_3->type)
   return 1;
 return 0;
}
