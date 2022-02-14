
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; scalar_t__ start_arg; int convert_arg; int scan_begin_arg; int chanlist_len; int scan_end_arg; int stop_arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct comedi_device *VAR_5,
          struct comedi_subdevice *VAR_6,
          struct comedi_cmd *VAR_7)
{
 int VAR_8 = 0;
 int VAR_9;



 VAR_9 = VAR_7->start_src;
 VAR_7->start_src &= VAR_2;
 if (!VAR_7->start_src || VAR_9 != VAR_7->start_src)
  VAR_8++;

 VAR_9 = VAR_7->scan_begin_src;
 VAR_7->scan_begin_src &= VAR_3;
 if (!VAR_7->scan_begin_src || VAR_9 != VAR_7->scan_begin_src)
  VAR_8++;

 VAR_9 = VAR_7->convert_src;
 VAR_7->convert_src &= VAR_2 | VAR_3;
 if (!VAR_7->convert_src || VAR_9 != VAR_7->convert_src)
  VAR_8++;

 VAR_9 = VAR_7->scan_end_src;
 VAR_7->scan_end_src &= VAR_0;
 if (!VAR_7->scan_end_src || VAR_9 != VAR_7->scan_end_src)
  VAR_8++;

 VAR_9 = VAR_7->stop_src;
 VAR_7->stop_src &= VAR_0 | VAR_1;
 if (!VAR_7->stop_src || VAR_9 != VAR_7->stop_src)
  VAR_8++;

 if (VAR_8)
  return 1;





 if (VAR_7->convert_src != VAR_2 && VAR_7->convert_src != VAR_3)
  VAR_8++;
 if (VAR_7->stop_src != VAR_0 && VAR_7->stop_src != VAR_1)
  VAR_8++;

 if (VAR_8)
  return 2;



 if (VAR_7->start_arg != 0) {
  VAR_7->start_arg = 0;
  VAR_8++;
 }
 if (VAR_7->convert_src == VAR_2) {
  if (VAR_7->convert_arg != 0) {
   VAR_7->convert_arg = 0;
   VAR_8++;
  }
 }
 if (VAR_7->scan_begin_src == VAR_3) {
  if (VAR_7->scan_begin_arg < VAR_4) {
   VAR_7->scan_begin_arg = VAR_4;
   VAR_8++;
  }
  if (VAR_7->convert_src == VAR_3 &&
      VAR_7->scan_begin_arg <
      VAR_7->convert_arg * VAR_7->chanlist_len) {
   VAR_7->scan_begin_arg =
       VAR_7->convert_arg * VAR_7->chanlist_len;
   VAR_8++;
  }
 }




 if (!VAR_7->chanlist_len) {
  VAR_7->chanlist_len = 1;
  VAR_8++;
 }
 if (VAR_7->scan_end_arg != VAR_7->chanlist_len) {
  VAR_7->scan_end_arg = VAR_7->chanlist_len;
  VAR_8++;
 }

 if (VAR_7->stop_src == VAR_0) {
  if (!VAR_7->stop_arg) {
   VAR_7->stop_arg = 1;
   VAR_8++;
  }
 } else {
  if (VAR_7->stop_arg != 0) {
   VAR_7->stop_arg = 0;
   VAR_8++;
  }
 }

 if (VAR_8)
  return 3;



 if (VAR_7->scan_begin_src == VAR_3) {
  VAR_9 = VAR_7->scan_begin_arg;

  VAR_7->scan_begin_arg =
      VAR_4 * ((VAR_9 +
           (VAR_4 / 2)) / VAR_4);
  if (VAR_9 != VAR_7->scan_begin_arg)
   VAR_8++;
 }
 if (VAR_7->convert_src == VAR_3) {
  VAR_9 = VAR_7->convert_arg;

  VAR_7->convert_arg =
      VAR_4 * ((VAR_9 +
           (VAR_4 / 2)) / VAR_4);
  if (VAR_9 != VAR_7->convert_arg)
   VAR_8++;
 }

 if (VAR_8)
  return 4;

 return 0;
}
