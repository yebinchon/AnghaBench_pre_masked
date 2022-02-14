
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kaweth_device {int rx_urb; int irq_urb; int lowmem_work; int tx_urb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct kaweth_device *VAR_0)
{
 FUNC_1(VAR_0->irq_urb);
 FUNC_1(VAR_0->rx_urb);
 FUNC_1(VAR_0->tx_urb);

 FUNC_0(&VAR_0->lowmem_work);



 FUNC_1(VAR_0->irq_urb);
 FUNC_1(VAR_0->rx_urb);
}
