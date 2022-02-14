
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio_info {scalar_t__ irq; struct uio_device* uio_dev; } ;
struct uio_device {int minor; int dev; } ;
struct TYPE_2__ {int class; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,struct uio_device*) ;
 int FUNC_4 (struct uio_device*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 () ;
 int FUNC_6 (struct uio_device*) ;
 int FUNC_7 (struct uio_device*) ;
 int VAR_1 ;

void FUNC_8(struct uio_info *VAR_2)
{
 struct uio_device *VAR_3;

 if (!VAR_2 || !VAR_2->uio_dev)
  return;

 VAR_3 = VAR_2->uio_dev;

 FUNC_7(VAR_3);

 if (VAR_2->irq >= 0)
  FUNC_3(VAR_2->irq, VAR_3);

 FUNC_6(VAR_3);

 FUNC_1(VAR_3->dev, ((void*)0));
 FUNC_2(VAR_0->class, FUNC_0(VAR_1, VAR_3->minor));
 FUNC_4(VAR_3);
 FUNC_5();

 return;
}
