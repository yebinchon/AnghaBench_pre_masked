
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int flags; struct isi_port* driver_data; } ;
struct TYPE_2__ {int flags; int count; } ;
struct isi_port {int channel; TYPE_1__ port; scalar_t__ xmit_tail; scalar_t__ xmit_head; scalar_t__ xmit_cnt; struct isi_board* card; } ;
struct isi_board {int shift_count; int card_lock; int base; int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct tty_struct *VAR_5)
{
 struct isi_port *VAR_6 = VAR_5->driver_data;
 struct isi_board *VAR_7 = VAR_6->card;
 unsigned long VAR_8;

 if (VAR_6->port.flags & VAR_0)
  return 0;
 if (FUNC_7(&VAR_6->port) < 0)
  return -VAR_1;

 FUNC_5(&VAR_7->card_lock, VAR_8);
 FUNC_2(VAR_4, &VAR_5->flags);
 if (VAR_6->port.count == 1)
  VAR_7->count++;

 VAR_6->xmit_cnt = VAR_6->xmit_head = VAR_6->xmit_tail = 0;


 if (FUNC_1(VAR_7->base) == 0) {
  FUNC_4(0x8000 | (VAR_6->channel << VAR_7->shift_count) | 0x02,
    VAR_7->base);
  FUNC_4(((VAR_3 | VAR_2) << 8) | 0x06, VAR_7->base);
  FUNC_0(VAR_7->base);
 }

 FUNC_3(VAR_5);
 VAR_6->port.flags |= VAR_0;
 FUNC_6(&VAR_7->card_lock, VAR_8);

 return 0;
}
