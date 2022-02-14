
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int n_chan; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; scalar_t__ start_arg; int scan_begin_arg; int convert_arg; int scan_end_arg; int chanlist_len; int stop_arg; int flags; int * chanlist; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct comedi_device*,char*) ;
 int FUNC_3 (int*,int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_8,
         struct comedi_subdevice *VAR_9,
         struct comedi_cmd *VAR_10)
{
 int VAR_11 = 0;
 int VAR_12;
 int VAR_13, VAR_14, VAR_15;
 VAR_12 = VAR_10->start_src;
 VAR_10->start_src &= VAR_5;
 if (!VAR_10->start_src || VAR_12 != VAR_10->start_src)
  VAR_11++;

 VAR_12 = VAR_10->scan_begin_src;
 VAR_10->scan_begin_src &= VAR_7 ;
 if (!VAR_10->scan_begin_src || VAR_12 != VAR_10->scan_begin_src)
  VAR_11++;

 VAR_12 = VAR_10->convert_src;
 VAR_10->convert_src &= VAR_7 ;
 if (!VAR_10->convert_src || VAR_12 != VAR_10->convert_src)
  VAR_11++;

 VAR_12 = VAR_10->scan_end_src;
 VAR_10->scan_end_src &= VAR_2;
 if (!VAR_10->scan_end_src || VAR_12 != VAR_10->scan_end_src)
  VAR_11++;

 VAR_12 = VAR_10->stop_src;
 VAR_10->stop_src &= VAR_2 | VAR_4;
 if (!VAR_10->stop_src || VAR_12 != VAR_10->stop_src)
  VAR_11++;

 if (VAR_11)
  return 1;




 if (VAR_10->scan_begin_src != VAR_7 &&
     VAR_10->scan_begin_src != VAR_3)
  VAR_11++;
 if (VAR_10->convert_src != VAR_7 && VAR_10->convert_src != VAR_3)
  VAR_11++;
 if (VAR_10->stop_src != VAR_2 && VAR_10->stop_src != VAR_4)
  VAR_11++;

 if (VAR_11)
  return 2;



 if (VAR_10->start_arg != 0) {
  VAR_10->start_arg = 0;
  VAR_11++;
 }



 if (VAR_10->scan_begin_src == VAR_7) {
  if (VAR_10->scan_begin_arg < 1000000) {
   VAR_10->scan_begin_arg = 1000000;
   VAR_11++;
  }
  if (VAR_10->scan_begin_arg > 1000000000) {
   VAR_10->scan_begin_arg = 1000000000;
   VAR_11++;
  }
 } else {



  if (VAR_10->scan_begin_arg > 9) {
   VAR_10->scan_begin_arg = 9;
   VAR_11++;
  }
 }
 if (VAR_10->convert_src == VAR_7) {
  if (VAR_10->convert_arg >= 17500)
   VAR_10->convert_arg = 20000;
  else if (VAR_10->convert_arg >= 12500)
   VAR_10->convert_arg = 15000;
  else if (VAR_10->convert_arg >= 7500)
   VAR_10->convert_arg = 10000;
  else
   VAR_10->convert_arg = 5000;

 } else {


  if (VAR_10->convert_arg > 9) {
   VAR_10->convert_arg = 9;
   VAR_11++;
  }
 }

 if (VAR_10->scan_end_arg != VAR_10->chanlist_len) {
  VAR_10->scan_end_arg = VAR_10->chanlist_len;
  VAR_11++;
 }
 if (VAR_10->stop_src == VAR_2) {
  if (VAR_10->stop_arg > 0xfffffff0) {
   VAR_10->stop_arg = 0xfffffff0;
   VAR_11++;
  }
  if (VAR_10->stop_arg == 0) {
   VAR_10->stop_arg = 1;
   VAR_11++;
  }
 } else {

  if (VAR_10->stop_arg != 0) {
   VAR_10->stop_arg = 0;
   VAR_11++;
  }
 }

 if (VAR_11)
  return 3;



 if (VAR_10->scan_begin_src == VAR_7) {
  VAR_12 = VAR_10->scan_begin_arg;
  FUNC_3(&VAR_10->scan_begin_arg,
        VAR_10->flags & VAR_6);
  if (VAR_12 != VAR_10->scan_begin_arg)
   VAR_11++;
 }
 if (VAR_10->convert_src == VAR_7) {
  VAR_12 = VAR_10->convert_arg;
  FUNC_3(&VAR_10->convert_arg,
        VAR_10->flags & VAR_6);
  if (VAR_12 != VAR_10->convert_arg)
   VAR_11++;
  if (VAR_10->scan_begin_src == VAR_7 &&
      VAR_10->scan_begin_arg <
      VAR_10->convert_arg * VAR_10->scan_end_arg) {
   VAR_10->scan_begin_arg =
       VAR_10->convert_arg * VAR_10->scan_end_arg;
   VAR_11++;
  }
 }

 if (VAR_11)
  return 4;




 if (VAR_10->chanlist) {
  VAR_14 = FUNC_1(VAR_10->chanlist[0]);
  VAR_13 = FUNC_0(VAR_10->chanlist[0]);
  for (VAR_15 = 1; VAR_15 < VAR_10->chanlist_len; VAR_15++) {
   if (FUNC_0(VAR_10->chanlist[VAR_15]) !=
       (VAR_13 + VAR_15) % VAR_9->n_chan) {
    FUNC_2(VAR_8,
          "entries in chanlist must be consecutive channels, counting upwards\n");
    VAR_11++;
   }
   if (FUNC_1(VAR_10->chanlist[VAR_15]) != VAR_14) {
    FUNC_2(VAR_8,
          "entries in chanlist must all have the same gain\n");
    VAR_11++;
   }
  }
 }

 if (VAR_11)
  return 5;

 return 0;
}
