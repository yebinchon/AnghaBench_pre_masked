
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int name; struct isi_port* driver_data; } ;
struct TYPE_2__ {unsigned char* xmit_buf; } ;
struct isi_port {int xmit_cnt; int xmit_head; TYPE_1__ port; struct isi_board* card; } ;
struct isi_board {int card_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct isi_port*,int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_1, unsigned char VAR_2)
{
 struct isi_port *VAR_3 = VAR_1->driver_data;
 struct isi_board *VAR_4 = VAR_3->card;
 unsigned long VAR_5;

 if (FUNC_0(VAR_3, VAR_1->name, "isicom_put_char"))
  return 0;

 FUNC_1(&VAR_4->card_lock, VAR_5);
 if (VAR_3->xmit_cnt >= VAR_0 - 1) {
  FUNC_2(&VAR_4->card_lock, VAR_5);
  return 0;
 }

 VAR_3->port.xmit_buf[VAR_3->xmit_head++] = VAR_2;
 VAR_3->xmit_head &= (VAR_0 - 1);
 VAR_3->xmit_cnt++;
 FUNC_2(&VAR_4->card_lock, VAR_5);
 return 1;
}
