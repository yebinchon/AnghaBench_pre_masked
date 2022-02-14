
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct comedi_cmd {unsigned int chanlist_len; scalar_t__ scan_begin_src; unsigned int scan_begin_arg; int flags; int stop_src; int start_src; int stop_arg; int * chanlist; } ;
struct TYPE_4__ {unsigned int ao_enab; unsigned int* ao_scan_order; int daccon; int* hwrange; unsigned int cached_div1; unsigned int cached_div2; int ao_stop_continuous; int ao_spinlock; scalar_t__ iobase1; int intsce; int ao_stop_count; } ;
struct TYPE_3__ {int * inttrig; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int,int,int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;




 int VAR_19 ;


 scalar_t__ VAR_20 ;
 TYPE_2__* VAR_21 ;
 int FUNC_5 (scalar_t__,int ,int,unsigned int,int) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;
 int VAR_22 ;
 int FUNC_8 (int,unsigned int*,unsigned int*,unsigned int*,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct comedi_device *VAR_23, struct comedi_subdevice *VAR_24)
{
 struct comedi_cmd *VAR_25 = &VAR_24->async->cmd;
 int VAR_26;
 unsigned int VAR_27, VAR_28;
 unsigned int VAR_29;
 unsigned int VAR_30;
 unsigned long VAR_31;


 if (VAR_25->chanlist == ((void*)0) || VAR_25->chanlist_len == 0) {
  return -VAR_2;
 }


 VAR_21->ao_enab = 0;

 for (VAR_27 = 0; VAR_27 < VAR_25->chanlist_len; VAR_27++) {
  VAR_29 = FUNC_2(VAR_25->chanlist[VAR_27]);
  VAR_21->ao_enab |= 1U << VAR_29;
  VAR_30 = 0;
  for (VAR_28 = 0; VAR_28 < VAR_25->chanlist_len; VAR_28++) {
   if (FUNC_2(VAR_25->chanlist[VAR_28]) < VAR_29) {
    VAR_30++;
   }
  }
  VAR_21->ao_scan_order[VAR_30] = VAR_27;
 }


 FUNC_7(VAR_21->ao_enab, VAR_23->iobase + VAR_4);


 VAR_26 = FUNC_3(VAR_25->chanlist[0]);
 VAR_21->daccon = FUNC_1(VAR_21->daccon,
      (VAR_21->
       hwrange[VAR_26] | VAR_11 |
       VAR_7),
      (VAR_9 |
       VAR_12 |
       VAR_10 |
       VAR_6));
 FUNC_7(VAR_21->daccon | VAR_8,
      VAR_23->iobase + VAR_5);

 if (VAR_25->scan_begin_src == VAR_20) {
  unsigned int VAR_32, VAR_33, VAR_34;
  unsigned int VAR_35 = VAR_25->scan_begin_arg;
  int VAR_36 = VAR_25->flags & VAR_19;


  switch (VAR_36) {
  case 129:
  default:
   VAR_34 = VAR_18 / 2;
   break;
  case 130:
   VAR_34 = 0;
   break;
  case 128:
   VAR_34 = VAR_18 - 1;
   break;
  }

  VAR_33 = VAR_25->scan_begin_arg / VAR_18;
  VAR_33 += (VAR_34 + VAR_25->scan_begin_arg % VAR_18) /
      VAR_18;
  if (VAR_33 <= 0x10000) {

   if (VAR_33 < 2)
    VAR_33 = 2;
   VAR_33 &= 0xffff;
   VAR_32 = 1;
  } else {

   VAR_32 = VAR_21->cached_div1;
   VAR_33 = VAR_21->cached_div2;
   FUNC_8(VAR_18, &VAR_32, &VAR_33,
         &VAR_35, VAR_36);
  }






  FUNC_6(FUNC_4(0, VAR_3),
       VAR_21->iobase1 + VAR_17);
  if (VAR_32 == 1) {

   FUNC_6(FUNC_0(0, VAR_0),
        VAR_21->iobase1 + VAR_16);
  } else {


   FUNC_6(FUNC_4(2, VAR_3),
        VAR_21->iobase1 + VAR_17);

   FUNC_6(FUNC_0(2, VAR_0),
        VAR_21->iobase1 + VAR_16);

   FUNC_5(VAR_21->iobase1 + VAR_15, 0,
       2, VAR_32, 2);

   FUNC_6(FUNC_0(0, VAR_1),
        VAR_21->iobase1 + VAR_16);
  }

  FUNC_5(VAR_21->iobase1 + VAR_15, 0, 0, VAR_33, 2);
 }




 switch (VAR_25->stop_src) {
 case 133:

  VAR_21->ao_stop_continuous = 0;
  VAR_21->ao_stop_count = VAR_25->stop_arg;
  break;
 default:

  VAR_21->ao_stop_continuous = 1;
  VAR_21->ao_stop_count = 0;
  break;
 }




 switch (VAR_25->start_src) {
 case 131:
  FUNC_9(&VAR_21->ao_spinlock, VAR_31);
  VAR_24->async->inttrig = &VAR_22;
  FUNC_10(&VAR_21->ao_spinlock, VAR_31);
  break;
 case 132:

  FUNC_9(&VAR_21->ao_spinlock, VAR_31);
  VAR_21->intsce |= VAR_13;
  FUNC_6(VAR_21->intsce, VAR_21->iobase1 + VAR_14);
  FUNC_10(&VAR_21->ao_spinlock, VAR_31);
  break;
 }

 return 0;
}
