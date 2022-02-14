
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; scalar_t__ irq; scalar_t__ subdevices; int minor; } ;
struct TYPE_4__ {scalar_t__ user_ao_range_table; scalar_t__ user_ai_range_table; scalar_t__ dma_chan; int * dma_buffer_addr; scalar_t__* dma_buffer; } ;
struct TYPE_3__ {int size; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,struct comedi_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int ,scalar_t__,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (struct comedi_device*,scalar_t__) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_3)
{
 FUNC_5("comedi%d: das16: remove\n", VAR_3->minor);

 FUNC_0(VAR_3);

 if (VAR_3->subdevices)
  FUNC_7(VAR_3, VAR_3->subdevices + 4);

 if (VAR_1) {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
   if (VAR_1->dma_buffer[VAR_4])
    FUNC_4(((void*)0), VAR_0,
          VAR_1->dma_buffer[VAR_4],
          VAR_1->
          dma_buffer_addr[VAR_4]);
  }
  if (VAR_1->dma_chan)
   FUNC_1(VAR_1->dma_chan);
  if (VAR_1->user_ai_range_table)
   FUNC_3(VAR_1->user_ai_range_table);
  if (VAR_1->user_ao_range_table)
   FUNC_3(VAR_1->user_ao_range_table);
 }

 if (VAR_3->irq)
  FUNC_2(VAR_3->irq, VAR_3);

 if (VAR_3->iobase) {
  if (VAR_2->size < 0x400) {
   FUNC_6(VAR_3->iobase, VAR_2->size);
  } else {
   FUNC_6(VAR_3->iobase, 0x10);
   FUNC_6(VAR_3->iobase + 0x400,
           VAR_2->size & 0x3ff);
  }
 }

 return 0;
}
