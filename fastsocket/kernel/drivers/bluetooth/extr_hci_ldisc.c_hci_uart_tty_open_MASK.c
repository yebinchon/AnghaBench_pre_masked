
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int receive_room; TYPE_3__* ldisc; struct hci_uart* disc_data; TYPE_1__* ops; } ;
struct hci_uart {int rx_lock; struct tty_struct* tty; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* flush_buffer ) (struct tty_struct*) ;} ;
struct TYPE_4__ {int * write; } ;


 int FUNC_0 (char*,struct tty_struct*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hci_uart* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_6(struct tty_struct *VAR_4)
{
 struct hci_uart *VAR_5 = (void *) VAR_4->disc_data;

 FUNC_0("tty %p", VAR_4);



 if (VAR_5)
  return -VAR_0;



 if (VAR_4->ops->write == ((void*)0))
  return -VAR_2;

 if (!(VAR_5 = FUNC_2(sizeof(struct hci_uart), VAR_3))) {
  FUNC_1("Can't allocate control structure");
  return -VAR_1;
 }

 VAR_4->disc_data = VAR_5;
 VAR_5->tty = VAR_4;
 VAR_4->receive_room = 65536;

 FUNC_3(&VAR_5->rx_lock);






 if (VAR_4->ldisc->ops->flush_buffer)
  VAR_4->ldisc->ops->flush_buffer(VAR_4);
 FUNC_5(VAR_4);

 return 0;
}
