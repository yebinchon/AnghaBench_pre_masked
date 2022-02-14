
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; scalar_t__ start_arg; int scan_begin_arg; unsigned int scan_end_arg; unsigned int chanlist_len; scalar_t__ stop_arg; unsigned int* chanlist; scalar_t__ convert_arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_7,
      struct comedi_subdevice *VAR_8, struct comedi_cmd *VAR_9)
{
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12;
 unsigned VAR_13;



 VAR_11 = VAR_9->start_src;
 VAR_12 = VAR_4;
 VAR_9->start_src &= VAR_12;
 if (!VAR_9->start_src || VAR_11 != VAR_9->start_src)
  VAR_10++;

 VAR_11 = VAR_9->scan_begin_src;
 VAR_9->scan_begin_src &= VAR_3;
 if (!VAR_9->scan_begin_src || VAR_11 != VAR_9->scan_begin_src)
  VAR_10++;

 VAR_11 = VAR_9->convert_src;
 VAR_9->convert_src &= VAR_6;
 if (!VAR_9->convert_src || VAR_11 != VAR_9->convert_src)
  VAR_10++;

 VAR_11 = VAR_9->scan_end_src;
 VAR_9->scan_end_src &= VAR_2;
 if (!VAR_9->scan_end_src || VAR_11 != VAR_9->scan_end_src)
  VAR_10++;

 VAR_11 = VAR_9->stop_src;
 VAR_9->stop_src &= VAR_5;
 if (!VAR_9->stop_src || VAR_11 != VAR_9->stop_src)
  VAR_10++;

 if (VAR_10)
  return 1;



 if (VAR_9->start_src != VAR_4)
  VAR_10++;
 if (VAR_9->scan_begin_src != VAR_3)
  VAR_10++;
 if (VAR_9->convert_src != VAR_6)
  VAR_10++;
 if (VAR_9->stop_src != VAR_5)
  VAR_10++;


 if (VAR_10)
  return 2;


 if (VAR_9->start_src == VAR_4) {
  if (VAR_9->start_arg != 0) {
   VAR_9->start_arg = 0;
   VAR_10++;
  }
 }
 if (VAR_9->scan_begin_src == VAR_3) {
  VAR_11 = VAR_9->scan_begin_arg;
  VAR_11 &= FUNC_0(VAR_0, 0, 0,
         VAR_1);
  if (VAR_11 != VAR_9->scan_begin_arg) {
   VAR_10++;
  }
 }
 if (VAR_9->convert_src == VAR_6) {
  if (VAR_9->convert_arg) {
   VAR_9->convert_arg = 0;
   VAR_10++;
  }
 }

 if (VAR_9->scan_end_arg != VAR_9->chanlist_len) {
  VAR_9->scan_end_arg = VAR_9->chanlist_len;
  VAR_10++;
 }

 if (VAR_9->stop_src == VAR_5) {
  if (VAR_9->stop_arg != 0) {
   VAR_9->stop_arg = 0;
   VAR_10++;
  }
 }

 if (VAR_10)
  return 3;



 if (VAR_10)
  return 4;



 for (VAR_13 = 0; VAR_13 < VAR_9->chanlist_len; ++VAR_13) {
  if (VAR_9->chanlist[VAR_13] != VAR_13)
   VAR_10 = 1;
 }

 if (VAR_10)
  return 5;

 return 0;
}
