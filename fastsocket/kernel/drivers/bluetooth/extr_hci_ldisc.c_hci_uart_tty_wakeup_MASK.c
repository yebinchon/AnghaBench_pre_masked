
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int flags; scalar_t__ disc_data; } ;
struct hci_uart {int flags; struct tty_struct* tty; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hci_uart*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_2)
{
 struct hci_uart *VAR_3 = (void *)VAR_2->disc_data;

 FUNC_0("");

 if (!VAR_3)
  return;

 FUNC_1(VAR_1, &VAR_2->flags);

 if (VAR_2 != VAR_3->tty)
  return;

 if (FUNC_3(VAR_0, &VAR_3->flags))
  FUNC_2(VAR_3);
}
