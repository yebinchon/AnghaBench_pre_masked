
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int line; } ;
struct TYPE_2__ {int irq; } ;
struct sbd_port {int tx_stopped; TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int FUNC_2 (struct sbd_port*,int ) ;
 int FUNC_3 (struct sbd_port*,int ) ;
 int FUNC_4 (int ,int ,int ,char*,struct sbd_port*) ;
 int VAR_10 ;
 int FUNC_5 (struct sbd_port*) ;
 struct sbd_port* FUNC_6 (struct uart_port*) ;
 int FUNC_7 (struct sbd_port*,int ,unsigned int) ;
 int FUNC_8 (struct sbd_port*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct uart_port *VAR_11)
{
 struct sbd_port *VAR_12 = FUNC_6(VAR_11);
 unsigned int VAR_13;
 int VAR_14;

 VAR_14 = FUNC_4(VAR_12->port.irq, VAR_10,
     VAR_0, "sb1250-duart", VAR_12);
 if (VAR_14)
  return VAR_14;


 FUNC_5(VAR_12);


 FUNC_7(VAR_12, VAR_7, VAR_9);
 FUNC_3(VAR_12, FUNC_1((VAR_11->line) % 2));


 VAR_13 = FUNC_2(VAR_12, VAR_8);
 VAR_13 &= ~(VAR_4 | VAR_6);
 FUNC_7(VAR_12, VAR_8, VAR_13);


 FUNC_7(VAR_12, VAR_7, VAR_5 | VAR_3);
 VAR_12->tx_stopped = 1;


 FUNC_8(VAR_12, FUNC_0((VAR_11->line) % 2),
       VAR_1 | VAR_2);

 return 0;
}
