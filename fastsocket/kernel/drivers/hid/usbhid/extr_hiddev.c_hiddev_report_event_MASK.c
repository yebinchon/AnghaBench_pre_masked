
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uref ;
struct hiddev_usage_ref {int field_index; int report_id; int report_type; } ;
struct hid_report {unsigned int type; int id; } ;
struct hid_device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hid_device*,struct hiddev_usage_ref*) ;
 int FUNC_1 (struct hiddev_usage_ref*,int ,int) ;

void FUNC_2(struct hid_device *VAR_7, struct hid_report *VAR_8)
{
 unsigned VAR_9 = VAR_8->type;
 struct hiddev_usage_ref VAR_10;

 FUNC_1(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.report_type =
   (VAR_9 == VAR_2) ? VAR_5 :
   ((VAR_9 == VAR_3) ? VAR_6 :
    ((VAR_9 == VAR_0) ? VAR_4 : 0));
 VAR_10.report_id = VAR_8->id;
 VAR_10.field_index = VAR_1;

 FUNC_0(VAR_7, &VAR_10);
}
