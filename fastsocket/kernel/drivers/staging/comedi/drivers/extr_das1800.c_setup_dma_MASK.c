
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct comedi_cmd {int dummy; } ;
struct TYPE_2__ {int irq_dma_bits; int dma1; int dma_transfer_size; int ai_buf1; int dma0; int ai_buf0; int dma_current_buf; int dma_current; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct comedi_cmd*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct comedi_device *VAR_3, struct comedi_cmd VAR_4)
{
 unsigned long VAR_5;
 const int VAR_6 = VAR_2->irq_dma_bits & VAR_0;

 if ((VAR_2->irq_dma_bits & VAR_1) == 0)
  return;


 VAR_2->dma_transfer_size = FUNC_7(&VAR_4);
 VAR_5 = FUNC_0();
 FUNC_2(VAR_2->dma0);


 FUNC_1(VAR_2->dma0);
 FUNC_5(VAR_2->dma0, FUNC_8(VAR_2->ai_buf0));

 FUNC_6(VAR_2->dma0, VAR_2->dma_transfer_size);
 VAR_2->dma_current = VAR_2->dma0;
 VAR_2->dma_current_buf = VAR_2->ai_buf0;
 FUNC_3(VAR_2->dma0);

 if (VAR_6) {
  FUNC_2(VAR_2->dma1);


  FUNC_1(VAR_2->dma1);
  FUNC_5(VAR_2->dma1, FUNC_8(VAR_2->ai_buf1));

  FUNC_6(VAR_2->dma1, VAR_2->dma_transfer_size);
  FUNC_3(VAR_2->dma1);
 }
 FUNC_4(VAR_5);

 return;
}
