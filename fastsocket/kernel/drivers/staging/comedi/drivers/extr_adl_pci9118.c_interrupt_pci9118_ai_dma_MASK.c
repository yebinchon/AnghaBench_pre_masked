
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {unsigned short ai_maskerr; int* dmabuf_use_size; size_t dma_actbuf; int* dmabuf_hw; int* dmabuf_used_size; int ai_do; int ai_data_len; scalar_t__ ai_act_scan; scalar_t__ ai_scans; scalar_t__ iobase_a; scalar_t__ dma_doublebuf; int ai_neverending; int * dmabuf_virt; } ;
struct TYPE_3__ {int events; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_2__* VAR_6 ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,int ,unsigned int) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;
 scalar_t__ FUNC_6 (struct comedi_device*,struct comedi_subdevice*,unsigned short) ;

__attribute__((used)) static void FUNC_7(struct comedi_device *VAR_7,
         struct comedi_subdevice *VAR_8,
         unsigned short VAR_9,
         unsigned int VAR_10,
         unsigned short VAR_11)
{
 unsigned int VAR_12, VAR_13, VAR_14, VAR_15;

 if (VAR_10 & VAR_4) {
  FUNC_0(VAR_7, "AMCC IRQ - MASTER DMA ABORT!");
  VAR_8->async->events |= VAR_3 | VAR_2;
  FUNC_5(VAR_7, VAR_8);
  FUNC_1(VAR_7, VAR_8);
  return;
 }

 if (VAR_10 & VAR_5) {
  FUNC_0(VAR_7, "AMCC IRQ - TARGET DMA ABORT!");
  VAR_8->async->events |= VAR_3 | VAR_2;
  FUNC_5(VAR_7, VAR_8);
  FUNC_1(VAR_7, VAR_8);
  return;
 }

 if (VAR_9 & VAR_6->ai_maskerr)

  if (FUNC_6(VAR_7, VAR_8, VAR_9))
   return;

 VAR_13 = VAR_6->dmabuf_use_size[VAR_6->dma_actbuf] >> 1;


 if (VAR_6->dma_doublebuf) {
  VAR_12 = 1 - VAR_6->dma_actbuf;
  FUNC_4(VAR_6->dmabuf_hw[VAR_12],
       VAR_6->iobase_a + VAR_0);
  FUNC_4(VAR_6->dmabuf_use_size[VAR_12],
       VAR_6->iobase_a + VAR_1);
  VAR_6->dmabuf_used_size[VAR_12] =
      VAR_6->dmabuf_use_size[VAR_12];
  if (VAR_6->ai_do == 4)
   FUNC_2(VAR_7);
 }

 if (VAR_13) {
  VAR_15 = VAR_6->ai_data_len >> 1;

  VAR_14 = VAR_15;
  FUNC_3(VAR_7, VAR_8,
        VAR_6->dmabuf_virt[VAR_6->dma_actbuf],
        VAR_13);
  VAR_15 = VAR_15 - VAR_14;
 }


 if (!VAR_6->ai_neverending)
  if (VAR_6->ai_act_scan >= VAR_6->ai_scans) {
   FUNC_5(VAR_7, VAR_8);
   VAR_8->async->events |= VAR_2;
  }

 if (VAR_6->dma_doublebuf) {
  VAR_6->dma_actbuf = 1 - VAR_6->dma_actbuf;
 } else {
  FUNC_4(VAR_6->dmabuf_hw[0],
       VAR_6->iobase_a + VAR_0);
  FUNC_4(VAR_6->dmabuf_use_size[0],
       VAR_6->iobase_a + VAR_1);
  if (VAR_6->ai_do == 4)
   FUNC_2(VAR_7);
 }

 FUNC_1(VAR_7, VAR_8);
}
