
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_2__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct sdio_uart_port {unsigned int read_status_mask; unsigned int ignore_status_mask; TYPE_1__ icount; struct tty_struct* tty; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int FUNC_0 (struct sdio_uart_port*,int ) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(struct sdio_uart_port *VAR_12, unsigned int *VAR_13)
{
 struct tty_struct *VAR_14 = VAR_12->tty;
 unsigned int VAR_15, VAR_16;
 int VAR_17 = 256;

 do {
  VAR_15 = FUNC_0(VAR_12, VAR_11);
  VAR_16 = VAR_2;
  VAR_12->icount.rx++;

  if (FUNC_3(*VAR_13 & (VAR_6 | VAR_10 |
            VAR_8 | VAR_9))) {



   if (*VAR_13 & VAR_6) {
    *VAR_13 &= ~(VAR_8 | VAR_10);
    VAR_12->icount.brk++;
   } else if (*VAR_13 & VAR_10)
    VAR_12->icount.parity++;
   else if (*VAR_13 & VAR_8)
    VAR_12->icount.frame++;
   if (*VAR_13 & VAR_9)
    VAR_12->icount.overrun++;




   *VAR_13 &= VAR_12->read_status_mask;
   if (*VAR_13 & VAR_6) {
    VAR_16 = VAR_0;
   } else if (*VAR_13 & VAR_10)
    VAR_16 = VAR_4;
   else if (*VAR_13 & VAR_8)
    VAR_16 = VAR_1;
  }

  if ((*VAR_13 & VAR_12->ignore_status_mask & ~VAR_9) == 0)
   FUNC_2(VAR_14, VAR_15, VAR_16);





  if (*VAR_13 & ~VAR_12->ignore_status_mask & VAR_9)
   FUNC_2(VAR_14, 0, VAR_3);

  *VAR_13 = FUNC_0(VAR_12, VAR_5);
 } while ((*VAR_13 & VAR_7) && (VAR_17-- > 0));
 FUNC_1(VAR_14);
}
