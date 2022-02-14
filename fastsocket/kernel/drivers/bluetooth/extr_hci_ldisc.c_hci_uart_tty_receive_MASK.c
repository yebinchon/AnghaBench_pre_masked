
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct tty_struct {scalar_t__ disc_data; } ;
struct hci_uart {int rx_lock; TYPE_3__* hdev; TYPE_1__* proto; int flags; struct tty_struct* tty; } ;
struct TYPE_5__ {int byte_rx; } ;
struct TYPE_6__ {TYPE_2__ stat; } ;
struct TYPE_4__ {int (* recv ) (struct hci_uart*,void*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hci_uart*,void*,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_1, const u8 *VAR_2, char *VAR_3, int VAR_4)
{
 struct hci_uart *VAR_5 = (void *)VAR_1->disc_data;

 if (!VAR_5 || VAR_1 != VAR_5->tty)
  return;

 if (!FUNC_3(VAR_0, &VAR_5->flags))
  return;

 FUNC_0(&VAR_5->rx_lock);
 VAR_5->proto->recv(VAR_5, (void *) VAR_2, VAR_4);
 VAR_5->hdev->stat.byte_rx += VAR_4;
 FUNC_1(&VAR_5->rx_lock);

 FUNC_4(VAR_1);
}
