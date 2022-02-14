
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ private; scalar_t__ irq; } ;
struct TYPE_2__ {scalar_t__ card; scalar_t__ io_addr; scalar_t__ valid; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (scalar_t__,struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_3)
{

 if (VAR_3->private)
  if (VAR_1->valid)
   FUNC_1(VAR_3);

 if (VAR_3->irq)
  FUNC_0(VAR_3->irq, VAR_3);

 if (VAR_3->private && VAR_1->io_addr)
  FUNC_2(VAR_1->io_addr);

 if (VAR_3->private && VAR_1->card)
  FUNC_3(VAR_1->card);

 if (--VAR_2 == 0)
  FUNC_4(VAR_0);

 return 0;
}
