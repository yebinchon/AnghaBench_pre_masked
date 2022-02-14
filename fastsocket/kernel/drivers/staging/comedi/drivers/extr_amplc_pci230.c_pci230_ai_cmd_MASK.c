
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct comedi_cmd {scalar_t__ scan_begin_src; scalar_t__ stop_src; unsigned int chanlist_len; scalar_t__ convert_src; int convert_arg; int flags; int scan_end_arg; int scan_begin_arg; scalar_t__ start_src; int * chanlist; scalar_t__ stop_arg; } ;
struct comedi_async {int inttrig; struct comedi_cmd cmd; } ;
struct TYPE_2__ {int ai_continuous; scalar_t__ hwver; int adcg; unsigned short adccon; scalar_t__ iobase1; scalar_t__ ai_bipolar; scalar_t__ ai_scan_pos; scalar_t__ ai_scan_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_1 ;
 unsigned char FUNC_3 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 unsigned short VAR_14 ;
 unsigned short VAR_15 ;
 unsigned short VAR_16 ;
 unsigned short VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 TYPE_1__* VAR_29 ;
 int FUNC_4 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_5 (scalar_t__,int ,int,int ) ;
 int FUNC_6 (unsigned char,scalar_t__) ;
 int FUNC_7 (unsigned short,scalar_t__) ;
 scalar_t__* VAR_30 ;
 unsigned int* VAR_31 ;
 int VAR_32 ;
 int FUNC_8 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_9 (struct comedi_device*,int,int ,int,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct comedi_device *VAR_33, struct comedi_subdevice *VAR_34)
{
 unsigned int VAR_35, VAR_36, VAR_37, VAR_38;
 unsigned int VAR_39;
 unsigned short VAR_40, VAR_41;
 unsigned char VAR_42;


 struct comedi_async *VAR_43 = VAR_34->async;
 struct comedi_cmd *VAR_44 = &VAR_43->cmd;




 VAR_39 = 0;


 VAR_39 |= (1U << VAR_22);
 if (VAR_44->scan_begin_src != VAR_24) {

  VAR_39 |= (1U << VAR_20);
  if (VAR_44->scan_begin_src == VAR_28) {

   VAR_39 |= (1U << VAR_21);
  }
 }

 if (!FUNC_4(VAR_33, VAR_39, VAR_6)) {
  return -VAR_1;
 }


 if (VAR_44->stop_src == VAR_23) {
  VAR_29->ai_scan_count = VAR_44->stop_arg;
  VAR_29->ai_continuous = 0;
 } else {

  VAR_29->ai_scan_count = 0;
  VAR_29->ai_continuous = 1;
 }
 VAR_29->ai_scan_pos = 0;
 VAR_40 = VAR_10;
 VAR_41 = 0;

 if (FUNC_0(VAR_44->chanlist[0]) == VAR_0) {

  VAR_38 = 1;
  VAR_40 |= VAR_12;
 } else {

  VAR_38 = 0;
  VAR_40 |= VAR_13;
 }

 VAR_37 = FUNC_2(VAR_44->chanlist[0]);
 VAR_29->ai_bipolar = VAR_30[VAR_37];
 if (VAR_29->ai_bipolar) {
  VAR_40 |= VAR_15;
 } else {
  VAR_40 |= VAR_16;
 }
 for (VAR_35 = 0; VAR_35 < VAR_44->chanlist_len; VAR_35++) {
  unsigned int VAR_45;

  VAR_36 = FUNC_1(VAR_44->chanlist[VAR_35]);
  VAR_37 = FUNC_2(VAR_44->chanlist[VAR_35]);
  if (VAR_38) {
   VAR_45 = 2 * VAR_36;
   if (VAR_29->hwver == 0) {


    VAR_41 |= 3 << VAR_45;
   } else {


    VAR_41 |= 1 << VAR_45;
   }
  } else {
   VAR_45 = (VAR_36 & ~1);
   VAR_41 |= 1 << VAR_36;
  }
  VAR_29->adcg = (VAR_29->adcg & ~(3 << VAR_45))
      | (VAR_31[VAR_37] << VAR_45);
 }


 FUNC_7(VAR_41, VAR_33->iobase + VAR_8);


 FUNC_7(VAR_29->adcg, VAR_33->iobase + VAR_9);



 FUNC_5(VAR_29->iobase1 + VAR_18, 0, 2, VAR_4);



 VAR_40 |= VAR_14 | VAR_17;






 VAR_29->adccon = VAR_40;
 FUNC_7(VAR_40 | VAR_11, VAR_33->iobase + VAR_7);
 FUNC_10(25);


 FUNC_7(VAR_40 | VAR_11, VAR_33->iobase + VAR_7);

 if (VAR_44->convert_src == VAR_28) {



  VAR_42 = FUNC_3(2, VAR_2);
  FUNC_6(VAR_42, VAR_29->iobase1 + VAR_19);

  FUNC_9(VAR_33, 2, VAR_5, VAR_44->convert_arg,
     VAR_44->flags & VAR_26);
  if (VAR_44->scan_begin_src != VAR_24) {
   VAR_42 = FUNC_3(0, VAR_3);
   FUNC_6(VAR_42, VAR_29->iobase1 + VAR_19);
   FUNC_9(VAR_33, 0, VAR_4,
      ((uint64_t) VAR_44->convert_arg
       * VAR_44->scan_end_arg),
      VAR_27);
   if (VAR_44->scan_begin_src == VAR_28) {






    VAR_42 = FUNC_3(1, VAR_2);
    FUNC_6(VAR_42, VAR_29->iobase1 + VAR_19);
    FUNC_9(VAR_33, 1, VAR_5,
       VAR_44->scan_begin_arg,
       VAR_44->
       flags &
       VAR_26);
   }
  }
 }

 if (VAR_44->start_src == VAR_25) {
  VAR_34->async->inttrig = VAR_32;
 } else {

  FUNC_8(VAR_33, VAR_34);
 }

 return 0;
}
