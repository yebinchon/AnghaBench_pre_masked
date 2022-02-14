
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sixpack {int slottime; int status1; unsigned char persistence; int led_state; int tx_enable; int* xbuff; int status2; int xleft; int xhead; int tx_t; TYPE_2__* tty; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* write ) (TYPE_2__*,int*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int*,int) ;
 int FUNC_2 (TYPE_2__*,int*,int) ;
 int FUNC_3 (TYPE_2__*,int*,int) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_3)
{
 struct sixpack *VAR_4 = (struct sixpack *) VAR_3;
 int VAR_5, VAR_6 = VAR_4->slottime;
 static unsigned char VAR_7;

 VAR_7 = VAR_7 * 17 + 41;

 if (((VAR_4->status1 & VAR_1) == 0) && (VAR_7 < VAR_4->persistence)) {
  VAR_4->led_state = 0x70;
  VAR_4->tty->ops->write(VAR_4->tty, &VAR_4->led_state, 1);
  VAR_4->tx_enable = 1;
  VAR_5 = VAR_4->tty->ops->write(VAR_4->tty, VAR_4->xbuff, VAR_4->status2);
  VAR_4->xleft -= VAR_5;
  VAR_4->xhead += VAR_5;
  VAR_4->led_state = 0x60;
  VAR_4->tty->ops->write(VAR_4->tty, &VAR_4->led_state, 1);
  VAR_4->status2 = 0;
 } else
  FUNC_0(&VAR_4->tx_t, VAR_2 + ((VAR_6 + 1) * VAR_0) / 100);
}
