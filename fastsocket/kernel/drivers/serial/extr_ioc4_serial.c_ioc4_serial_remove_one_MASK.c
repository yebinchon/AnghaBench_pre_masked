
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct ioc4_soft {scalar_t__ is_ioc4_serial_addr; int ic_irq; struct ioc4_soft* ic_soft; int ip_dma_ringbuf; int ip_cpu_ringbuf; int ip_pdev; TYPE_1__* ic_port; } ;
struct ioc4_serial {int dummy; } ;
struct ioc4_port {scalar_t__ is_ioc4_serial_addr; int ic_irq; struct ioc4_port* ic_soft; int ip_dma_ringbuf; int ip_cpu_ringbuf; int ip_pdev; TYPE_1__* ic_port; } ;
struct ioc4_driver_data {struct ioc4_soft* idd_serial_data; } ;
struct ioc4_control {scalar_t__ is_ioc4_serial_addr; int ic_irq; struct ioc4_control* ic_soft; int ip_dma_ringbuf; int ip_cpu_ringbuf; int ip_pdev; TYPE_1__* ic_port; } ;
struct TYPE_2__ {struct ioc4_soft* icp_port; struct uart_port* icp_uart_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ,struct ioc4_soft*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ioc4_soft*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (unsigned long,int) ;
 int FUNC_5 (int *,struct uart_port*) ;

__attribute__((used)) static int FUNC_6(struct ioc4_driver_data *VAR_6)
{
 int VAR_7, VAR_8;
 struct ioc4_control *VAR_9;
 struct uart_port *VAR_10;
 struct ioc4_port *VAR_11;
 struct ioc4_soft *VAR_12;


 VAR_9 = VAR_6->idd_serial_data;
 if (!VAR_9)
  return 0;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  for (VAR_8 = VAR_3;
     VAR_8 < VAR_2;
     VAR_8++) {
   VAR_10 = &VAR_9->ic_port[VAR_7].icp_uart_port
       [VAR_8];
   if (VAR_10) {
    switch (VAR_8) {
    case 128:
     FUNC_5(&VAR_5,
       VAR_10);
     break;
    default:
    case 129:
     FUNC_5(&VAR_4,
       VAR_10);
     break;
    }
   }
  }
  VAR_11 = VAR_9->ic_port[VAR_7].icp_port;

  if (!(VAR_7 & 1) && VAR_11) {
   FUNC_3(VAR_11->ip_pdev,
     VAR_1,
     VAR_11->ip_cpu_ringbuf,
     VAR_11->ip_dma_ringbuf);
   FUNC_2(VAR_11);
  }
 }
 VAR_12 = VAR_9->ic_soft;
 if (VAR_12) {
  FUNC_0(VAR_9->ic_irq, VAR_12);
  if (VAR_12->is_ioc4_serial_addr) {
   FUNC_1(VAR_12->is_ioc4_serial_addr);
   FUNC_4((unsigned long)
        VAR_12->is_ioc4_serial_addr,
    sizeof(struct ioc4_serial));
  }
  FUNC_2(VAR_12);
 }
 FUNC_2(VAR_9);
 VAR_6->idd_serial_data = ((void*)0);

 return 0;
}
