
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* subdevices; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int next_dma_buf; int dma_runs_to_end; int* hwdmasize; int last_dma_run; int ai_poll_ptr; scalar_t__* dmabuf; int dma; int * hwdmaptr; scalar_t__ ai_neverending; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct comedi_device*,struct comedi_subdevice*,short*,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_4, void *VAR_5)
{
 struct comedi_device *VAR_6 = VAR_5;
 struct comedi_subdevice *VAR_7 = VAR_6->subdevices + 0;
 int VAR_8, VAR_9, VAR_10;
 unsigned long VAR_11;
 short *VAR_12;

 FUNC_1(VAR_3->dma);
 VAR_10 = VAR_3->next_dma_buf;

 if ((VAR_3->dma_runs_to_end > -1) || VAR_3->ai_neverending) {

  VAR_3->next_dma_buf = 1 - VAR_3->next_dma_buf;
  FUNC_7(VAR_3->dma, VAR_0);
  VAR_11 = FUNC_0();

  FUNC_5(VAR_3->dma,
        VAR_3->hwdmaptr[VAR_3->next_dma_buf]);
  if (VAR_3->dma_runs_to_end) {
   FUNC_6(VAR_3->dma,
          VAR_3->hwdmasize[VAR_3->
        next_dma_buf]);
  } else {
   FUNC_6(VAR_3->dma, VAR_3->last_dma_run);
  }
  FUNC_4(VAR_11);
  FUNC_2(VAR_3->dma);
 }

 VAR_3->dma_runs_to_end--;
 FUNC_3(0, VAR_6->iobase + VAR_2);

 VAR_12 = (short *)VAR_3->dmabuf[VAR_10];

 VAR_8 = (VAR_3->hwdmasize[0] >> 1) - VAR_3->ai_poll_ptr;
 VAR_9 = VAR_3->ai_poll_ptr;
 VAR_3->ai_poll_ptr = 0;

 FUNC_8(VAR_6, VAR_7, VAR_12, VAR_9, VAR_8);
 return VAR_1;
}
