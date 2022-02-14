
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int * disc_data; } ;
struct hci_uart {TYPE_1__* proto; int flags; struct hci_dev* hdev; } ;
struct hci_dev {int dummy; } ;
struct TYPE_2__ {int (* close ) (struct hci_uart*) ;} ;


 int FUNC_0 (char*,struct tty_struct*) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_uart*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_1)
{
 struct hci_uart *VAR_2 = (void *)VAR_1->disc_data;

 FUNC_0("tty %p", VAR_1);


 VAR_1->disc_data = ((void*)0);

 if (VAR_2) {
  struct hci_dev *VAR_3 = VAR_2->hdev;

  if (VAR_3)
   FUNC_2(VAR_3);

  if (FUNC_5(VAR_0, &VAR_2->flags)) {
   VAR_2->proto->close(VAR_2);
   FUNC_3(VAR_3);
   FUNC_1(VAR_3);
  }
 }
}
