
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uartclk; scalar_t__ membase; } ;
struct imx_port {TYPE_1__ port; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct imx_port *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6;




 VAR_5 = VAR_1 << 10 | VAR_0;
 VAR_6 = (FUNC_1(VAR_3->clk) + VAR_3->port.uartclk / 2)
   / VAR_3->port.uartclk;

 if(!VAR_6)
  VAR_6 = 1;

 VAR_5 |= FUNC_0(VAR_6);

 FUNC_2(VAR_5, VAR_3->port.membase + VAR_2);

 return 0;
}
