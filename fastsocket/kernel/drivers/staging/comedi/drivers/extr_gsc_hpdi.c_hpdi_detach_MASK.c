
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct plx_dma_desc {int dummy; } ;
struct comedi_device {scalar_t__ irq; int minor; } ;
struct TYPE_2__ {scalar_t__ hw_dev; scalar_t__ hpdi_phys_iobase; int dma_desc_phys_addr; scalar_t__ dma_desc; int * dio_buffer_phys_addr; scalar_t__* dio_buffer; scalar_t__ hpdi_iobase; scalar_t__ plx9080_iobase; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (scalar_t__,struct comedi_device*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int,scalar_t__,int ) ;
 int FUNC_6 (char*,int ) ;
 TYPE_1__* FUNC_7 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_3)
{
 unsigned int VAR_4;

 FUNC_6("comedi%d: gsc_hpdi: remove\n", VAR_3->minor);

 if (VAR_3->irq)
  FUNC_2(VAR_3->irq, VAR_3);
 if (FUNC_7(VAR_3)) {
  if (FUNC_7(VAR_3)->hw_dev) {
   if (FUNC_7(VAR_3)->plx9080_iobase) {
    FUNC_1(VAR_3);
    FUNC_3((void *)FUNC_7(VAR_3)->plx9080_iobase);
   }
   if (FUNC_7(VAR_3)->hpdi_iobase)
    FUNC_3((void *)FUNC_7(VAR_3)->hpdi_iobase);

   for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
    if (FUNC_7(VAR_3)->dio_buffer[VAR_4])
     FUNC_5(FUNC_7(VAR_3)->hw_dev,
           VAR_0,
           FUNC_7(VAR_3)->
           dio_buffer[VAR_4],
           FUNC_7
           (VAR_3)->dio_buffer_phys_addr
           [VAR_4]);
   }

   if (FUNC_7(VAR_3)->dma_desc)
    FUNC_5(FUNC_7(VAR_3)->hw_dev,
          sizeof(struct plx_dma_desc)
          * VAR_2,
          FUNC_7(VAR_3)->dma_desc,
          FUNC_7(VAR_3)->
          dma_desc_phys_addr);
   if (FUNC_7(VAR_3)->hpdi_phys_iobase) {
    FUNC_0(FUNC_7(VAR_3)->hw_dev);
   }
   FUNC_4(FUNC_7(VAR_3)->hw_dev);
  }
 }
 return 0;
}
