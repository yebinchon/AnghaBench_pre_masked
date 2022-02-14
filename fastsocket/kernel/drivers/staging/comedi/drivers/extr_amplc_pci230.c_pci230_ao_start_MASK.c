
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct comedi_cmd {int scan_begin_src; int scan_begin_arg; } ;
struct comedi_async {int inttrig; int events; struct comedi_cmd cmd; } ;
struct TYPE_2__ {scalar_t__ ao_scan_count; int hwver; unsigned short daccon; int isr_spinlock; scalar_t__ iobase1; int ier; int int_en; int ao_continuous; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;



 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_1__* VAR_15 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (unsigned short,scalar_t__) ;
 int VAR_16 ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct comedi_device *VAR_17,
       struct comedi_subdevice *VAR_18)
{
 struct comedi_async *VAR_19 = VAR_18->async;
 struct comedi_cmd *VAR_20 = &VAR_19->cmd;
 unsigned long VAR_21;

 FUNC_6(VAR_0, &VAR_15->state);
 if (!VAR_15->ao_continuous && (VAR_15->ao_scan_count == 0)) {

  VAR_19->events |= VAR_1;
  FUNC_4(VAR_17, VAR_18);
  FUNC_1(VAR_17, VAR_18);
 } else {
  if (VAR_15->hwver >= 2) {

   unsigned short VAR_22;
   int VAR_23;


   VAR_23 = FUNC_5(VAR_17, VAR_18);
   FUNC_1(VAR_17, VAR_18);
   if (!VAR_23) {

    return;
   }

   switch (VAR_20->scan_begin_src) {
   case 128:
    VAR_22 = VAR_9;
    break;
   case 130:

    if ((VAR_20->scan_begin_arg & VAR_2) == 0) {

     VAR_22 = VAR_5;
    } else {

     VAR_22 = VAR_4;
    }
    break;
   case 129:
    VAR_22 = VAR_8;
    break;
   default:

    VAR_22 = VAR_7;
    break;
   }
   VAR_15->daccon = (VAR_15->daccon
        & ~VAR_6) |
       VAR_22;
   FUNC_3(VAR_15->daccon, VAR_17->iobase + VAR_11);

  }
  switch (VAR_20->scan_begin_src) {
  case 128:
   if (VAR_15->hwver < 2) {


    FUNC_7(&VAR_15->isr_spinlock,
        VAR_21);
    VAR_15->int_en |= VAR_13;
    VAR_15->ier |= VAR_13;
    FUNC_2(VAR_15->ier,
         VAR_15->iobase1 + VAR_12);
    FUNC_8(&VAR_15->isr_spinlock,
             VAR_21);
   }

   FUNC_2(FUNC_0(1, VAR_3),
        VAR_15->iobase1 + VAR_14);
   break;
  case 129:
   VAR_19->inttrig = VAR_16;
   break;
  }
  if (VAR_15->hwver >= 2) {

   FUNC_7(&VAR_15->isr_spinlock, VAR_21);
   VAR_15->int_en |= VAR_10;
   VAR_15->ier |= VAR_10;
   FUNC_2(VAR_15->ier, VAR_15->iobase1 + VAR_12);
   FUNC_8(&VAR_15->isr_spinlock,
            VAR_21);
  }
 }
}
