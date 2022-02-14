
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int spinlock; scalar_t__ iobase; scalar_t__ subdevices; int attached; struct comedi_subdevice* read_subdev; } ;
struct comedi_async {int events; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {scalar_t__ count; int forever; int do_bits; } ;
struct TYPE_3__ {int resolution; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 short VAR_12 ;
 short VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct comedi_subdevice*,short) ;
 int FUNC_1 (struct comedi_device*,char*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_device*,scalar_t__) ;
 TYPE_2__* VAR_18 ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 TYPE_1__* VAR_19 ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_20, void *VAR_21)
{
 short VAR_22;
 short VAR_23 = 0;
 struct comedi_device *VAR_24 = VAR_21;
 struct comedi_subdevice *VAR_25 = VAR_24->read_subdev;
 struct comedi_async *VAR_26;
 int VAR_27;
 unsigned long VAR_28;
 static const int VAR_29 = 128;

 int VAR_30 = 0;
 int VAR_31 = 0;

 VAR_27 = FUNC_5(VAR_24->iobase + VAR_10);

 if (!(VAR_27 & VAR_14))
  return VAR_16;
 if (!(VAR_24->attached))
  return VAR_15;




 VAR_26 = VAR_25->async;


 FUNC_7(&VAR_24->spinlock, VAR_28);
 FUNC_6(VAR_4, VAR_24->iobase + VAR_7);
 VAR_27 = FUNC_5(VAR_24->iobase + VAR_11) & VAR_17;

 if (VAR_27 == 0) {
  FUNC_8(&VAR_24->spinlock, VAR_28);
  return VAR_15;
 }


 for (VAR_22 = 0; VAR_22 < VAR_29; VAR_22++) {

  VAR_23 = FUNC_5(VAR_24->iobase + VAR_8);
  VAR_23 += FUNC_5(VAR_24->iobase + VAR_9) << 8;
  if (VAR_19->resolution == 12) {
   VAR_30 = VAR_23 & VAR_12;
   VAR_31 = VAR_23 & VAR_13;
   if (VAR_31)
    break;
  } else {
   VAR_30 = 0;
  }
  if (VAR_30) {
   break;
  }

  if (VAR_19->resolution == 12)
   VAR_23 = (VAR_23 >> 4) & 0xfff;

  if (VAR_18->count > 0 || VAR_18->forever == 1) {

   FUNC_0(VAR_25, VAR_23);
   if (VAR_18->count > 0)
    VAR_18->count--;
  }
 }
 VAR_26->events |= VAR_1;

 if (VAR_19->resolution == 12) {
  VAR_31 = VAR_23 & VAR_13;

 } else {
  VAR_31 = FUNC_5(VAR_24->iobase + VAR_7) & VAR_0;
 }
 if (VAR_31) {
  FUNC_8(&VAR_24->spinlock, VAR_28);
  FUNC_1(VAR_24, "DAS800 FIFO overflow");
  FUNC_3(VAR_24, VAR_24->subdevices + 0);
  VAR_26->events |= VAR_3 | VAR_2;
  FUNC_2(VAR_24, VAR_25);
  VAR_26->events = 0;
  return VAR_15;
 }
 if (VAR_18->count > 0 || VAR_18->forever == 1) {


  FUNC_6(VAR_4, VAR_24->iobase + VAR_7);
  FUNC_6(VAR_5 | VAR_18->do_bits,
       VAR_24->iobase + VAR_6);
  FUNC_8(&VAR_24->spinlock, VAR_28);

 } else {
  FUNC_8(&VAR_24->spinlock, VAR_28);
  FUNC_4(VAR_24);
  VAR_26->events |= VAR_2;
 }
 FUNC_2(VAR_24, VAR_25);
 VAR_26->events = 0;
 return VAR_15;
}
