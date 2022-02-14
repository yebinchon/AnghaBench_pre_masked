
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ attached; scalar_t__ iobase; struct comedi_subdevice* read_subdev; } ;
struct comedi_cmd {scalar_t__ stop_src; } ;
struct comedi_async {int events; struct comedi_cmd cmd; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int status1_bits; int (* read_byte ) (scalar_t__) ;int status2_bits; scalar_t__ current_transfer; scalar_t__ count; int (* write_byte ) (int,scalar_t__) ;} ;
struct TYPE_3__ {scalar_t__ register_layout; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_2__* VAR_17 ;
 int FUNC_2 (struct comedi_device*) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (struct comedi_device*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (int,scalar_t__) ;
 int FUNC_10 (int,scalar_t__) ;
 TYPE_1__* VAR_20 ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_21, void *VAR_22)
{
 struct comedi_device *VAR_23 = VAR_22;
 struct comedi_subdevice *VAR_24 = VAR_23->read_subdev;
 struct comedi_async *VAR_25;
 struct comedi_cmd *VAR_26;

 if (VAR_23->attached == 0) {
  FUNC_0(VAR_23, "premature interrupt");
  return VAR_7;
 }

 VAR_25 = VAR_24->async;
 VAR_26 = &VAR_25->cmd;
 VAR_25->events = 0;


 VAR_17->status1_bits = VAR_17->read_byte(VAR_23->iobase + VAR_11);
 if (VAR_20->register_layout == VAR_19)
  VAR_17->status2_bits =
      VAR_17->read_byte(VAR_23->iobase + VAR_12);

 if ((VAR_17->status1_bits & (VAR_5 | VAR_13 | VAR_9 |
          VAR_10 | VAR_4)) == 0
     && (VAR_17->status2_bits & VAR_0) == 0
     && (VAR_17->status2_bits & VAR_6)) {
  return VAR_8;
 }

 if (VAR_17->status1_bits & VAR_10) {

  VAR_17->write_byte(0x1, VAR_23->iobase + VAR_1);
  VAR_25->events |= VAR_3 | VAR_2;
  FUNC_1(VAR_23, VAR_24);
  FUNC_0(VAR_23, "overrun");
  return VAR_7;
 }

 if (VAR_17->current_transfer == VAR_18) {

  if (VAR_17->status1_bits & VAR_5 ||
      (VAR_20->register_layout == VAR_19
       && VAR_17->status2_bits & VAR_0)) {
   FUNC_2(VAR_23);
  }
 } else
  FUNC_5(VAR_23);

 if (VAR_17->status1_bits & VAR_13) {
  FUNC_0(VAR_23, "handled timer interrupt?");

  VAR_17->write_byte(0x1, VAR_23->iobase + VAR_14);
 }

 if (VAR_17->status1_bits & VAR_9) {

  VAR_17->write_byte(0x1, VAR_23->iobase + VAR_1);
  VAR_25->events |= VAR_3 | VAR_2;
  FUNC_1(VAR_23, VAR_24);
  FUNC_0(VAR_23, "overflow");
  return VAR_7;
 }

 if (VAR_26->stop_src == VAR_16) {
  if (VAR_17->status2_bits & VAR_0) {
   FUNC_4(VAR_23);
   FUNC_3(VAR_23, VAR_24);
   VAR_25->events |= VAR_2;
  }
 }


 if (VAR_26->stop_src == VAR_15) {
  if (VAR_17->count == 0) {
   FUNC_3(VAR_23, VAR_24);
   VAR_25->events |= VAR_2;
  }
 }

 FUNC_1(VAR_23, VAR_24);
 return VAR_7;
}
