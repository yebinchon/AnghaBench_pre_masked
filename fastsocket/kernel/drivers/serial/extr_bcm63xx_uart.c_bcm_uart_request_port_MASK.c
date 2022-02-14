
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int mapbase; int dev; int membase; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,unsigned int,char*) ;

__attribute__((used)) static int FUNC_4(struct uart_port *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = VAR_1;
 if (!FUNC_3(VAR_2->mapbase, VAR_3, "bcm63xx")) {
  FUNC_0(VAR_2->dev, "Memory region busy\n");
  return -VAR_0;
 }

 VAR_2->membase = FUNC_1(VAR_2->mapbase, VAR_3);
 if (!VAR_2->membase) {
  FUNC_0(VAR_2->dev, "Unable to map registers\n");
  FUNC_2(VAR_2->mapbase, VAR_3);
  return -VAR_0;
 }
 return 0;
}
