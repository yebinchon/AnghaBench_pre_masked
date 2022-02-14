
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* subdevices; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {size_t next_dma_buf; int* dmabytestomove; int ai_poll_ptr; int last_dma_run; int dma; scalar_t__ dma_runs_to_end; scalar_t__ ai_eos; int * hwdmaptr; scalar_t__* dmabuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct comedi_device*,struct comedi_subdevice*,short*,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_4, void *VAR_5)
{
 struct comedi_device *VAR_6 = VAR_5;
 struct comedi_subdevice *VAR_7 = VAR_6->subdevices + 0;
 unsigned long VAR_8;
 int VAR_9, VAR_10;
 short *VAR_11;




 VAR_11 = (short *)VAR_3->dmabuf[VAR_3->next_dma_buf];
 VAR_9 = (VAR_3->dmabytestomove[VAR_3->next_dma_buf] >> 1) -
     VAR_3->ai_poll_ptr;

 VAR_3->next_dma_buf = 1 - VAR_3->next_dma_buf;
 FUNC_1(VAR_3->dma);
 FUNC_8(VAR_3->dma, VAR_0);
 VAR_8 = FUNC_0();
 FUNC_6(VAR_3->dma, VAR_3->hwdmaptr[VAR_3->next_dma_buf]);
 if (VAR_3->ai_eos) {
  FUNC_7(VAR_3->dma,
         VAR_3->dmabytestomove[VAR_3->next_dma_buf]);
 } else {
  if (VAR_3->dma_runs_to_end) {
   FUNC_7(VAR_3->dma,
          VAR_3->dmabytestomove[VAR_3->
             next_dma_buf]);
  } else {
   FUNC_7(VAR_3->dma, VAR_3->last_dma_run);
  }
  VAR_3->dma_runs_to_end--;
 }
 FUNC_5(VAR_8);
 FUNC_2(VAR_3->dma);

 FUNC_3(0, VAR_6->iobase + VAR_2);

 VAR_10 = VAR_3->ai_poll_ptr;
 VAR_3->ai_poll_ptr = 0;

 FUNC_9(VAR_6, VAR_7, VAR_11, VAR_10, VAR_9);




 return VAR_1;
}
