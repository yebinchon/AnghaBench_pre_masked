
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ private; scalar_t__ irq; int minor; } ;
struct TYPE_2__ {scalar_t__ mite; scalar_t__ counter_dev; } ;


 int FUNC_0 (scalar_t__,struct comedi_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int ) ;
 TYPE_1__* FUNC_5 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_0)
{
 FUNC_4("comedi%d: ni_660x: remove\n", VAR_0->minor);


 if (VAR_0->irq)
  FUNC_0(VAR_0->irq, VAR_0);

 if (VAR_0->private) {
  if (FUNC_5(VAR_0)->counter_dev)
   FUNC_3(FUNC_5(VAR_0)->counter_dev);
  if (FUNC_5(VAR_0)->mite) {
   FUNC_2(VAR_0);
   FUNC_1(FUNC_5(VAR_0)->mite);
  }
 }
 return 0;
}
