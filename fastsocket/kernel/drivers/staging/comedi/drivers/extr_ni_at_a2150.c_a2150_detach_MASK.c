
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {scalar_t__ irq; scalar_t__ iobase; int minor; } ;
struct TYPE_4__ {scalar_t__ dma_buffer; scalar_t__ dma; } ;
struct TYPE_3__ {int driver_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,struct comedi_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_6)
{
 FUNC_4("comedi%d: %s: remove\n", VAR_6->minor, VAR_5);


 if (VAR_6->iobase) {

  FUNC_3(VAR_1 | VAR_3, VAR_6->iobase + VAR_2);
  FUNC_5(VAR_6->iobase, VAR_0);
 }

 if (VAR_6->irq)
  FUNC_1(VAR_6->irq, VAR_6);
 if (VAR_4) {
  if (VAR_4->dma)
   FUNC_0(VAR_4->dma);
  if (VAR_4->dma_buffer)
   FUNC_2(VAR_4->dma_buffer);
 }

 return 0;
}
