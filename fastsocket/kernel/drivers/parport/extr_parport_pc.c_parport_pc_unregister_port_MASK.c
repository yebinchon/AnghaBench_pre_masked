
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parport_pc_private {int dma_handle; scalar_t__ dma_buf; int list; } ;
struct parport_operations {int dma_handle; scalar_t__ dma_buf; int list; } ;
struct parport {scalar_t__ dma; scalar_t__ irq; int size; int modes; struct parport_pc_private* private_data; TYPE_1__* physport; scalar_t__ base_hi; scalar_t__ base; struct parport_pc_private* ops; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,struct parport*) ;
 int FUNC_3 (struct parport_pc_private*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct parport*) ;
 int FUNC_6 (struct parport*) ;
 int VAR_4 ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct parport *VAR_5)
{
 struct parport_pc_private *VAR_6 = VAR_5->private_data;
 struct parport_operations *VAR_7 = VAR_5->ops;

 FUNC_6(VAR_5);
 FUNC_8(&VAR_4);
 FUNC_4(&VAR_6->list);
 FUNC_9(&VAR_4);




 if (VAR_5->irq != VAR_2)
  FUNC_2(VAR_5->irq, VAR_5);
 FUNC_7(VAR_5->base, 3);
 if (VAR_5->size > 3)
  FUNC_7(VAR_5->base + 3, VAR_5->size - 3);
 if (VAR_5->modes & VAR_3)
  FUNC_7(VAR_5->base_hi, 3);






 FUNC_3(VAR_5->private_data);
 FUNC_5(VAR_5);
 FUNC_3(VAR_7);
}
