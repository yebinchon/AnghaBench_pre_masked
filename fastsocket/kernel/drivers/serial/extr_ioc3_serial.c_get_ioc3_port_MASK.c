
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dev; } ;
struct ioc3_port {int dummy; } ;
struct ioc3_driver_data {struct ioc3_card** data; } ;
struct ioc3_card {TYPE_1__* ic_port; } ;
struct TYPE_2__ {struct ioc3_port* icp_port; struct uart_port* icp_uart_port; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct ioc3_driver_data* FUNC_1 (int ) ;

__attribute__((used)) static struct ioc3_port *FUNC_2(struct uart_port *VAR_3)
{
 struct ioc3_driver_data *VAR_4 = FUNC_1(VAR_3->dev);
 struct ioc3_card *VAR_5 = VAR_4->data[VAR_2];
 int VAR_6, VAR_7;

 if (!VAR_5) {
  FUNC_0();
  return ((void*)0);
 }
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   if (VAR_3 == &VAR_5->ic_port[VAR_6].icp_uart_port[VAR_7])
    return VAR_5->ic_port[VAR_6].icp_port;
  }
 }
 FUNC_0();
 return ((void*)0);
}
