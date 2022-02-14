
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct platform_device {size_t id; } ;
struct TYPE_3__ {int port; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4)
{
 FUNC_2("mpsc_drv_exit: Removing MPSC %d\n", VAR_4->id);

 if (VAR_4->id < VAR_1) {
  FUNC_3(&VAR_3, &VAR_2[VAR_4->id].port);
  FUNC_1((struct uart_port *)
    &VAR_2[VAR_4->id].port);
  FUNC_0(&VAR_2[VAR_4->id]);
  return 0;
 } else {
  return -VAR_0;
 }
}
