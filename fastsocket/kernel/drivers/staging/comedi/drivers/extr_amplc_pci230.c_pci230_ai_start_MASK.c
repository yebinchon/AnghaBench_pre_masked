
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct comedi_cmd {int convert_src; int convert_arg; int scan_begin_src; } ;
struct comedi_async {int inttrig; int events; struct comedi_cmd cmd; } ;
struct TYPE_2__ {scalar_t__ ai_scan_count; unsigned char int_en; unsigned char ier; unsigned short adccon; scalar_t__ iobase1; int isr_spinlock; int ai_continuous; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char FUNC_0 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 unsigned char VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;

 int VAR_18 ;


 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_1__* VAR_19 ;
 int FUNC_2 (unsigned char,scalar_t__) ;
 int FUNC_3 (unsigned short,scalar_t__) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_6 (struct comedi_device*,int ,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct comedi_device *VAR_22,
       struct comedi_subdevice *VAR_23)
{
 unsigned long VAR_24;
 unsigned short VAR_25;
 struct comedi_async *VAR_26 = VAR_23->async;
 struct comedi_cmd *VAR_27 = &VAR_26->cmd;

 FUNC_7(VAR_0, &VAR_19->state);
 if (!VAR_19->ai_continuous && (VAR_19->ai_scan_count == 0)) {

  VAR_26->events |= VAR_1;
  FUNC_4(VAR_22, VAR_23);
  FUNC_1(VAR_22, VAR_23);
 } else {

  FUNC_8(&VAR_19->isr_spinlock, VAR_24);
  VAR_19->int_en |= VAR_14;
  VAR_19->ier |= VAR_14;
  FUNC_2(VAR_19->ier, VAR_19->iobase1 + VAR_15);
  FUNC_9(&VAR_19->isr_spinlock, VAR_24);



  switch (VAR_27->convert_src) {
  default:
   VAR_25 = VAR_12;
   break;
  case 128:

   VAR_25 = VAR_13;
   break;
  case 130:
   if ((VAR_27->convert_arg & VAR_2) != 0) {
    if ((VAR_27->convert_arg & VAR_3) == 0) {

     VAR_25 = VAR_10;
    } else {

     VAR_25 = VAR_9;
    }
   } else {

    if (VAR_27->convert_arg != 0) {

     VAR_25 = VAR_10;
    } else {

     VAR_25 = VAR_9;
    }
   }
   break;
  case 129:


   VAR_25 = VAR_13;
   break;
  }
  VAR_19->adccon = (VAR_19->adccon & ~VAR_11)
      | VAR_25;
  FUNC_3(VAR_19->adccon, VAR_22->iobase + VAR_8);
  if (VAR_27->convert_src == 129) {
   VAR_26->inttrig = VAR_20;
  }


  FUNC_5(VAR_22, VAR_23);
  if (VAR_27->convert_src == 128) {

   unsigned char VAR_28;

   if (VAR_27->scan_begin_src != VAR_18) {


    VAR_28 = FUNC_0(2, VAR_5);
   } else {


    VAR_28 = FUNC_0(2, VAR_6);
   }
   FUNC_2(VAR_28, VAR_19->iobase1 + VAR_16);
   if (VAR_27->scan_begin_src != VAR_18) {

    switch (VAR_27->scan_begin_src) {
    default:
     VAR_28 = FUNC_0(0, VAR_6);
     break;
    case 130:
     VAR_28 = FUNC_0(0, VAR_4);
     break;
    case 128:





     VAR_28 = FUNC_0(0, VAR_5);
     break;
    case 129:





     VAR_28 = FUNC_0(0, VAR_6);
     break;
    }
    FUNC_2(VAR_28, VAR_19->iobase1 + VAR_16);
    switch (VAR_27->scan_begin_src) {
    case 128:


     VAR_28 = FUNC_0(1, VAR_6);
     FUNC_2(VAR_28, VAR_19->iobase1
          + VAR_16);
     break;
    case 129:
     VAR_26->inttrig =
         VAR_21;
     break;
    }
   }
  } else if (VAR_27->convert_src != 129) {

   FUNC_6(VAR_22, VAR_17, VAR_7);
  }
 }
}
