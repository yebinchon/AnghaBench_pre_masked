
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int mapbase; } ;
struct pnx8xxx_port {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct uart_port *VAR_2)
{
 struct pnx8xxx_port *VAR_3 = (struct pnx8xxx_port *)VAR_2;
 return FUNC_0(VAR_3->port.mapbase, VAR_1,
   "pnx8xxx-uart") != ((void*)0) ? 0 : -VAR_0;
}
