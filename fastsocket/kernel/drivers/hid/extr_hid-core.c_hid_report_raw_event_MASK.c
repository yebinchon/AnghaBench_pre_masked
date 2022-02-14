
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_report_enum {scalar_t__ numbered; } ;
struct hid_report {int size; unsigned int maxfield; int * field; int id; } ;
struct hid_device {int claimed; int (* hiddev_report_event ) (struct hid_device*,struct hid_report*) ;struct hid_report_enum* report_enum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int,int) ;
 struct hid_report* FUNC_1 (struct hid_report_enum*,int *) ;
 int FUNC_2 (struct hid_device*,int ,int *,int) ;
 int FUNC_3 (struct hid_device*,struct hid_report*) ;
 int FUNC_4 (struct hid_device*,int *,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct hid_device*,struct hid_report*) ;

void FUNC_7(struct hid_device *VAR_3, int VAR_4, u8 *VAR_5, int VAR_6,
  int VAR_7)
{
 struct hid_report_enum *VAR_8 = VAR_3->report_enum + VAR_4;
 struct hid_report *VAR_9;
 unsigned int VAR_10;
 int VAR_11, VAR_12 = VAR_6;
 u8 *VAR_13 = VAR_5;

 VAR_9 = FUNC_1(VAR_8, VAR_5);
 if (!VAR_9)
  return;

 if (VAR_8->numbered) {
  VAR_13++;
  VAR_12--;
 }

 VAR_11 = ((VAR_9->size - 1) >> 3) + 1;

 if (VAR_12 < VAR_11) {
  FUNC_0("report %d is too short, (%d < %d)\n", VAR_9->id,
    VAR_12, VAR_11);
  FUNC_5(VAR_13 + VAR_12, 0, VAR_11 - VAR_12);
 }

 if ((VAR_3->claimed & VAR_0) && VAR_3->hiddev_report_event)
  VAR_3->hiddev_report_event(VAR_3, VAR_9);
 if (VAR_3->claimed & VAR_1) {

  if (VAR_8->numbered)
   FUNC_4(VAR_3, VAR_5 - 1, VAR_6 + 1);
  else
   FUNC_4(VAR_3, VAR_5, VAR_6);
 }

 for (VAR_10 = 0; VAR_10 < VAR_9->maxfield; VAR_10++)
  FUNC_2(VAR_3, VAR_9->field[VAR_10], VAR_13, VAR_7);

 if (VAR_3->claimed & VAR_2)
  FUNC_3(VAR_3, VAR_9);
}
