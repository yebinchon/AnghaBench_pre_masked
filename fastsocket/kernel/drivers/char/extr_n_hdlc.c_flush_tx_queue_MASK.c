
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct n_hdlc_buf {int dummy; } ;
struct TYPE_2__ {int spinlock; } ;
struct n_hdlc {TYPE_1__ tx_buf_list; struct n_hdlc_buf* tbuf; int tx_free_buf_list; } ;


 struct n_hdlc_buf* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,struct n_hdlc_buf*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct n_hdlc* FUNC_4 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_0)
{
 struct n_hdlc *VAR_1 = FUNC_4(VAR_0);
 struct n_hdlc_buf *VAR_2;
 unsigned long VAR_3;

 while ((VAR_2 = FUNC_0(&VAR_1->tx_buf_list)))
  FUNC_1(&VAR_1->tx_free_buf_list, VAR_2);
  FUNC_2(&VAR_1->tx_buf_list.spinlock, VAR_3);
 if (VAR_1->tbuf) {
  FUNC_1(&VAR_1->tx_free_buf_list, VAR_1->tbuf);
  VAR_1->tbuf = ((void*)0);
 }
 FUNC_3(&VAR_1->tx_buf_list.spinlock, VAR_3);
}
