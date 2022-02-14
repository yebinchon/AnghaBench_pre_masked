
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qdio_irq {int dummy; } ;
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_2__ {struct qdio_irq* qdio_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (struct ccw_device*,int) ;

int FUNC_2(struct ccw_device *VAR_1, int VAR_2)
{
 struct qdio_irq *VAR_3 = VAR_1->private->qdio_data;
 int VAR_4;

 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_1, VAR_2);

 FUNC_0(VAR_1);
 return VAR_4;
}
