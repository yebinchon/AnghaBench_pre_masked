
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ attached; scalar_t__ iobase; struct comedi_subdevice* read_subdev; } ;
struct comedi_cmd {scalar_t__ stop_src; } ;
struct comedi_async {int events; struct comedi_cmd cmd; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int const dma_transfer_size; unsigned int count; short* dma_buffer; int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_subdevice*,short) ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct comedi_device*,char*) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_1__* VAR_12 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int const FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int,scalar_t__) ;
 int FUNC_11 (unsigned long) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,unsigned int) ;
 int FUNC_14 (short*) ;

__attribute__((used)) static irqreturn_t FUNC_15(int VAR_13, void *VAR_14)
{
 int VAR_15;
 int VAR_16;
 unsigned long VAR_17;
 struct comedi_device *VAR_18 = VAR_14;
 struct comedi_subdevice *VAR_19 = VAR_18->read_subdev;
 struct comedi_async *VAR_20;
 struct comedi_cmd *VAR_21;
 unsigned int VAR_22, VAR_23, VAR_24, VAR_25;
 short VAR_26;
 static const int VAR_27 = sizeof(VAR_12->dma_buffer[0]);

 if (VAR_18->attached == 0) {
  FUNC_4(VAR_18, "premature interrupt");
  return VAR_6;
 }

 VAR_20 = VAR_19->async;
 VAR_20->events = 0;
 VAR_21 = &VAR_20->cmd;

 VAR_16 = FUNC_9(VAR_18->iobase + VAR_9);

 if ((VAR_16 & VAR_5) == 0) {
  FUNC_4(VAR_18, "spurious interrupt");
  return VAR_7;
 }

 if (VAR_16 & VAR_8) {
  FUNC_4(VAR_18, "fifo overflow");
  FUNC_0(VAR_18, VAR_19);
  VAR_20->events |= VAR_2 | VAR_1;
 }

 if ((VAR_16 & VAR_3) == 0) {
  FUNC_4(VAR_18, "caught non-dma interrupt?  Aborting.");
  FUNC_0(VAR_18, VAR_19);
  VAR_20->events |= VAR_2 | VAR_1;
  FUNC_5(VAR_18, VAR_19);
  return VAR_6;
 }

 VAR_17 = FUNC_2();
 FUNC_6(VAR_12->dma);


 FUNC_3(VAR_12->dma);


 VAR_22 = VAR_12->dma_transfer_size / VAR_27;




 VAR_24 = FUNC_8(VAR_12->dma) / VAR_27;
 VAR_23 = VAR_22 - VAR_24;
 if (VAR_12->count < VAR_23 && VAR_21->stop_src == VAR_10)
  VAR_23 = VAR_12->count;


 VAR_25 = 0;
 if (VAR_21->stop_src == VAR_11) {
  VAR_25 = VAR_12->dma_transfer_size / VAR_27;
 } else if (VAR_12->count > VAR_22) {
  VAR_25 = VAR_12->count - VAR_22;
  if (VAR_25 > VAR_22)
   VAR_25 = VAR_22;
 }




 if (VAR_24)
  VAR_25 = 0;

 for (VAR_15 = 0; VAR_15 < VAR_23; VAR_15++) {

  VAR_26 = VAR_12->dma_buffer[VAR_15];

  VAR_26 ^= 0x8000;
  FUNC_1(VAR_19, VAR_26);
  if (VAR_21->stop_src == VAR_10) {
   if (--VAR_12->count == 0) {
    FUNC_0(VAR_18, VAR_19);
    VAR_20->events |= VAR_1;
    break;
   }
  }
 }

 if (VAR_25) {
  FUNC_12(VAR_12->dma, FUNC_14(VAR_12->dma_buffer));
  FUNC_13(VAR_12->dma, VAR_25 * VAR_27);
  FUNC_7(VAR_12->dma);
 }
 FUNC_11(VAR_17);

 VAR_20->events |= VAR_0;

 FUNC_5(VAR_18, VAR_19);


 FUNC_10(0x00, VAR_18->iobase + VAR_4);

 return VAR_6;
}
