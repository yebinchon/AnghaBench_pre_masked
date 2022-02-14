
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_uart_port {int index; int write_lock; int func_lock; int open_lock; int kref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct sdio_uart_port** VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct sdio_uart_port *VAR_4)
{
 int VAR_5, VAR_6 = -VAR_0;

 FUNC_0(&VAR_4->kref);
 FUNC_1(&VAR_4->open_lock);
 FUNC_1(&VAR_4->func_lock);
 FUNC_3(&VAR_4->write_lock);

 FUNC_2(&VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (!VAR_2[VAR_5]) {
   VAR_4->index = VAR_5;
   VAR_2[VAR_5] = VAR_4;
   VAR_6 = 0;
   break;
  }
 }
 FUNC_4(&VAR_3);

 return VAR_6;
}
