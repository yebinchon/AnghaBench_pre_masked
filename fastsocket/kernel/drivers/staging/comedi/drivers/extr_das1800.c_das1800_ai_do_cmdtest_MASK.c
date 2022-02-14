
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; scalar_t__ start_arg; unsigned int convert_arg; int chanlist_len; int scan_end_arg; int stop_arg; int flags; int scan_begin_arg; int * chanlist; } ;
struct TYPE_4__ {int divisor2; int divisor1; } ;
struct TYPE_3__ {unsigned int ai_speed; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_7 ;
 int FUNC_3 (int ,int *,int *,unsigned int*,int) ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_9,
     struct comedi_subdevice *VAR_10,
     struct comedi_cmd *VAR_11)
{
 int VAR_12 = 0;
 int VAR_13;
 unsigned int VAR_14;
 int VAR_15;
 int VAR_16;



 VAR_13 = VAR_11->start_src;
 VAR_11->start_src &= VAR_3 | VAR_1;
 if (!VAR_11->start_src || VAR_13 != VAR_11->start_src)
  VAR_12++;

 VAR_13 = VAR_11->scan_begin_src;
 VAR_11->scan_begin_src &= VAR_2 | VAR_5 | VAR_1;
 if (!VAR_11->scan_begin_src || VAR_13 != VAR_11->scan_begin_src)
  VAR_12++;

 VAR_13 = VAR_11->convert_src;
 VAR_11->convert_src &= VAR_5 | VAR_1;
 if (!VAR_11->convert_src || VAR_13 != VAR_11->convert_src)
  VAR_12++;

 VAR_13 = VAR_11->scan_end_src;
 VAR_11->scan_end_src &= 129;
 if (!VAR_11->scan_end_src || VAR_13 != VAR_11->scan_end_src)
  VAR_12++;

 VAR_13 = VAR_11->stop_src;
 VAR_11->stop_src &= 129 | VAR_1 | 128;
 if (!VAR_11->stop_src || VAR_13 != VAR_11->stop_src)
  VAR_12++;

 if (VAR_12)
  return 1;




 if (VAR_11->start_src != VAR_3 && VAR_11->start_src != VAR_1)
  VAR_12++;
 if (VAR_11->scan_begin_src != VAR_2 &&
     VAR_11->scan_begin_src != VAR_5 &&
     VAR_11->scan_begin_src != VAR_1)
  VAR_12++;
 if (VAR_11->convert_src != VAR_5 && VAR_11->convert_src != VAR_1)
  VAR_12++;
 if (VAR_11->stop_src != 129 &&
     VAR_11->stop_src != 128 && VAR_11->stop_src != VAR_1)
  VAR_12++;

 if (VAR_11->scan_begin_src != VAR_2 &&
     VAR_11->convert_src != VAR_5)
  VAR_12++;

 if (VAR_12)
  return 2;



 if (VAR_11->start_arg != 0) {
  VAR_11->start_arg = 0;
  VAR_12++;
 }
 if (VAR_11->convert_src == VAR_5) {
  if (VAR_11->convert_arg < VAR_8->ai_speed) {
   VAR_11->convert_arg = VAR_8->ai_speed;
   VAR_12++;
  }
 }
 if (!VAR_11->chanlist_len) {
  VAR_11->chanlist_len = 1;
  VAR_12++;
 }
 if (VAR_11->scan_end_arg != VAR_11->chanlist_len) {
  VAR_11->scan_end_arg = VAR_11->chanlist_len;
  VAR_12++;
 }

 switch (VAR_11->stop_src) {
 case 129:
  if (!VAR_11->stop_arg) {
   VAR_11->stop_arg = 1;
   VAR_12++;
  }
  break;
 case 128:
  if (VAR_11->stop_arg != 0) {
   VAR_11->stop_arg = 0;
   VAR_12++;
  }
  break;
 default:
  break;
 }

 if (VAR_12)
  return 3;



 if (VAR_11->convert_src == VAR_5) {

  if (VAR_11->scan_begin_src == VAR_2) {
   VAR_14 = VAR_11->convert_arg;

   FUNC_3(VAR_0,
             &(VAR_7->divisor1),
             &(VAR_7->divisor2),
             &(VAR_11->convert_arg),
             VAR_11->
             flags & VAR_4);
   if (VAR_14 != VAR_11->convert_arg)
    VAR_12++;
  }

  else {

   VAR_14 = VAR_11->convert_arg;
   VAR_11->convert_arg =
       FUNC_1(VAR_11->convert_arg,
           VAR_11->flags & VAR_4);
   if (VAR_14 != VAR_11->convert_arg)
    VAR_12++;

   if (VAR_11->scan_begin_src == VAR_5) {

    if (VAR_11->convert_arg * VAR_11->chanlist_len >
        VAR_11->scan_begin_arg) {
     VAR_11->scan_begin_arg =
         VAR_11->convert_arg *
         VAR_11->chanlist_len;
     VAR_12++;
    }
    VAR_14 = VAR_11->scan_begin_arg;

    FUNC_3(VAR_0,
              &(VAR_7->
         divisor1),
              &(VAR_7->
         divisor2),
              &(VAR_11->
         scan_begin_arg),
              VAR_11->
              flags &
              VAR_4);
    if (VAR_14 != VAR_11->scan_begin_arg)
     VAR_12++;
   }
  }
 }

 if (VAR_12)
  return 4;


 if (VAR_11->chanlist) {
  VAR_16 = FUNC_0(VAR_11->chanlist[0]) & VAR_6;
  for (VAR_15 = 1; VAR_15 < VAR_11->chanlist_len; VAR_15++) {
   if (VAR_16 != (FUNC_0(VAR_11->chanlist[VAR_15]) & VAR_6)) {
    FUNC_2(VAR_9,
          "unipolar and bipolar ranges cannot be mixed in the chanlist");
    VAR_12++;
    break;
   }
  }
 }

 if (VAR_12)
  return 5;

 return 0;
}
