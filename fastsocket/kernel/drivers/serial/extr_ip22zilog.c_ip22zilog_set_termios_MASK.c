
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct uart_ip22zilog_port {TYPE_1__ port; int flags; } ;
struct ktermios {int c_cflag; int c_iflag; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct uart_port*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct uart_ip22zilog_port*,int ,int ,int) ;
 int FUNC_4 (struct uart_ip22zilog_port*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct uart_port*,struct ktermios*,struct ktermios*,int,int) ;
 int FUNC_8 (struct uart_port*,int ,int) ;

__attribute__((used)) static void
FUNC_9(struct uart_port *VAR_3, struct ktermios *VAR_4,
        struct ktermios *VAR_5)
{
 struct uart_ip22zilog_port *VAR_6 = (struct uart_ip22zilog_port *) VAR_3;
 unsigned long VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_7(VAR_3, VAR_4, VAR_5, 1200, 76800);

 FUNC_5(&VAR_6->port.lock, VAR_7);

 VAR_9 = FUNC_0(VAR_8, VAR_1 / VAR_2);

 FUNC_3(VAR_6, VAR_4->c_cflag, VAR_4->c_iflag, VAR_9);

 if (FUNC_1(&VAR_6->port, VAR_4->c_cflag))
  VAR_6->flags |= VAR_0;
 else
  VAR_6->flags &= ~VAR_0;

 FUNC_4(VAR_6, FUNC_2(VAR_3));
 FUNC_8(VAR_3, VAR_4->c_cflag, VAR_8);

 FUNC_6(&VAR_6->port.lock, VAR_7);
}
