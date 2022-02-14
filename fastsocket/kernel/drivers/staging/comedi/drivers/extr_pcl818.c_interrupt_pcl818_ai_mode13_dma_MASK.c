
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_2__* async; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* subdevices; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int events; } ;
struct TYPE_3__ {int next_dma_buf; int dma_runs_to_end; int* hwdmasize; int last_dma_run; short* act_chanlist; size_t act_chanlist_pos; size_t act_chanlist_len; scalar_t__ ai_act_scan; scalar_t__ neverending_ai; scalar_t__* dmabuf; int dma; int * hwdmaptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,short) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_6, void *VAR_7)
{
 struct comedi_device *VAR_8 = VAR_7;
 struct comedi_subdevice *VAR_9 = VAR_8->subdevices + 0;
 int VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13;
 short *VAR_14;

 FUNC_3(VAR_5->dma);
 VAR_5->next_dma_buf = 1 - VAR_5->next_dma_buf;
 if ((VAR_5->dma_runs_to_end) > -1 || VAR_5->neverending_ai) {
  FUNC_11(VAR_5->dma, VAR_2);
  VAR_13 = FUNC_0();
  FUNC_9(VAR_5->dma,
        VAR_5->hwdmaptr[VAR_5->next_dma_buf]);
  if (VAR_5->dma_runs_to_end || VAR_5->neverending_ai) {
   FUNC_10(VAR_5->dma,
          VAR_5->hwdmasize[VAR_5->
        next_dma_buf]);
  } else {
   FUNC_10(VAR_5->dma, VAR_5->last_dma_run);
  }
  FUNC_8(VAR_13);
  FUNC_4(VAR_5->dma);
 }
 FUNC_7("comedi: A/D mode1/3 IRQ \n");

 VAR_5->dma_runs_to_end--;
 FUNC_5(0, VAR_8->iobase + VAR_4);
 VAR_14 = (short *)VAR_5->dmabuf[1 - VAR_5->next_dma_buf];

 VAR_11 = VAR_5->hwdmasize[0] >> 1;
 VAR_12 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  if ((VAR_14[VAR_12] & 0xf) != VAR_5->act_chanlist[VAR_5->act_chanlist_pos]) {
   FUNC_7
       ("comedi: A/D mode1/3 DMA - channel dropout %d(card)!=%d(chanlist) at %d !\n",
        (VAR_14[VAR_12] & 0xf),
        VAR_5->act_chanlist[VAR_5->act_chanlist_pos],
        VAR_5->act_chanlist_pos);
   FUNC_6(VAR_8, VAR_9);
   VAR_9->async->events |= VAR_0 | VAR_1;
   FUNC_2(VAR_8, VAR_9);
   return VAR_3;
  }

  FUNC_1(VAR_9->async, VAR_14[VAR_12++] >> 4);

  VAR_5->act_chanlist_pos++;
  if (VAR_5->act_chanlist_pos >= VAR_5->act_chanlist_len) {
   VAR_5->ai_act_scan--;
   VAR_5->act_chanlist_pos = 0;
  }

  if (!VAR_5->neverending_ai)
   if (VAR_5->ai_act_scan == 0) {
    FUNC_6(VAR_8, VAR_9);
    VAR_9->async->events |= VAR_0;
    FUNC_2(VAR_8, VAR_9);

    return VAR_3;
   }
 }

 if (VAR_11 > 0)
  FUNC_2(VAR_8, VAR_9);
 return VAR_3;
}
