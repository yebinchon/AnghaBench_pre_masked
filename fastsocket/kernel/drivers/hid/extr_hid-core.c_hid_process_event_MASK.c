
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_driver {int (* event ) (struct hid_device*,struct hid_field*,struct hid_usage*,int ) ;int name; } ;
struct hid_device {int claimed; int (* hiddev_hid_event ) (struct hid_device*,struct hid_field*,struct hid_usage*,int ) ;struct hid_driver* driver; } ;
typedef int __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct hid_device*,struct hid_usage*,int ) ;
 scalar_t__ FUNC_2 (struct hid_device*,struct hid_usage*) ;
 int FUNC_3 (struct hid_device*,struct hid_field*,struct hid_usage*,int ) ;
 int FUNC_4 (struct hid_device*,struct hid_field*,struct hid_usage*,int ) ;
 int FUNC_5 (struct hid_device*,struct hid_field*,struct hid_usage*,int ) ;

__attribute__((used)) static void FUNC_6(struct hid_device *VAR_2, struct hid_field *VAR_3,
  struct hid_usage *VAR_4, __s32 VAR_5, int VAR_6)
{
 struct hid_driver *VAR_7 = VAR_2->driver;
 int VAR_8;

 FUNC_1(VAR_2, VAR_4, VAR_5);

 if (VAR_7 && VAR_7->event && FUNC_2(VAR_2, VAR_4)) {
  VAR_8 = VAR_7->event(VAR_2, VAR_3, VAR_4, VAR_5);
  if (VAR_8 != 0) {
   if (VAR_8 < 0)
    FUNC_0("%s's event failed with %d\n",
      VAR_7->name, VAR_8);
   return;
  }
 }

 if (VAR_2->claimed & VAR_1)
  FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_2->claimed & VAR_0 && VAR_6 && VAR_2->hiddev_hid_event)
  VAR_2->hiddev_hid_event(VAR_2, VAR_3, VAR_4, VAR_5);
}
