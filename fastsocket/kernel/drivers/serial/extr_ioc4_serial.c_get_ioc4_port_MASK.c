
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dev; } ;
struct ioc4_port {struct uart_port* ip_port; struct uart_port** ip_all_ports; } ;
struct ioc4_driver_data {struct ioc4_control* idd_serial_data; } ;
struct ioc4_control {TYPE_1__* ic_port; } ;
struct TYPE_2__ {struct ioc4_port* icp_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ioc4_driver_data* FUNC_0 (int ) ;

__attribute__((used)) static struct ioc4_port *FUNC_1(struct uart_port *VAR_3, int VAR_4)
{
 struct ioc4_driver_data *VAR_5 = FUNC_0(VAR_3->dev);
 struct ioc4_control *VAR_6 = VAR_5->idd_serial_data;
 struct ioc4_port *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_6) {
  for ( VAR_8 = 0; VAR_8 < VAR_0;
       VAR_8++ ) {
   VAR_7 = VAR_6->ic_port[VAR_8].icp_port;
   if (!VAR_7)
    continue;
   for (VAR_9 = VAR_2;
      VAR_9 < VAR_1;
      VAR_9++) {
    if (VAR_3 == VAR_7->ip_all_ports
       [VAR_9]) {

     if (VAR_4) {
      VAR_7->ip_port = VAR_3;
     }
     return VAR_7;
    }
   }
  }
 }
 return ((void*)0);
}
