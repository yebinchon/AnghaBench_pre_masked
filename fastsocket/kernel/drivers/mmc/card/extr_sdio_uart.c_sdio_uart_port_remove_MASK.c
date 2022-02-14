
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_uart_port {size_t index; int open_lock; int tty; scalar_t__ opened; int func_lock; struct sdio_func* func; } ;
struct sdio_func {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sdio_func*) ;
 int FUNC_4 (struct sdio_func*) ;
 int FUNC_5 (struct sdio_func*) ;
 int FUNC_6 (struct sdio_func*) ;
 int FUNC_7 (struct sdio_uart_port*) ;
 struct sdio_uart_port** VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct sdio_uart_port *VAR_2)
{
 struct sdio_func *VAR_3;

 FUNC_0(VAR_0[VAR_2->index] != VAR_2);

 FUNC_8(&VAR_1);
 VAR_0[VAR_2->index] = ((void*)0);
 FUNC_9(&VAR_1);
 FUNC_1(&VAR_2->open_lock);
 FUNC_1(&VAR_2->func_lock);
 VAR_3 = VAR_2->func;
 FUNC_3(VAR_3);
 VAR_2->func = ((void*)0);
 FUNC_2(&VAR_2->func_lock);
 if (VAR_2->opened)
  FUNC_10(VAR_2->tty);
 FUNC_2(&VAR_2->open_lock);
 FUNC_6(VAR_3);
 FUNC_4(VAR_3);
 FUNC_5(VAR_3);

 FUNC_7(VAR_2);
}
