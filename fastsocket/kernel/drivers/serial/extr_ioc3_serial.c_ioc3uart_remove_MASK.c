
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct ioc3_submodule {size_t id; } ;
struct ioc3_port {TYPE_2__* ic_port; int ip_dma_ringbuf; scalar_t__ ip_cpu_ringbuf; TYPE_1__* ip_idd; } ;
struct ioc3_driver_data {struct ioc3_port** data; } ;
struct ioc3_card {TYPE_2__* ic_port; int ip_dma_ringbuf; scalar_t__ ip_cpu_ringbuf; TYPE_1__* ip_idd; } ;
struct TYPE_4__ {struct ioc3_port* icp_port; struct uart_port* icp_uart_port; } ;
struct TYPE_3__ {int pdev; } ;


 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct ioc3_port*) ;
 int FUNC_4 (int ,int ,void*,int ) ;
 int FUNC_5 (int *,struct uart_port*) ;

__attribute__((used)) static int FUNC_6(struct ioc3_submodule *VAR_3,
   struct ioc3_driver_data *VAR_4)
{
 struct ioc3_card *VAR_5 = VAR_4->data[VAR_3->id];
 struct uart_port *VAR_6;
 struct ioc3_port *VAR_7;
 int VAR_8;

 if (VAR_5) {
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
   VAR_6 = &VAR_5->ic_port[FUNC_1(VAR_8)].
     icp_uart_port[FUNC_0(VAR_8)];
   if (VAR_6)
    FUNC_5(&VAR_2, VAR_6);
   VAR_7 = VAR_5->ic_port[FUNC_1(VAR_8)].icp_port;
   if (VAR_7 && FUNC_2(VAR_8)
     && (FUNC_1(VAR_8) == 0)) {
    FUNC_4(VAR_7->ip_idd->pdev,
     VAR_1,
     (void *)VAR_7->ip_cpu_ringbuf,
     VAR_7->ip_dma_ringbuf);
    FUNC_3(VAR_7);
    VAR_5->ic_port[FUNC_1(VAR_8)].
       icp_port = ((void*)0);
   }
  }
  FUNC_3(VAR_5);
  VAR_4->data[VAR_3->id] = ((void*)0);
 }
 return 0;
}
