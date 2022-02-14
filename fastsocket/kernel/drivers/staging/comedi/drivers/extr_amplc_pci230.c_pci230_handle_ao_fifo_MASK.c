
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;
struct comedi_async {unsigned int events; struct comedi_cmd cmd; } ;
struct TYPE_2__ {unsigned int ao_scan_count; int daccon; int ao_continuous; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (struct comedi_async*,short*) ;
 unsigned int FUNC_2 (struct comedi_async*) ;
 int FUNC_3 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_16 ;
 unsigned short FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_7 (struct comedi_device*,short,int ) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_17,
     struct comedi_subdevice *VAR_18)
{
 struct comedi_async *VAR_19 = VAR_18->async;
 struct comedi_cmd *VAR_20 = &VAR_19->cmd;
 unsigned int VAR_21;
 unsigned int VAR_22;
 unsigned short VAR_23;
 unsigned int VAR_24, VAR_25;
 unsigned int VAR_26;
 unsigned int VAR_27 = 0;
 int VAR_28;


 VAR_23 = FUNC_4(VAR_17->iobase + VAR_15);


 VAR_26 = VAR_20->chanlist_len * sizeof(short);
 VAR_21 = FUNC_2(VAR_19) / VAR_26;
 if (!VAR_16->ao_continuous) {

  if (VAR_21 > VAR_16->ao_scan_count) {
   VAR_21 = VAR_16->ao_scan_count;
  }
  if (VAR_16->ao_scan_count == 0) {

   VAR_27 |= VAR_1;
  }
 }
 if (VAR_27 == 0) {

  if ((VAR_23 & VAR_12) != 0) {
   FUNC_3(VAR_17, "AO FIFO underrun");
   VAR_27 |= VAR_4 | VAR_3;
  }



  if ((VAR_21 == 0)
      && ((VAR_23 & VAR_11) == 0)) {
   FUNC_3(VAR_17, "AO buffer underrun");
   VAR_27 |= VAR_4 | VAR_3;
  }
 }
 if (VAR_27 == 0) {

  if ((VAR_23 & VAR_10) != 0) {
   VAR_22 = VAR_6;
  } else if ((VAR_23 & VAR_11) != 0) {
   VAR_22 = VAR_7;
  } else if ((VAR_23 & VAR_9) != 0) {
   VAR_22 = VAR_5;
  } else {
   VAR_22 = VAR_8;
  }

  VAR_22 /= VAR_20->chanlist_len;

  if (VAR_21 > VAR_22) {
   VAR_21 = VAR_22;
  }

  for (VAR_25 = 0; VAR_25 < VAR_21; VAR_25++) {
   for (VAR_24 = 0; VAR_24 < VAR_20->chanlist_len; VAR_24++) {
    short VAR_29;

    FUNC_1(VAR_19, &VAR_29);
    FUNC_7(VAR_17, VAR_29,
           FUNC_0(VAR_20->chanlist[VAR_24]));
   }
  }
  VAR_27 |= VAR_2 | VAR_0;
  if (!VAR_16->ao_continuous) {
   VAR_16->ao_scan_count -= VAR_21;
   if (VAR_16->ao_scan_count == 0) {



    VAR_16->daccon = (VAR_16->daccon
         &
         ~VAR_14)
        | VAR_13;
    FUNC_5(VAR_16->daccon,
         VAR_17->iobase + VAR_15);
   }
  }

  VAR_23 = FUNC_4(VAR_17->iobase + VAR_15);
  if ((VAR_23 & VAR_12) != 0) {
   FUNC_3(VAR_17, "AO FIFO underrun");
   VAR_27 |= VAR_4 | VAR_3;
  }
 }
 if ((VAR_27 & (VAR_1 | VAR_3 | VAR_4))
     != 0) {

  FUNC_6(VAR_17, VAR_18);
  VAR_28 = 0;
 } else {
  VAR_28 = 1;
 }
 VAR_19->events |= VAR_27;
 return VAR_28;
}
