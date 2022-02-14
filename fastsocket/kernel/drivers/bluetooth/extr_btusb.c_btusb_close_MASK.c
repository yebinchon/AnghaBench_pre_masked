
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hci_dev {int flags; int name; struct btusb_data* driver_data; } ;
struct btusb_data {int deferred; TYPE_1__* intf; int flags; int waker; int work; } ;
struct TYPE_3__ {scalar_t__ needs_remote_wakeup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct btusb_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct hci_dev *VAR_4)
{
 struct btusb_data *VAR_5 = VAR_4->driver_data;
 int VAR_6;

 FUNC_0("%s", VAR_4->name);

 if (!FUNC_4(VAR_3, &VAR_4->flags))
  return 0;

 FUNC_2(&VAR_5->work);
 FUNC_2(&VAR_5->waker);

 FUNC_3(VAR_2, &VAR_5->flags);
 FUNC_3(VAR_0, &VAR_5->flags);
 FUNC_3(VAR_1, &VAR_5->flags);

 FUNC_1(VAR_5);
 VAR_6 = FUNC_5(VAR_5->intf);
 if (VAR_6 < 0)
  goto failed;

 VAR_5->intf->needs_remote_wakeup = 0;
 FUNC_6(VAR_5->intf);

failed:
 FUNC_7(&VAR_5->deferred);
 return 0;
}
