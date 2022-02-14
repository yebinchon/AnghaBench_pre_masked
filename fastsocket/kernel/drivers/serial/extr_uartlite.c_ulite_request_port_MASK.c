
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ mapbase; int dev; int membase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (char*,struct uart_port*,unsigned long long) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ,char*) ;

__attribute__((used)) static int FUNC_5(struct uart_port *VAR_2)
{
 FUNC_2("ulite console: port=%p; port->mapbase=%llx\n",
   VAR_2, (unsigned long long) VAR_2->mapbase);

 if (!FUNC_4(VAR_2->mapbase, VAR_1, "uartlite")) {
  FUNC_0(VAR_2->dev, "Memory region busy\n");
  return -VAR_0;
 }

 VAR_2->membase = FUNC_1(VAR_2->mapbase, VAR_1);
 if (!VAR_2->membase) {
  FUNC_0(VAR_2->dev, "Unable to map registers\n");
  FUNC_3(VAR_2->mapbase, VAR_1);
  return -VAR_0;
 }

 return 0;
}
