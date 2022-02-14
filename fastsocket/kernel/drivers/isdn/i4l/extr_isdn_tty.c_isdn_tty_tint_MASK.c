
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct sk_buff {int len; } ;
struct TYPE_3__ {int xmit_queue; int lsr; int msr; int send_outstanding; struct tty_struct* tty; int isdn_channel; int isdn_driver; } ;
typedef TYPE_1__ modem_info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int,struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (struct tty_struct*) ;

__attribute__((used)) static void
FUNC_5(modem_info * VAR_2)
{
 struct sk_buff *VAR_3 = FUNC_2(&VAR_2->xmit_queue);
 int VAR_4, VAR_5;

 if (!VAR_3)
  return;
 VAR_4 = VAR_3->len;
 if ((VAR_5 = FUNC_1(VAR_2->isdn_driver,
        VAR_2->isdn_channel, 1, VAR_3)) == VAR_4) {
  struct tty_struct *VAR_6 = VAR_2->tty;
  VAR_2->send_outstanding++;
  VAR_2->msr &= ~VAR_1;
  VAR_2->lsr &= ~VAR_0;
  FUNC_4(VAR_6);
  return;
 }
 if (VAR_5 < 0) {

  FUNC_0(VAR_3);
  return;
 }
 FUNC_3(&VAR_2->xmit_queue, VAR_3);
}
