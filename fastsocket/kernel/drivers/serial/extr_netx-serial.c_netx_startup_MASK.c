
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_9 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ,struct uart_port*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct uart_port *VAR_10)
{
 int VAR_11;

 VAR_11 = FUNC_2(VAR_10->irq, VAR_9, 0,
        VAR_5, VAR_10);
 if (VAR_11) {
  FUNC_0(VAR_10->dev, "unable to grab irq%d\n",VAR_10->irq);
  goto exit;
 }

 FUNC_3(FUNC_1(VAR_10->membase + VAR_8) | VAR_6,
  VAR_10->membase + VAR_8);

 FUNC_3(VAR_0 | VAR_1 | VAR_3 | VAR_2 | VAR_4,
  VAR_10->membase + VAR_7);

exit:
 return VAR_11;
}
