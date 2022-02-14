
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct comedi_cmd {scalar_t__ scan_begin_src; scalar_t__ stop_src; unsigned int chanlist_len; int flags; int scan_begin_arg; int * chanlist; scalar_t__ stop_arg; } ;
struct TYPE_4__ {int ao_continuous; int hwver; unsigned short daccon; scalar_t__ iobase1; scalar_t__ ao_bipolar; scalar_t__ ao_scan_count; } ;
struct TYPE_3__ {int inttrig; struct comedi_cmd cmd; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 TYPE_2__* VAR_18 ;
 int FUNC_3 (struct comedi_device*,int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (unsigned short,scalar_t__) ;
 scalar_t__* VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (struct comedi_device*,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_21, struct comedi_subdevice *VAR_22)
{
 unsigned short VAR_23;
 unsigned int VAR_24;


 struct comedi_cmd *VAR_25 = &VAR_22->async->cmd;

 if (VAR_25->scan_begin_src == VAR_17) {

  if (!FUNC_3(VAR_21, VAR_14, VAR_3)) {
   return -VAR_0;
  }
 }


 if (VAR_25->stop_src == VAR_15) {
  VAR_18->ao_scan_count = VAR_25->stop_arg;
  VAR_18->ao_continuous = 0;
 } else {

  VAR_18->ao_scan_count = 0;
  VAR_18->ao_continuous = 1;
 }



 VAR_24 = FUNC_1(VAR_25->chanlist[0]);
 VAR_18->ao_bipolar = VAR_19[VAR_24];
 VAR_23 = VAR_18->ao_bipolar ? VAR_11 : VAR_12;

 if (VAR_18->hwver >= 2) {
  unsigned short VAR_26;
  unsigned int VAR_27;

  VAR_26 = 0;
  for (VAR_27 = 0; VAR_27 < VAR_25->chanlist_len; VAR_27++) {
   VAR_26 |= 1 << FUNC_0(VAR_25->chanlist[VAR_27]);
  }

  FUNC_5(VAR_26, VAR_21->iobase + VAR_4);
  VAR_23 |= VAR_5 | VAR_6
      | VAR_7
      | VAR_9 | VAR_8;
 }


 FUNC_5(VAR_23, VAR_21->iobase + VAR_10);

 VAR_18->daccon = VAR_23
     & ~(VAR_6 | VAR_7);

 if (VAR_25->scan_begin_src == VAR_17) {



  FUNC_4(FUNC_2(1, VAR_1),
       VAR_18->iobase1 + VAR_13);
  FUNC_6(VAR_21, 1, VAR_2,
     VAR_25->scan_begin_arg,
     VAR_25->flags & VAR_16);
 }


 VAR_22->async->inttrig = VAR_20;

 return 0;
}
