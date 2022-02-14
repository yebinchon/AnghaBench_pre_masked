
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int spinlock; int attached; struct comedi_subdevice* read_subdev; } ;
struct comedi_async {int events; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ dio_count; scalar_t__ plx9080_iobase; scalar_t__ hpdi_iobase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_device*,char*) ;
 int FUNC_3 (struct comedi_device*,int ) ;
 TYPE_1__* FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int,scalar_t__) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_18, void *VAR_19)
{
 struct comedi_device *VAR_20 = VAR_19;
 struct comedi_subdevice *VAR_21 = VAR_20->read_subdev;
 struct comedi_async *VAR_22 = VAR_21->async;
 uint32_t VAR_23, VAR_24;
 uint32_t VAR_25;
 uint32_t VAR_26;
 uint8_t VAR_27, VAR_28;
 unsigned long VAR_29;

 if (!VAR_20->attached) {
  return VAR_9;
 }

 VAR_25 = FUNC_6(FUNC_4(VAR_20)->plx9080_iobase + VAR_15);
 if ((VAR_25 & (VAR_3 | VAR_4 | VAR_6)) == 0) {
  return VAR_9;
 }

 VAR_23 = FUNC_6(FUNC_4(VAR_20)->hpdi_iobase + VAR_7);
 VAR_24 = FUNC_6(FUNC_4(VAR_20)->hpdi_iobase + VAR_0);

 VAR_22->events = 0;

 if (VAR_23) {
  FUNC_0("hpdi: intr status 0x%x, ", VAR_23);
  FUNC_10(VAR_23,
         FUNC_4(VAR_20)->hpdi_iobase + VAR_7);
 }

 FUNC_7(&VAR_20->spinlock, VAR_29);
 VAR_27 = FUNC_5(FUNC_4(VAR_20)->plx9080_iobase + VAR_12);
 if (VAR_25 & VAR_3) {
  FUNC_9((VAR_27 & VAR_14) | VAR_10,
         FUNC_4(VAR_20)->plx9080_iobase + VAR_12);

  FUNC_0("dma0 status 0x%x\n", VAR_27);
  if (VAR_27 & VAR_14) {
   FUNC_3(VAR_20, 0);
  }
  FUNC_0(" cleared dma ch0 interrupt\n");
 }
 FUNC_8(&VAR_20->spinlock, VAR_29);


 FUNC_7(&VAR_20->spinlock, VAR_29);
 VAR_28 = FUNC_5(FUNC_4(VAR_20)->plx9080_iobase + VAR_13);
 if (VAR_25 & VAR_4) {
  FUNC_9((VAR_28 & VAR_14) | VAR_10,
         FUNC_4(VAR_20)->plx9080_iobase + VAR_13);
  FUNC_0("dma1 status 0x%x\n", VAR_28);

  FUNC_0(" cleared dma ch1 interrupt\n");
 }
 FUNC_8(&VAR_20->spinlock, VAR_29);


 if (VAR_25 & VAR_5) {
  VAR_26 = FUNC_6(FUNC_4(VAR_20)->plx9080_iobase + VAR_11);
  FUNC_10(VAR_26, FUNC_4(VAR_20)->plx9080_iobase + VAR_11);
  FUNC_0(" cleared local doorbell bits 0x%x\n", VAR_26);
 }

 if (VAR_24 & VAR_16) {
  FUNC_2(VAR_20, "rx fifo overrun");
  VAR_22->events |= VAR_1 | VAR_2;
  FUNC_0("dma0_status 0x%x\n",
       (int)FUNC_5(FUNC_4(VAR_20)->plx9080_iobase +
           VAR_12));
 }

 if (VAR_24 & VAR_17) {
  FUNC_2(VAR_20, "rx fifo underrun");
  VAR_22->events |= VAR_1 | VAR_2;
 }

 if (FUNC_4(VAR_20)->dio_count == 0)
  VAR_22->events |= VAR_1;

 FUNC_0("board status 0x%x, ", VAR_24);
 FUNC_0("plx status 0x%x\n", VAR_25);
 if (VAR_22->events)
  FUNC_0(" events 0x%x\n", VAR_22->events);

 FUNC_1(VAR_20, VAR_21);

 return VAR_8;
}
