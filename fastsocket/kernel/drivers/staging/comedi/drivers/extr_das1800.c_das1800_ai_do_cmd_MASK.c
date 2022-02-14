
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ iobase; int irq; } ;
struct comedi_cmd {int flags; scalar_t__ stop_src; int stop_arg; int chanlist_len; int convert_arg; } ;
struct comedi_async {struct comedi_cmd cmd; } ;
struct TYPE_2__ {int irq_dma_bits; int dma_bits; int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 int FUNC_1 (struct comedi_cmd) ;
 int FUNC_2 (struct comedi_cmd) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_1__* VAR_13 ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (struct comedi_device*,struct comedi_cmd) ;
 int FUNC_6 (struct comedi_device*,struct comedi_cmd) ;
 int FUNC_7 (struct comedi_device*,struct comedi_cmd) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_14,
        struct comedi_subdevice *VAR_15)
{
 int VAR_16;
 int VAR_17, VAR_18;
 struct comedi_async *VAR_19 = VAR_15->async;
 struct comedi_cmd VAR_20 = VAR_19->cmd;

 if (!VAR_14->irq) {
  FUNC_0(VAR_14,
        "no irq assigned for das-1800, cannot do hardware conversions");
  return -1;
 }



 if (VAR_20.flags & (VAR_12 | VAR_11)) {
  VAR_13->irq_dma_bits &= ~VAR_8;
 } else {
  VAR_13->irq_dma_bits |= VAR_13->dma_bits;
 }

 if (VAR_20.flags & VAR_12) {

  VAR_13->irq_dma_bits &= ~VAR_9;
 } else {

  VAR_13->irq_dma_bits |= VAR_9;
 }

 if (VAR_20.stop_src == VAR_10) {
  VAR_13->count = VAR_20.stop_arg * VAR_20.chanlist_len;
 }

 FUNC_3(VAR_14, VAR_15);


 VAR_17 = FUNC_1(VAR_20);
 VAR_18 = FUNC_2(VAR_20);


 FUNC_5(VAR_14, VAR_20);
 VAR_16 = FUNC_6(VAR_14, VAR_20);
 if (VAR_16 < 0) {
  FUNC_0(VAR_14, "Error setting up counters");
  return VAR_16;
 }
 FUNC_7(VAR_14, VAR_20);
 FUNC_4(VAR_18, VAR_14->iobase + VAR_6);

 if (VAR_18 & VAR_0) {

  FUNC_4(VAR_20.convert_arg / 1000 - 1,
       VAR_14->iobase + VAR_3);
  FUNC_4(VAR_20.chanlist_len - 1, VAR_14->iobase + VAR_2);
 }
 FUNC_4(VAR_13->irq_dma_bits, VAR_14->iobase + VAR_5);
 FUNC_4(VAR_17, VAR_14->iobase + VAR_4);
 FUNC_4(VAR_1, VAR_14->iobase + VAR_7);

 return 0;
}
