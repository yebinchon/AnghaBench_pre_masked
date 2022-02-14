
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int flags; int mapbase; int * membase; int dev; } ;
struct platform_device {TYPE_1__* resource; } ;
struct TYPE_2__ {int end; int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,char*) ;
 struct platform_device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct uart_port *VAR_3)
{
 struct platform_device *VAR_4 = FUNC_3(VAR_3->dev);
 int VAR_5 = VAR_4->resource[0].end - VAR_4->resource[0].start + 1;

 if (!FUNC_2(VAR_3->mapbase, VAR_5, "atmel_serial"))
  return -VAR_0;

 if (VAR_3->flags & VAR_2) {
  VAR_3->membase = FUNC_0(VAR_3->mapbase, VAR_5);
  if (VAR_3->membase == ((void*)0)) {
   FUNC_1(VAR_3->mapbase, VAR_5);
   return -VAR_1;
  }
 }

 return 0;
}
