
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int irq; scalar_t__ iobase; } ;
struct TYPE_2__ {unsigned int* hwdmasize; int ai_n_chan; int ai_scans; unsigned int dma_runs_to_end; unsigned int last_dma_run; int ai_mode; int dma; int * hwdmaptr; scalar_t__ next_dma_buf; int neverending_ai; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 () ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(int VAR_5, struct comedi_device *VAR_6,
        struct comedi_subdevice *VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9;

 FUNC_5("mode13dma_int, mode: %d\n", VAR_5);
 FUNC_2(VAR_4->dma);
 VAR_9 = VAR_4->hwdmasize[0];
 if (!VAR_4->neverending_ai) {
  VAR_9 = VAR_4->ai_n_chan * VAR_4->ai_scans * sizeof(short);
  VAR_4->dma_runs_to_end = VAR_9 / VAR_4->hwdmasize[0];
  VAR_4->last_dma_run = VAR_9 % VAR_4->hwdmasize[0];
  VAR_4->dma_runs_to_end--;
  if (VAR_4->dma_runs_to_end >= 0)
   VAR_9 = VAR_4->hwdmasize[0];
 }

 VAR_4->next_dma_buf = 0;
 FUNC_9(VAR_4->dma, VAR_0);
 VAR_8 = FUNC_0();
 FUNC_1(VAR_4->dma);
 FUNC_7(VAR_4->dma, VAR_4->hwdmaptr[0]);
 FUNC_8(VAR_4->dma, VAR_9);
 FUNC_6(VAR_8);
 FUNC_3(VAR_4->dma);

 if (VAR_5 == 1) {
  VAR_4->ai_mode = VAR_1;
  FUNC_4(0x87 | (VAR_6->irq << 4), VAR_6->iobase + VAR_3);
 } else {
  VAR_4->ai_mode = VAR_2;
  FUNC_4(0x86 | (VAR_6->irq << 4), VAR_6->iobase + VAR_3);
 };
}
