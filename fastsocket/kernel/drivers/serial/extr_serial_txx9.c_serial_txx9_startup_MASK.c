
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int mctrl; int irq; } ;
struct uart_txx9_port {TYPE_1__ port; } ;
struct uart_port {int dummy; } ;


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
 int FUNC_0 (int ,int ,int ,char*,struct uart_txx9_port*) ;
 int VAR_11 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct uart_txx9_port*,int ,int) ;
 int FUNC_3 (struct uart_txx9_port*,int ,int ) ;
 int FUNC_4 (struct uart_txx9_port*,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct uart_txx9_port* FUNC_7 (struct uart_port*) ;

__attribute__((used)) static int FUNC_8(struct uart_port *VAR_12)
{
 struct uart_txx9_port *VAR_13 = FUNC_7(VAR_12);
 unsigned long VAR_14;
 int VAR_15;





 FUNC_4(VAR_13, VAR_4,
  VAR_7 | VAR_6 | VAR_5);

 FUNC_2(VAR_13, VAR_4,
   VAR_7 | VAR_6 | VAR_5);
 FUNC_3(VAR_13, VAR_1, 0);




 FUNC_3(VAR_13, VAR_3, 0);

 VAR_15 = FUNC_0(VAR_13->port.irq, VAR_11,
        VAR_0, "serial_txx9", VAR_13);
 if (VAR_15)
  return VAR_15;




 FUNC_5(&VAR_13->port.lock, VAR_14);
 FUNC_1(&VAR_13->port, VAR_13->port.mctrl);
 FUNC_6(&VAR_13->port.lock, VAR_14);


 FUNC_2(VAR_13, VAR_8, VAR_9 | VAR_10);




 FUNC_4(VAR_13, VAR_1, VAR_2);

 return 0;
}
