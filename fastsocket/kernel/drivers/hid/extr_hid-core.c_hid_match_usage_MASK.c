
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_usage_id {int usage_type; int usage_hid; int usage_code; } ;
struct hid_usage {int hid; int type; int code; } ;
struct hid_device {TYPE_1__* driver; } ;
struct TYPE_2__ {struct hid_usage_id* usage_table; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct hid_device *VAR_1, struct hid_usage *VAR_2)
{
 const struct hid_usage_id *VAR_3 = VAR_1->driver->usage_table;

 if (!VAR_3)
  return 1;

 for (; VAR_3->usage_type != VAR_0 - 1; VAR_3++)
  if ((VAR_3->usage_hid == VAR_0 ||
    VAR_3->usage_hid == VAR_2->hid) &&
    (VAR_3->usage_type == VAR_0 ||
    VAR_3->usage_type == VAR_2->type) &&
    (VAR_3->usage_code == VAR_0 ||
     VAR_3->usage_code == VAR_2->code))
   return 1;
 return 0;
}
