
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int irq_dma_bits; scalar_t__ dma_current; scalar_t__ dma0; scalar_t__ dma1; int dma_current_buf; int ai_buf0; int ai_buf1; } ;


 int VAR_0 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,scalar_t__,int ) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_2,
         struct comedi_subdevice *VAR_3)
{
 unsigned long VAR_4;
 const int VAR_5 = VAR_1->irq_dma_bits & VAR_0;

 VAR_4 = FUNC_0();
 FUNC_1(VAR_2, VAR_3, VAR_1->dma_current,
      VAR_1->dma_current_buf);

 if (VAR_5) {

  if (VAR_1->dma_current == VAR_1->dma0) {
   VAR_1->dma_current = VAR_1->dma1;
   VAR_1->dma_current_buf = VAR_1->ai_buf1;
  } else {
   VAR_1->dma_current = VAR_1->dma0;
   VAR_1->dma_current_buf = VAR_1->ai_buf0;
  }
  FUNC_1(VAR_2, VAR_3, VAR_1->dma_current,
       VAR_1->dma_current_buf);
 }

 FUNC_3(VAR_4);


 FUNC_2(VAR_2, VAR_3);

 return;
}
