
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ attached; int spinlock; scalar_t__ iobase; struct comedi_subdevice* read_subdev; } ;
struct comedi_cmd {scalar_t__ stop_src; } ;
struct comedi_async {int events; struct comedi_cmd cmd; } ;
struct TYPE_4__ {scalar_t__ dma_chan; int control_state; int dma_transfer_size; int adc_byte_count; int current_buffer; scalar_t__ timer_mode; int * dma_buffer; int * dma_buffer_addr; } ;
struct TYPE_3__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_subdevice*,int ,int) ;
 unsigned long FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_5 ;
 int FUNC_6 (struct comedi_device*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static void FUNC_14(struct comedi_device *VAR_7)
{
 unsigned long VAR_8, VAR_9;
 struct comedi_subdevice *VAR_10 = VAR_7->read_subdev;
 struct comedi_async *VAR_11;
 struct comedi_cmd *VAR_12;
 int VAR_13, VAR_14;
 int VAR_15;

 if (VAR_7->attached == 0) {
  FUNC_5(VAR_7, "premature interrupt");
  return;
 }

 VAR_11 = VAR_10->async;
 VAR_12 = &VAR_11->cmd;

 if (VAR_5->dma_chan == 0) {
  FUNC_5(VAR_7, "interrupt with no dma channel?");
  return;
 }

 FUNC_12(&VAR_7->spinlock, VAR_9);
 if ((VAR_5->control_state & VAR_3) == 0) {
  FUNC_13(&VAR_7->spinlock, VAR_9);
  FUNC_0("interrupt while dma disabled?\n");
  return;
 }

 VAR_8 = FUNC_3();
 FUNC_4(VAR_5->dma_chan);
 VAR_14 = FUNC_6(VAR_7);


 if (VAR_14 > VAR_5->dma_transfer_size) {
  FUNC_5(VAR_7, "residue > transfer size!\n");
  VAR_11->events |= VAR_1 | VAR_0;
  VAR_13 = 0;
 } else
  VAR_13 = VAR_5->dma_transfer_size - VAR_14;

 if (VAR_12->stop_src == VAR_4 && VAR_13 >= VAR_5->adc_byte_count) {
  VAR_13 = VAR_5->adc_byte_count;
  VAR_11->events |= VAR_0;
 }

 VAR_15 = VAR_5->current_buffer;
 VAR_5->current_buffer = (VAR_5->current_buffer + 1) % 2;
 VAR_5->adc_byte_count -= VAR_13;


 if (VAR_12->stop_src == VAR_4 && VAR_5->timer_mode == 0 &&
     VAR_5->dma_transfer_size > VAR_5->adc_byte_count)
  VAR_5->dma_transfer_size = VAR_5->adc_byte_count;


 if ((VAR_11->events & VAR_0) == 0) {
  FUNC_10(VAR_5->dma_chan,
        VAR_5->dma_buffer_addr[VAR_5->current_buffer]);
  FUNC_11(VAR_5->dma_chan, VAR_5->dma_transfer_size);
  FUNC_7(VAR_5->dma_chan);

  if (VAR_6->size > 0x400 && VAR_5->timer_mode == 0) {
   FUNC_8(0x00, VAR_7->iobase + VAR_2);
  }
 }
 FUNC_9(VAR_8);

 FUNC_13(&VAR_7->spinlock, VAR_9);

 FUNC_2(VAR_10,
      VAR_5->dma_buffer[VAR_15], VAR_13);

 FUNC_1(VAR_7, VAR_10);
}
