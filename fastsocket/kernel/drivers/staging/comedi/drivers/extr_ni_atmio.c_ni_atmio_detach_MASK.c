
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ irq; scalar_t__ iobase; } ;
struct TYPE_2__ {scalar_t__ isapnp_dev; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (scalar_t__,struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2)
{
 FUNC_1(VAR_2);

 if (VAR_2->iobase)
  FUNC_3(VAR_2->iobase, VAR_0);
 if (VAR_2->irq) {
  FUNC_0(VAR_2->irq, VAR_2);
 }
 if (VAR_1->isapnp_dev)
  FUNC_2(VAR_1->isapnp_dev);

 return 0;
}
