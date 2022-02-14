
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int poll_wait; struct r_port* driver_data; } ;
struct r_port {int channel; int slock; scalar_t__ xmit_tail; scalar_t__ xmit_head; scalar_t__ xmit_cnt; } ;
typedef int CHANNEL_t ;


 scalar_t__ FUNC_0 (struct r_port*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_0)
{
 struct r_port *VAR_1 = VAR_0->driver_data;
 CHANNEL_t *VAR_2;
 unsigned long VAR_3;

 if (FUNC_0(VAR_1, "rp_flush_buffer"))
  return;

 FUNC_2(&VAR_1->slock, VAR_3);
 VAR_1->xmit_cnt = VAR_1->xmit_head = VAR_1->xmit_tail = 0;
 FUNC_3(&VAR_1->slock, VAR_3);




 FUNC_4(VAR_0);

 VAR_2 = &VAR_1->channel;
 FUNC_1(VAR_2);
}
