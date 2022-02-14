
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int flags; int * membase; int mapbase; } ;
struct mpc52xx_psc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int,char*) ;

__attribute__((used)) static int
FUNC_3(struct uart_port *VAR_3)
{
 int VAR_4;

 if (VAR_3->flags & VAR_2)
  VAR_3->membase = FUNC_0(VAR_3->mapbase,
     sizeof(struct mpc52xx_psc));

 if (!VAR_3->membase)
  return -VAR_1;

 VAR_4 = FUNC_2(VAR_3->mapbase, sizeof(struct mpc52xx_psc),
   "mpc52xx_psc_uart") != ((void*)0) ? 0 : -VAR_0;

 if (VAR_4 && (VAR_3->flags & VAR_2)) {
  FUNC_1(VAR_3->membase);
  VAR_3->membase = ((void*)0);
 }

 return VAR_4;
}
