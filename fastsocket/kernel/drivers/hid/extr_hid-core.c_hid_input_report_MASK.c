
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_report_enum {scalar_t__ numbered; } ;
struct hid_report {int id; } ;
struct hid_driver {int (* raw_event ) (struct hid_device*,struct hid_report*,int*,int) ;} ;
struct hid_device {struct hid_driver* driver; struct hid_report_enum* report_enum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct hid_device*,char*) ;
 struct hid_report* FUNC_2 (struct hid_report_enum*,int*) ;
 scalar_t__ FUNC_3 (struct hid_device*,struct hid_report*) ;
 int FUNC_4 (struct hid_device*,int,int*,int,int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int,int ) ;
 int FUNC_7 (char*,int,char*,int,...) ;
 int FUNC_8 (struct hid_device*,struct hid_report*,int*,int) ;

int FUNC_9(struct hid_device *VAR_3, int VAR_4, u8 *VAR_5, int VAR_6, int VAR_7)
{
 struct hid_report_enum *VAR_8;
 struct hid_driver *VAR_9;
 struct hid_report *VAR_10;
 char *VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 if (!VAR_3 || !VAR_3->driver)
  return -VAR_0;
 VAR_8 = VAR_3->report_enum + VAR_4;
 VAR_9 = VAR_3->driver;

 if (!VAR_6) {
  FUNC_0("empty report\n");
  return -1;
 }

 VAR_11 = FUNC_6(sizeof(char) * VAR_2, VAR_1);

 if (!VAR_11) {
  VAR_10 = FUNC_2(VAR_8, VAR_5);
  goto nomem;
 }

 FUNC_7(VAR_11, VAR_2 - 1,
   "\nreport (size %u) (%snumbered)\n", VAR_6, VAR_8->numbered ? "" : "un");
 FUNC_1(VAR_3, VAR_11);

 VAR_10 = FUNC_2(VAR_8, VAR_5);
 if (!VAR_10) {
  FUNC_5(VAR_11);
  return -1;
 }


 FUNC_7(VAR_11, VAR_2 - 1,
   "report %d (size %u) = ", VAR_10->id, VAR_6);
 FUNC_1(VAR_3, VAR_11);
 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  FUNC_7(VAR_11, VAR_2 - 1,
    " %02x", VAR_5[VAR_12]);
  FUNC_1(VAR_3, VAR_11);
 }
 FUNC_1(VAR_3, "\n");

 FUNC_5(VAR_11);

nomem:
 if (VAR_9 && VAR_9->raw_event && FUNC_3(VAR_3, VAR_10)) {
  VAR_13 = VAR_9->raw_event(VAR_3, VAR_10, VAR_5, VAR_6);
  if (VAR_13 != 0)
   return VAR_13 < 0 ? VAR_13 : 0;
 }

 FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

 return 0;
}
