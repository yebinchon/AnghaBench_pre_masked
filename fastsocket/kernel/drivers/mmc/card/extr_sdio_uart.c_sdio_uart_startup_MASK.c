
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned char* buf; } ;
struct sdio_uart_port {int ier; TYPE_3__ xmit; int func; TYPE_1__* tty; int mctrl; } ;
struct TYPE_5__ {int c_cflag; } ;
struct TYPE_4__ {int hw_stopped; int flags; TYPE_2__* termios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ,int (*) (int )) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sdio_uart_port*,int ) ;
 int FUNC_8 (struct sdio_uart_port*,int ,int) ;
 int FUNC_9 (struct sdio_uart_port*,TYPE_2__*,int *) ;
 int FUNC_10 (struct sdio_uart_port*) ;
 int FUNC_11 (struct sdio_uart_port*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct sdio_uart_port*) ;
 int FUNC_14 (struct sdio_uart_port*,int) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static int FUNC_16(struct sdio_uart_port *VAR_23)
{
 unsigned long VAR_24;
 int VAR_25;





 FUNC_15(VAR_8, &VAR_23->tty->flags);


 VAR_24 = FUNC_0(VAR_3);
 if (!VAR_24)
  return -VAR_2;
 VAR_23->xmit.buf = (unsigned char *)VAR_24;
 FUNC_1(&VAR_23->xmit);

 VAR_25 = FUNC_10(VAR_23);
 if (VAR_25)
  goto err1;
 VAR_25 = FUNC_6(VAR_23->func);
 if (VAR_25)
  goto err2;
 VAR_25 = FUNC_4(VAR_23->func, FUNC_12);
 if (VAR_25)
  goto err3;





 FUNC_8(VAR_23, VAR_9, VAR_12);
 FUNC_8(VAR_23, VAR_9, VAR_12 |
   VAR_10 | VAR_11);
 FUNC_8(VAR_23, VAR_9, 0);




 (void) FUNC_7(VAR_23, VAR_20);
 (void) FUNC_7(VAR_23, VAR_22);
 (void) FUNC_7(VAR_23, VAR_17);
 (void) FUNC_7(VAR_23, VAR_21);




 FUNC_8(VAR_23, VAR_18, VAR_19);

 VAR_23->ier = VAR_14 | VAR_13 | VAR_15 | VAR_16;
 VAR_23->mctrl = VAR_6;

 FUNC_9(VAR_23, VAR_23->tty->termios, ((void*)0));

 if (VAR_23->tty->termios->c_cflag & VAR_0)
  FUNC_14(VAR_23, VAR_7 | VAR_5);

 if (VAR_23->tty->termios->c_cflag & VAR_1)
  if (!(FUNC_11(VAR_23) & VAR_4))
   VAR_23->tty->hw_stopped = 1;

 FUNC_2(VAR_8, &VAR_23->tty->flags);


 FUNC_12(VAR_23->func);

 FUNC_13(VAR_23);
 return 0;

err3:
 FUNC_5(VAR_23->func);
err2:
 FUNC_13(VAR_23);
err1:
 FUNC_3((unsigned long)VAR_23->xmit.buf);
 return VAR_25;
}
