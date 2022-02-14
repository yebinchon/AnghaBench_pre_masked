
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pidff_usage {int * value; TYPE_2__* field; } ;
struct hid_report {int maxfield; TYPE_2__** field; } ;
struct TYPE_4__ {int maxusage; int report_count; int * value; TYPE_1__* usage; } ;
struct TYPE_3__ {int const hid; } ;


 int const VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static int FUNC_1(struct pidff_usage *VAR_1, const u8 *VAR_2,
        struct hid_report *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_9 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_3->maxfield; VAR_6++) {
   if (VAR_3->field[VAR_6]->maxusage !=
       VAR_3->field[VAR_6]->report_count) {
    FUNC_0("maxusage and report_count do not match, "
          "skipping");
    continue;
   }
   for (VAR_7 = 0; VAR_7 < VAR_3->field[VAR_6]->maxusage; VAR_7++) {
    if (VAR_3->field[VAR_6]->usage[VAR_7].hid ==
        (VAR_0 | VAR_2[VAR_8])) {
     FUNC_0("found %d at %d->%d", VAR_8, VAR_6, VAR_7);
     VAR_1[VAR_8].field = VAR_3->field[VAR_6];
     VAR_1[VAR_8].value =
      &VAR_3->field[VAR_6]->value[VAR_7];
     VAR_9 = 1;
     break;
    }
   }
   if (VAR_9)
    break;
  }
  if (!VAR_9 && VAR_5) {
   FUNC_0("failed to locate %d", VAR_8);
   return -1;
  }
 }
 return 0;
}
