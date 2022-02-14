
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int irq; } ;
struct comedi_cmd {int chanlist_len; int scan_begin_src; int flags; int scan_begin_arg; int stop_src; int stop_arg; int convert_src; int convert_arg; int chanlist; } ;
struct TYPE_6__ {int flags; int fifoLen; int transCount; int aiCount; int intMask; TYPE_2__* dma0Chain; scalar_t__ dma0Offset; scalar_t__ intCount; } ;
struct TYPE_5__ {int next; } ;
struct TYPE_4__ {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,int) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (struct comedi_device*,int) ;
 int FUNC_5 (struct comedi_device*,int) ;
 int FUNC_6 (struct comedi_device*,int) ;
 int FUNC_7 (struct comedi_device*,int) ;
 int FUNC_8 (struct comedi_device*,int ) ;
 int FUNC_9 (struct comedi_device*,int ) ;
 int FUNC_10 (struct comedi_device*) ;
 int FUNC_11 (struct comedi_device*,int ) ;
 int FUNC_12 (struct comedi_device*) ;
 int FUNC_13 (struct comedi_device*,int ) ;
 int FUNC_14 (struct comedi_device*,int ) ;
 int FUNC_15 (struct comedi_device*) ;
 int FUNC_16 (struct comedi_device*,int) ;
 int FUNC_17 (struct comedi_device*,int) ;
 int FUNC_18 (struct comedi_device*) ;
 int FUNC_19 (struct comedi_device*,int) ;
 int FUNC_20 (struct comedi_device*) ;
 int FUNC_21 (struct comedi_device*,int ) ;
 int FUNC_22 (struct comedi_device*) ;
 int FUNC_23 (struct comedi_device*,int) ;
 int VAR_11 ;
 int VAR_12 ;



 int VAR_13 ;

 int VAR_14 ;
 int FUNC_24 (struct comedi_device*,int ) ;
 TYPE_3__* VAR_15 ;
 int FUNC_25 (struct comedi_device*,int,int ) ;
 int FUNC_26 (int*,int ) ;

__attribute__((used)) static int FUNC_27(struct comedi_device *VAR_16, struct comedi_subdevice *VAR_17)
{
 struct comedi_cmd *VAR_18 = &VAR_17->async->cmd;
 int VAR_19;


 FUNC_21(VAR_16, 0);
 FUNC_20(VAR_16);
 FUNC_4(VAR_16, 0);
 FUNC_14(VAR_16, 0);
 FUNC_3(VAR_16);
 FUNC_15(VAR_16);
 VAR_15->intCount = 0;

 if (!VAR_16->irq) {
  FUNC_0("rtd520: ERROR! No interrupt available!\n");
  return -VAR_4;
 }



 FUNC_25(VAR_16, VAR_18->chanlist_len, VAR_18->chanlist);


 if (VAR_18->chanlist_len > 1) {

  FUNC_19(VAR_16, 0);
  FUNC_6(VAR_16, 1);
  FUNC_4(VAR_16, 2);
 } else {

  FUNC_19(VAR_16, 0);
  FUNC_4(VAR_16, 1);
 }
 FUNC_1(VAR_16, VAR_15->fifoLen / 2 - 1);

 if (128 == VAR_18->scan_begin_src) {


  if (VAR_18->flags & VAR_14) {


   VAR_15->transCount = VAR_18->chanlist_len;
   VAR_15->flags |= VAR_11;
  } else {

   VAR_15->transCount
       =
       (VAR_12 * VAR_18->chanlist_len) /
       VAR_18->scan_begin_arg;
   if (VAR_15->transCount < VAR_18->chanlist_len) {

    VAR_15->transCount = VAR_18->chanlist_len;
   } else {
    VAR_15->transCount =
        (VAR_15->transCount +
         VAR_18->chanlist_len - 1)
        / VAR_18->chanlist_len;
    VAR_15->transCount *= VAR_18->chanlist_len;
   }
   VAR_15->flags |= VAR_11;
  }
  if (VAR_15->transCount >= (VAR_15->fifoLen / 2)) {

   VAR_15->transCount = 0;
   VAR_15->flags &= ~VAR_11;
  } else {

   FUNC_1(VAR_16, VAR_15->transCount - 1);
  }

  FUNC_0
      ("rtd520: scanLen=%d tranferCount=%d fifoLen=%d\n  scanTime(ns)=%d flags=0x%x\n",
       VAR_18->chanlist_len, VAR_15->transCount, VAR_15->fifoLen,
       VAR_18->scan_begin_arg, VAR_15->flags);
 } else {
  VAR_15->transCount = 0;
  VAR_15->flags &= ~VAR_11;
 }
 FUNC_16(VAR_16, 1);
 FUNC_2(VAR_16, 1);




 switch (VAR_18->stop_src) {
 case 131:
  VAR_15->aiCount = VAR_18->stop_arg * VAR_18->chanlist_len;
  if ((VAR_15->transCount > 0)
      && (VAR_15->transCount > VAR_15->aiCount)) {
   VAR_15->transCount = VAR_15->aiCount;
  }
  break;

 case 129:
  VAR_15->aiCount = -1;
  break;

 default:
  FUNC_0("rtd520: Warning! ignoring stop_src mode %d\n",
   VAR_18->stop_src);
 }


 switch (VAR_18->scan_begin_src) {
 case 128:
  VAR_19 = FUNC_26(&VAR_18->scan_begin_arg,
     VAR_13);


  FUNC_17(VAR_16, VAR_19);

  break;

 case 130:
  FUNC_19(VAR_16, 1);
  break;

 default:
  FUNC_0("rtd520: Warning! ignoring scan_begin_src mode %d\n",
   VAR_18->scan_begin_src);
 }


 switch (VAR_18->convert_src) {
 case 128:
  if (VAR_18->chanlist_len > 1) {
   VAR_19 = FUNC_26(&VAR_18->convert_arg,
      VAR_13);


   FUNC_5(VAR_16, VAR_19);
  }

  break;

 case 130:
  FUNC_6(VAR_16, 2);
  break;

 default:
  FUNC_0("rtd520: Warning! ignoring convert_src mode %d\n",
   VAR_18->convert_src);
 }




 FUNC_13(VAR_16, ~0);
 FUNC_12(VAR_16);


 if (VAR_15->transCount > 0) {
  FUNC_14(VAR_16, VAR_7);
  FUNC_0("rtd520: Transferring every %d\n", VAR_15->transCount);
 } else {
  FUNC_14(VAR_16, VAR_7);
  FUNC_0("rtd520: Transferring every 1/2 FIFO\n");

 }



 FUNC_18(VAR_16);
 return 0;
}
