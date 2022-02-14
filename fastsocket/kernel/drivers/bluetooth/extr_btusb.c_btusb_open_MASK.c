
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hci_dev {int flags; int name; struct btusb_data* driver_data; } ;
struct btusb_data {TYPE_1__* intf; int flags; int intr_anchor; } ;
struct TYPE_3__ {int needs_remote_wakeup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct hci_dev *VAR_4)
{
 struct btusb_data *VAR_5 = VAR_4->driver_data;
 int VAR_6;

 FUNC_0("%s", VAR_4->name);

 VAR_6 = FUNC_6(VAR_5->intf);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5->intf->needs_remote_wakeup = 1;

 if (FUNC_5(VAR_3, &VAR_4->flags))
  goto done;

 if (FUNC_5(VAR_1, &VAR_5->flags))
  goto done;

 VAR_6 = FUNC_2(VAR_4, VAR_2);
 if (VAR_6 < 0)
  goto failed;

 VAR_6 = FUNC_1(VAR_4, VAR_2);
 if (VAR_6 < 0) {
  FUNC_8(&VAR_5->intr_anchor);
  goto failed;
 }

 FUNC_4(VAR_0, &VAR_5->flags);
 FUNC_1(VAR_4, VAR_2);

done:
 FUNC_7(VAR_5->intf);
 return 0;

failed:
 FUNC_3(VAR_1, &VAR_5->flags);
 FUNC_3(VAR_3, &VAR_4->flags);
 FUNC_7(VAR_5->intf);
 return VAR_6;
}
