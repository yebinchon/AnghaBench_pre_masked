
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hid_report {unsigned int maxfield; TYPE_2__** field; } ;
struct hid_device {TYPE_1__* report_enum; } ;
struct TYPE_4__ {unsigned int report_count; } ;
struct TYPE_3__ {struct hid_report** report_id_hash; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct hid_device*,char*,unsigned int,...) ;
 int * VAR_2 ;

struct hid_report *FUNC_1(struct hid_device *VAR_3,
           unsigned int VAR_4, unsigned int VAR_5,
           unsigned int VAR_6,
           unsigned int VAR_7)
{
 struct hid_report *VAR_8;

 if (VAR_4 > VAR_0) {
  FUNC_0(VAR_3, "invalid HID report type %u\n", VAR_4);
  return ((void*)0);
 }

 if (VAR_5 >= VAR_1) {
  FUNC_0(VAR_3, "invalid HID report id %u\n", VAR_5);
  return ((void*)0);
 }






 VAR_8 = VAR_3->report_enum[VAR_4].report_id_hash[VAR_5];
 if (!VAR_8) {
  FUNC_0(VAR_3, "missing %s %u\n", VAR_2[VAR_4], VAR_5);
  return ((void*)0);
 }
 if (VAR_8->maxfield <= VAR_6) {
  FUNC_0(VAR_3, "not enough fields in %s %u\n",
   VAR_2[VAR_4], VAR_5);
  return ((void*)0);
 }
 if (VAR_8->field[VAR_6]->report_count < VAR_7) {
  FUNC_0(VAR_3, "not enough values in %s %u field %u\n",
   VAR_2[VAR_4], VAR_5, VAR_6);
  return ((void*)0);
 }
 return VAR_8;
}
