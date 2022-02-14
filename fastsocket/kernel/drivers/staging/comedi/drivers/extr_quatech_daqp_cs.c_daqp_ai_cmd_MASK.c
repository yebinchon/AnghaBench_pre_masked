
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct local_info_t {int count; struct comedi_subdevice* s; struct comedi_device* dev; int interrupt_mode; scalar_t__ stop; } ;
struct comedi_subdevice {TYPE_1__* async; scalar_t__ private; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct comedi_cmd {scalar_t__ convert_src; int flags; int chanlist_len; int* chanlist; scalar_t__ stop_src; int stop_arg; int scan_end_arg; int scan_begin_arg; int convert_arg; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_3 (int ) ;
 int VAR_18 ;
 int FUNC_4 (int ) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_27, struct comedi_subdevice *VAR_28)
{
 struct local_info_t *VAR_29 = (struct local_info_t *)VAR_28->private;
 struct comedi_cmd *VAR_30 = &VAR_28->async->cmd;
 int VAR_31 = 100;
 int VAR_32;
 int VAR_33;

 int VAR_34;
 int VAR_35;

 if (VAR_29->stop) {
  return -VAR_22;
 }


 FUNC_5(VAR_27, VAR_28);

 FUNC_8(0, VAR_27->iobase + VAR_1);


 FUNC_8(VAR_6, VAR_27->iobase + VAR_2);
 if (VAR_30->convert_src == VAR_25) {
  int VAR_36 = FUNC_6(&VAR_30->convert_arg,
            VAR_30->flags & VAR_24);
  FUNC_8(VAR_36 & 0xff, VAR_27->iobase + VAR_15);
  FUNC_8((VAR_36 >> 8) & 0xff, VAR_27->iobase + VAR_16);
  FUNC_8((VAR_36 >> 16) & 0xff, VAR_27->iobase + VAR_14);
  VAR_32 = 1;
 } else {
  int VAR_37 = FUNC_6(&VAR_30->scan_begin_arg,
            VAR_30->flags & VAR_24);
  FUNC_8(VAR_37 & 0xff, VAR_27->iobase + VAR_15);
  FUNC_8((VAR_37 >> 8) & 0xff, VAR_27->iobase + VAR_16);
  FUNC_8((VAR_37 >> 16) & 0xff, VAR_27->iobase + VAR_14);
  VAR_32 = 0;
 }



 for (VAR_34 = 0; VAR_34 < VAR_30->chanlist_len; VAR_34++) {

  int VAR_38 = VAR_30->chanlist[VAR_34];



  VAR_35 = FUNC_3(FUNC_1(VAR_38))
      | FUNC_4(FUNC_2(VAR_38));

  if (FUNC_0(VAR_38) == VAR_0) {
   VAR_35 |= VAR_18;
  }

  if (VAR_34 == 0 || VAR_32) {
   VAR_35 |= VAR_19;
  }

  FUNC_8(VAR_35 & 0xff, VAR_27->iobase + VAR_17);
  FUNC_8(VAR_35 >> 8, VAR_27->iobase + VAR_17);
 }
 if (VAR_30->stop_src == VAR_23) {
  VAR_29->count = VAR_30->stop_arg * VAR_30->scan_end_arg;
  VAR_33 = 2 * VAR_29->count;
  while (VAR_33 > VAR_13 * 3 / 4)
   VAR_33 /= 2;
 } else {
  VAR_29->count = -1;
  VAR_33 = VAR_13 / 2;
 }



 FUNC_8(VAR_5, VAR_27->iobase + VAR_2);
 FUNC_8(0x00, VAR_27->iobase + VAR_12);
 FUNC_8(0x00, VAR_27->iobase + VAR_12);

 FUNC_8((VAR_13 - VAR_33) & 0xff, VAR_27->iobase + VAR_12);
 FUNC_8((VAR_13 - VAR_33) >> 8, VAR_27->iobase + VAR_12);



 VAR_35 = VAR_10 | VAR_11
     | VAR_9 | VAR_8;

 FUNC_8(VAR_35, VAR_27->iobase + VAR_7);





 while (--VAR_31
        && (FUNC_7(VAR_27->iobase + VAR_20) & VAR_21)) ;
 if (!VAR_31) {
  FUNC_9("daqp: couldn't clear interrupts in status register\n");
  return -1;
 }

 VAR_29->interrupt_mode = VAR_26;
 VAR_29->dev = VAR_27;
 VAR_29->s = VAR_28;


 FUNC_8(VAR_3 | VAR_4,
      VAR_27->iobase + VAR_2);

 return 0;
}
