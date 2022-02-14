
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ irq; scalar_t__ iobase; } ;
struct comedi_cmd {int flags; int stop_arg; int chanlist_len; scalar_t__ convert_src; int convert_arg; int * chanlist; } ;
struct comedi_async {struct comedi_cmd cmd; } ;
struct TYPE_6__ {scalar_t__ expires; } ;
struct TYPE_5__ {scalar_t__ dma_chan; scalar_t__ timer_mode; int adc_byte_count; size_t current_buffer; int timer_running; int control_state; TYPE_3__ timer; int dma_transfer_size; int * dma_buffer_addr; } ;
struct TYPE_4__ {int size; size_t ai_pg; } ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (char*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (TYPE_3__*) ;
 unsigned long FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct comedi_device*,char*) ;
 int** VAR_18 ;
 size_t VAR_19 ;
 int FUNC_8 (struct comedi_device*,int ,int) ;
 int FUNC_9 (struct comedi_device*,struct comedi_cmd) ;
 TYPE_2__* VAR_20 ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ VAR_21 ;
 int FUNC_12 (int,scalar_t__) ;
 int FUNC_13 (unsigned long) ;
 int FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (scalar_t__,int ) ;
 TYPE_1__* VAR_22 ;
 scalar_t__ FUNC_16 () ;

__attribute__((used)) static int FUNC_17(struct comedi_device *VAR_23, struct comedi_subdevice *VAR_24)
{
 struct comedi_async *VAR_25 = VAR_24->async;
 struct comedi_cmd *VAR_26 = &VAR_25->cmd;
 unsigned int VAR_27;
 unsigned long VAR_28;
 int VAR_29;

 if (VAR_20->dma_chan == 0 || (VAR_23->irq == 0
           && VAR_20->timer_mode == 0)) {
  FUNC_7(VAR_23,
        "irq (or use of 'timer mode') dma required to execute comedi_cmd");
  return -1;
 }
 if (VAR_26->flags & VAR_17) {
  FUNC_7(VAR_23,
        "isa dma transfers cannot be performed with TRIG_RT, aborting");
  return -1;
 }

 VAR_20->adc_byte_count =
     VAR_26->stop_arg * VAR_26->chanlist_len * sizeof(uint16_t);


 if (VAR_22->size > 0x400) {
  FUNC_12(VAR_3, VAR_23->iobase + VAR_2);
 }

 VAR_27 = FUNC_1(VAR_26->chanlist[0]);
 VAR_27 |= FUNC_1(VAR_26->chanlist[VAR_26->chanlist_len - 1]) << 4;
 FUNC_12(VAR_27, VAR_23->iobase + VAR_7);



 if (VAR_22->ai_pg != VAR_19) {
  VAR_29 = FUNC_2(VAR_26->chanlist[0]);
  FUNC_12((VAR_18[VAR_22->ai_pg])[VAR_29],
       VAR_23->iobase + VAR_5);
 }


 VAR_26->convert_arg =
     FUNC_8(VAR_23, VAR_26->convert_arg,
       VAR_26->flags & VAR_16);
 FUNC_3("pacer period: %d ns\n", VAR_26->convert_arg);


 VAR_27 = 0;

 if (VAR_22->size > 0x400) {
  if (VAR_26->convert_src == VAR_15) {
   FUNC_12(VAR_1, VAR_23->iobase + VAR_0);

   VAR_27 |= FUNC_0(VAR_26->chanlist_len - 1);
  } else {
   FUNC_12(0, VAR_23->iobase + VAR_0);
  }
 }
 FUNC_12(VAR_27, VAR_23->iobase + VAR_8);


 VAR_28 = FUNC_5();
 FUNC_10(VAR_20->dma_chan);


 FUNC_6(VAR_20->dma_chan);
 VAR_20->current_buffer = 0;
 FUNC_14(VAR_20->dma_chan,
       VAR_20->dma_buffer_addr[VAR_20->current_buffer]);

 VAR_20->dma_transfer_size = FUNC_9(VAR_23, *VAR_26);
 FUNC_15(VAR_20->dma_chan, VAR_20->dma_transfer_size);
 FUNC_11(VAR_20->dma_chan);
 FUNC_13(VAR_28);


 if (VAR_20->timer_mode) {
  VAR_20->timer_running = 1;
  VAR_20->timer.expires = VAR_21 + FUNC_16();
  FUNC_4(&VAR_20->timer);
  VAR_20->control_state &= ~VAR_6;
 } else {

  FUNC_12(0x00, VAR_23->iobase + VAR_9);

  VAR_20->control_state |= VAR_6;
 }
 VAR_20->control_state |= VAR_10;
 VAR_20->control_state &= ~VAR_13;
 if (VAR_26->convert_src == VAR_14)
  VAR_20->control_state |= VAR_11;
 else
  VAR_20->control_state |= VAR_12;
 FUNC_12(VAR_20->control_state, VAR_23->iobase + VAR_4);


 if (VAR_22->size > 0x400) {
  FUNC_12(0, VAR_23->iobase + VAR_2);
 }

 return 0;
}
