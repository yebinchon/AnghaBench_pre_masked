
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int minor; scalar_t__ private; scalar_t__ irq; scalar_t__ iobase; } ;
struct TYPE_4__ {scalar_t__ ai_buf1; scalar_t__ ai_buf0; scalar_t__ dma1; scalar_t__ dma0; scalar_t__ iobase2; } ;
struct TYPE_3__ {int driver_name; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,struct comedi_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_3)
{

 if (VAR_3->iobase)
  FUNC_4(VAR_3->iobase, VAR_0);
 if (VAR_3->irq)
  FUNC_1(VAR_3->irq, VAR_3);
 if (VAR_3->private) {
  if (VAR_1->iobase2)
   FUNC_4(VAR_1->iobase2, VAR_0);
  if (VAR_1->dma0)
   FUNC_0(VAR_1->dma0);
  if (VAR_1->dma1)
   FUNC_0(VAR_1->dma1);
  if (VAR_1->ai_buf0)
   FUNC_2(VAR_1->ai_buf0);
  if (VAR_1->ai_buf1)
   FUNC_2(VAR_1->ai_buf1);
 }

 FUNC_3("comedi%d: %s: remove\n", VAR_3->minor,
        VAR_2);

 return 0;
}
