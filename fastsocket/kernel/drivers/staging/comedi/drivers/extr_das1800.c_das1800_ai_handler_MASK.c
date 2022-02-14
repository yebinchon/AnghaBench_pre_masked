
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* subdevices; } ;
struct comedi_cmd {scalar_t__ stop_src; } ;
struct comedi_async {int events; struct comedi_cmd cmd; } ;
struct TYPE_2__ {int irq_dma_bits; scalar_t__ count; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,unsigned int) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_6 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_1__* VAR_13 ;
 unsigned int FUNC_7 (scalar_t__) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct comedi_device *VAR_14)
{
 struct comedi_subdevice *VAR_15 = VAR_14->subdevices + 0;
 struct comedi_async *VAR_16 = VAR_15->async;
 struct comedi_cmd *VAR_17 = &VAR_16->cmd;
 unsigned int VAR_18 = FUNC_7(VAR_14->iobase + VAR_7);

 VAR_16->events = 0;

 FUNC_8(VAR_0, VAR_14->iobase + VAR_6);

 if (VAR_13->irq_dma_bits & VAR_8) {

  FUNC_4(VAR_14, VAR_15, VAR_18);
 } else if (VAR_18 & VAR_9) {
  FUNC_5(VAR_14, VAR_15);
 } else if (VAR_18 & VAR_10) {
  FUNC_6(VAR_14, VAR_15);
 }

 VAR_16->events |= VAR_2;

 if (VAR_18 & VAR_11) {

  FUNC_8(VAR_1 & ~VAR_11, VAR_14->iobase + VAR_7);
  FUNC_0(VAR_14, "DAS1800 FIFO overflow");
  FUNC_2(VAR_14, VAR_15);
  VAR_16->events |= VAR_4 | VAR_3;
  FUNC_1(VAR_14, VAR_15);
  return;
 }


 if (VAR_18 & VAR_5) {

  FUNC_8(VAR_1 & ~VAR_5, VAR_14->iobase + VAR_7);

  if (VAR_13->irq_dma_bits & VAR_8)
   FUNC_3(VAR_14, VAR_15);
  else
   FUNC_6(VAR_14, VAR_15);
  FUNC_2(VAR_14, VAR_15);
  VAR_16->events |= VAR_3;
 } else if (VAR_17->stop_src == VAR_12 && VAR_13->count == 0) {
  FUNC_2(VAR_14, VAR_15);
  VAR_16->events |= VAR_3;
 }

 FUNC_1(VAR_14, VAR_15);

 return;
}
