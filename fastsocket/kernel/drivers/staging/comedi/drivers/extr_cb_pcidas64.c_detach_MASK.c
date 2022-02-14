
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct plx_dma_desc {int dummy; } ;
struct comedi_device {scalar_t__ subdevices; scalar_t__ irq; int minor; } ;
struct TYPE_2__ {scalar_t__ hw_dev; scalar_t__ main_phys_iobase; int ao_dma_desc_bus_addr; scalar_t__ ao_dma_desc; int ai_dma_desc_bus_addr; scalar_t__ ai_dma_desc; int * ao_buffer_bus_addr; scalar_t__* ao_buffer; int * ai_buffer_bus_addr; scalar_t__* ai_buffer; scalar_t__ dio_counter_iobase; scalar_t__ main_iobase; scalar_t__ plx9080_iobase; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (scalar_t__,struct comedi_device*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int,scalar_t__,int ) ;
 int FUNC_8 (char*,int ) ;
 TYPE_1__* FUNC_9 (struct comedi_device*) ;
 int FUNC_10 (struct comedi_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct comedi_device *VAR_2)
{
 unsigned int VAR_3;

 FUNC_8("comedi%d: cb_pcidas: remove\n", VAR_2->minor);

 if (VAR_2->irq)
  FUNC_4(VAR_2->irq, VAR_2);
 if (FUNC_9(VAR_2)) {
  if (FUNC_9(VAR_2)->hw_dev) {
   if (FUNC_9(VAR_2)->plx9080_iobase) {
    FUNC_3(VAR_2);
    FUNC_5((void *)FUNC_9(VAR_2)->plx9080_iobase);
   }
   if (FUNC_9(VAR_2)->main_iobase)
    FUNC_5((void *)FUNC_9(VAR_2)->main_iobase);
   if (FUNC_9(VAR_2)->dio_counter_iobase)
    FUNC_5((void *)FUNC_9(VAR_2)->dio_counter_iobase);

   for (VAR_3 = 0; VAR_3 < FUNC_0(FUNC_1(VAR_2)); VAR_3++) {
    if (FUNC_9(VAR_2)->ai_buffer[VAR_3])
     FUNC_7(FUNC_9(VAR_2)->hw_dev,
           VAR_1,
           FUNC_9(VAR_2)->
           ai_buffer[VAR_3],
           FUNC_9
           (VAR_2)->ai_buffer_bus_addr
           [VAR_3]);
   }
   for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
    if (FUNC_9(VAR_2)->ao_buffer[VAR_3])
     FUNC_7(FUNC_9(VAR_2)->hw_dev,
           VAR_1,
           FUNC_9(VAR_2)->
           ao_buffer[VAR_3],
           FUNC_9
           (VAR_2)->ao_buffer_bus_addr
           [VAR_3]);
   }

   if (FUNC_9(VAR_2)->ai_dma_desc)
    FUNC_7(FUNC_9(VAR_2)->hw_dev,
          sizeof(struct plx_dma_desc)
          *
          FUNC_0(FUNC_1
              (VAR_2)),
          FUNC_9(VAR_2)->ai_dma_desc,
          FUNC_9(VAR_2)->
          ai_dma_desc_bus_addr);
   if (FUNC_9(VAR_2)->ao_dma_desc)
    FUNC_7(FUNC_9(VAR_2)->hw_dev,
          sizeof(struct plx_dma_desc)
          * VAR_0,
          FUNC_9(VAR_2)->ao_dma_desc,
          FUNC_9(VAR_2)->
          ao_dma_desc_bus_addr);
   if (FUNC_9(VAR_2)->main_phys_iobase) {
    FUNC_2(FUNC_9(VAR_2)->hw_dev);
   }
   FUNC_6(FUNC_9(VAR_2)->hw_dev);
  }
 }
 if (VAR_2->subdevices)
  FUNC_10(VAR_2, VAR_2->subdevices + 4);

 return 0;
}
