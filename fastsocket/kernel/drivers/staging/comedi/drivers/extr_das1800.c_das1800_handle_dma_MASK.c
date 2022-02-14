
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int irq_dma_bits; scalar_t__ dma_current; scalar_t__ dma0; scalar_t__ dma1; int ai_buf0; int dma_current_buf; int ai_buf1; int dma_transfer_size; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,scalar_t__,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct comedi_device *VAR_5,
          struct comedi_subdevice *VAR_6, unsigned int VAR_7)
{
 unsigned long VAR_8;
 const int VAR_9 = VAR_4->irq_dma_bits & VAR_3;

 VAR_8 = FUNC_0();
 FUNC_1(VAR_5, VAR_6, VAR_4->dma_current,
      VAR_4->dma_current_buf);

 FUNC_5(VAR_4->dma_current,
       FUNC_7(VAR_4->dma_current_buf));
 FUNC_6(VAR_4->dma_current, VAR_4->dma_transfer_size);
 FUNC_2(VAR_4->dma_current);
 FUNC_4(VAR_8);

 if (VAR_7 & VAR_2) {

  FUNC_3(VAR_0 & ~VAR_2, VAR_5->iobase + VAR_1);

  if (VAR_9) {

   if (VAR_4->dma_current == VAR_4->dma0) {
    VAR_4->dma_current = VAR_4->dma1;
    VAR_4->dma_current_buf = VAR_4->ai_buf1;
   } else {
    VAR_4->dma_current = VAR_4->dma0;
    VAR_4->dma_current_buf = VAR_4->ai_buf0;
   }
  }
 }

 return;
}
