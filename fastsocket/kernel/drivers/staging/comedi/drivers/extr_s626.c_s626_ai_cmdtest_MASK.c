
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; int start_arg; int scan_begin_arg; int convert_arg; int scan_end_arg; int chanlist_len; int stop_arg; int flags; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int*,int) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_10,
      struct comedi_subdevice *VAR_11, struct comedi_cmd *VAR_12)
{
 int VAR_13 = 0;
 int VAR_14;
 VAR_14 = VAR_12->start_src;
 VAR_12->start_src &= VAR_7 | VAR_5 | VAR_3;
 if (!VAR_12->start_src || VAR_14 != VAR_12->start_src)
  VAR_13++;

 VAR_14 = VAR_12->scan_begin_src;
 VAR_12->scan_begin_src &= VAR_9 | VAR_3 | VAR_4;
 if (!VAR_12->scan_begin_src || VAR_14 != VAR_12->scan_begin_src)
  VAR_13++;

 VAR_14 = VAR_12->convert_src;
 VAR_12->convert_src &= VAR_9 | VAR_3 | VAR_7;
 if (!VAR_12->convert_src || VAR_14 != VAR_12->convert_src)
  VAR_13++;

 VAR_14 = VAR_12->scan_end_src;
 VAR_12->scan_end_src &= VAR_2;
 if (!VAR_12->scan_end_src || VAR_14 != VAR_12->scan_end_src)
  VAR_13++;

 VAR_14 = VAR_12->stop_src;
 VAR_12->stop_src &= VAR_2 | VAR_6;
 if (!VAR_12->stop_src || VAR_14 != VAR_12->stop_src)
  VAR_13++;

 if (VAR_13)
  return 1;





 if (VAR_12->scan_begin_src != VAR_9 &&
     VAR_12->scan_begin_src != VAR_3
     && VAR_12->scan_begin_src != VAR_4)
  VAR_13++;
 if (VAR_12->convert_src != VAR_9 &&
     VAR_12->convert_src != VAR_3 && VAR_12->convert_src != VAR_7)
  VAR_13++;
 if (VAR_12->stop_src != VAR_2 && VAR_12->stop_src != VAR_6)
  VAR_13++;

 if (VAR_13)
  return 2;



 if (VAR_12->start_src != VAR_3 && VAR_12->start_arg != 0) {
  VAR_12->start_arg = 0;
  VAR_13++;
 }

 if (VAR_12->start_src == VAR_3 && VAR_12->start_arg > 39) {
  VAR_12->start_arg = 39;
  VAR_13++;
 }

 if (VAR_12->scan_begin_src == VAR_3 && VAR_12->scan_begin_arg > 39) {
  VAR_12->scan_begin_arg = 39;
  VAR_13++;
 }

 if (VAR_12->convert_src == VAR_3 && VAR_12->convert_arg > 39) {
  VAR_12->convert_arg = 39;
  VAR_13++;
 }



 if (VAR_12->scan_begin_src == VAR_9) {
  if (VAR_12->scan_begin_arg < 200000) {
   VAR_12->scan_begin_arg = 200000;
   VAR_13++;
  }
  if (VAR_12->scan_begin_arg > 2000000000) {
   VAR_12->scan_begin_arg = 2000000000;
   VAR_13++;
  }
 } else {







 }
 if (VAR_12->convert_src == VAR_9) {
  if (VAR_12->convert_arg < 200000) {
   VAR_12->convert_arg = 200000;
   VAR_13++;
  }
  if (VAR_12->convert_arg > 2000000000) {
   VAR_12->convert_arg = 2000000000;
   VAR_13++;
  }
 } else {






 }

 if (VAR_12->scan_end_arg != VAR_12->chanlist_len) {
  VAR_12->scan_end_arg = VAR_12->chanlist_len;
  VAR_13++;
 }
 if (VAR_12->stop_src == VAR_2) {
  if (VAR_12->stop_arg > 0x00ffffff) {
   VAR_12->stop_arg = 0x00ffffff;
   VAR_13++;
  }
 } else {

  if (VAR_12->stop_arg != 0) {
   VAR_12->stop_arg = 0;
   VAR_13++;
  }
 }

 if (VAR_13)
  return 3;



 if (VAR_12->scan_begin_src == VAR_9) {
  VAR_14 = VAR_12->scan_begin_arg;
  FUNC_0((int *)&VAR_12->scan_begin_arg,
     VAR_12->flags & VAR_8);
  if (VAR_14 != VAR_12->scan_begin_arg)
   VAR_13++;
 }
 if (VAR_12->convert_src == VAR_9) {
  VAR_14 = VAR_12->convert_arg;
  FUNC_0((int *)&VAR_12->convert_arg,
     VAR_12->flags & VAR_8);
  if (VAR_14 != VAR_12->convert_arg)
   VAR_13++;
  if (VAR_12->scan_begin_src == VAR_9 &&
      VAR_12->scan_begin_arg <
      VAR_12->convert_arg * VAR_12->scan_end_arg) {
   VAR_12->scan_begin_arg =
       VAR_12->convert_arg * VAR_12->scan_end_arg;
   VAR_13++;
  }
 }

 if (VAR_13)
  return 4;

 return 0;
}
