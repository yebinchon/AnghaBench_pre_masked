
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct uart_port {int dummy; } ;
struct TYPE_2__ {int mpc52xx_psc_ipcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct uart_port*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static unsigned int
FUNC_2(struct uart_port *VAR_5)
{
 unsigned int VAR_6 = VAR_4;
 u8 VAR_7 = FUNC_1(&FUNC_0(VAR_5)->mpc52xx_psc_ipcr);

 if (!(VAR_7 & VAR_0))
  VAR_6 |= VAR_3;
 if (!(VAR_7 & VAR_1))
  VAR_6 |= VAR_2;

 return VAR_6;
}
