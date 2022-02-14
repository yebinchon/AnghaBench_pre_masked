
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct list_head {struct list_head* next; } ;
struct hid_report_enum {struct list_head report_list; } ;
struct hid_report {unsigned int id; size_t type; unsigned int maxfield; int * field; } ;
struct hid_device {struct hid_report_enum* report_enum; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int,struct seq_file*) ;
 int FUNC_1 (struct seq_file*,char*,...) ;
 int FUNC_2 (int,struct seq_file*) ;

void FUNC_3(struct hid_device *VAR_1, struct seq_file *VAR_2)
{
 struct hid_report_enum *VAR_3;
 struct hid_report *VAR_4;
 struct list_head *VAR_5;
 unsigned VAR_6,VAR_7;
 static const char *VAR_8[] = {"INPUT", "OUTPUT", "FEATURE"};

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_3 = VAR_1->report_enum + VAR_6;
  VAR_5 = VAR_3->report_list.next;
  while (VAR_5 != &VAR_3->report_list) {
   VAR_4 = (struct hid_report *) VAR_5;
   FUNC_2(2, VAR_2);
   FUNC_1(VAR_2, "%s", VAR_8[VAR_6]);
   if (VAR_4->id)
    FUNC_1(VAR_2, "(%d)", VAR_4->id);
   FUNC_1(VAR_2, "[%s]", VAR_8[VAR_4->type]);
   FUNC_1(VAR_2, "\n");
   for (VAR_7 = 0; VAR_7 < VAR_4->maxfield; VAR_7++) {
    FUNC_2(4, VAR_2);
    FUNC_1(VAR_2, "Field(%d)\n", VAR_7);
    FUNC_0(VAR_4->field[VAR_7], 6, VAR_2);
   }
   VAR_5 = VAR_5->next;
  }
 }
}
