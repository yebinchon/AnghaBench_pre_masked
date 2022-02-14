
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int flags; int * membase; int mapbase; int dev; } ;
struct platform_device {TYPE_1__* resource; } ;
struct TYPE_2__ {int end; int start; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 struct platform_device* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_2(VAR_1->dev);
 int VAR_3 = VAR_2->resource[0].end - VAR_2->resource[0].start + 1;

 FUNC_1(VAR_1->mapbase, VAR_3);

 if (VAR_1->flags & VAR_0) {
  FUNC_0(VAR_1->membase);
  VAR_1->membase = ((void*)0);
 }
}
