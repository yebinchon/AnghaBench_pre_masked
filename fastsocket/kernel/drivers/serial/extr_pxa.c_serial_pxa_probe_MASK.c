
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fifosize; int line; int flags; int membase; int uartclk; int * dev; int * ops; scalar_t__ irq; scalar_t__ mapbase; int iotype; int type; } ;
struct uart_pxa_port {char* name; int clk; TYPE_1__ port; } ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct platform_device {int id; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (struct uart_pxa_port*) ;
 struct uart_pxa_port* FUNC_7 (int,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct uart_pxa_port*) ;
 int VAR_9 ;
 struct uart_pxa_port** VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_12)
{
 struct uart_pxa_port *VAR_13;
 struct resource *VAR_14, *VAR_15;
 int VAR_16;

 VAR_14 = FUNC_8(VAR_12, VAR_4, 0);
 VAR_15 = FUNC_8(VAR_12, VAR_3, 0);
 if (!VAR_14 || !VAR_15)
  return -VAR_0;

 VAR_13 = FUNC_7(sizeof(struct uart_pxa_port), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->clk = FUNC_2(&VAR_12->dev, ((void*)0));
 if (FUNC_0(VAR_13->clk)) {
  VAR_16 = FUNC_1(VAR_13->clk);
  goto err_free;
 }

 VAR_13->port.type = VAR_5;
 VAR_13->port.iotype = VAR_8;
 VAR_13->port.mapbase = VAR_14->start;
 VAR_13->port.irq = VAR_15->start;
 VAR_13->port.fifosize = 64;
 VAR_13->port.ops = &VAR_9;
 VAR_13->port.line = VAR_12->id;
 VAR_13->port.dev = &VAR_12->dev;
 VAR_13->port.flags = VAR_7 | VAR_6;
 VAR_13->port.uartclk = FUNC_3(VAR_13->clk);

 switch (VAR_12->id) {
 case 0: VAR_13->name = "FFUART"; break;
 case 1: VAR_13->name = "BTUART"; break;
 case 2: VAR_13->name = "STUART"; break;
 case 3: VAR_13->name = "HWUART"; break;
 default:
  VAR_13->name = "???";
  break;
 }

 VAR_13->port.membase = FUNC_5(VAR_14->start, VAR_14->end - VAR_14->start + 1);
 if (!VAR_13->port.membase) {
  VAR_16 = -VAR_1;
  goto err_clk;
 }

 VAR_10[VAR_12->id] = VAR_13;

 FUNC_10(&VAR_11, &VAR_13->port);
 FUNC_9(VAR_12, VAR_13);

 return 0;

 err_clk:
 FUNC_4(VAR_13->clk);
 err_free:
 FUNC_6(VAR_13);
 return VAR_16;
}
