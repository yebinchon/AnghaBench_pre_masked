
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int counter_dev; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; scalar_t__ start_arg; scalar_t__ scan_end_arg; scalar_t__ chanlist_len; scalar_t__ stop_arg; scalar_t__ convert_arg; scalar_t__ scan_begin_arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(struct ni_gpct *VAR_7, struct comedi_cmd *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10;
 int VAR_11;



 VAR_10 = VAR_8->start_src;
 VAR_11 = VAR_5 | VAR_3 | VAR_6;
 if (FUNC_0(VAR_7->counter_dev))
  VAR_11 |= VAR_1;
 VAR_8->start_src &= VAR_11;
 if (!VAR_8->start_src || VAR_10 != VAR_8->start_src)
  VAR_9++;

 VAR_10 = VAR_8->scan_begin_src;
 VAR_8->scan_begin_src &= VAR_2 | VAR_1 | VAR_6;
 if (!VAR_8->scan_begin_src || VAR_10 != VAR_8->scan_begin_src)
  VAR_9++;

 VAR_10 = VAR_8->convert_src;
 VAR_11 = VAR_5 | VAR_1 | VAR_6;
 VAR_8->convert_src &= VAR_11;
 if (!VAR_8->convert_src || VAR_10 != VAR_8->convert_src)
  VAR_9++;

 VAR_10 = VAR_8->scan_end_src;
 VAR_8->scan_end_src &= VAR_0;
 if (!VAR_8->scan_end_src || VAR_10 != VAR_8->scan_end_src)
  VAR_9++;

 VAR_10 = VAR_8->stop_src;
 VAR_8->stop_src &= VAR_4;
 if (!VAR_8->stop_src || VAR_10 != VAR_8->stop_src)
  VAR_9++;

 if (VAR_9)
  return 1;



 if (VAR_8->start_src != VAR_5 &&
     VAR_8->start_src != VAR_3 &&
     VAR_8->start_src != VAR_1 && VAR_8->start_src != VAR_6)
  VAR_9++;
 if (VAR_8->scan_begin_src != VAR_2 &&
     VAR_8->scan_begin_src != VAR_1 &&
     VAR_8->scan_begin_src != VAR_6)
  VAR_9++;
 if (VAR_8->convert_src != VAR_6 &&
     VAR_8->convert_src != VAR_1 && VAR_8->convert_src != VAR_5)
  VAR_9++;
 if (VAR_8->stop_src != VAR_4)
  VAR_9++;

 if (VAR_8->convert_src != VAR_5 && VAR_8->scan_begin_src != VAR_2)
  VAR_9++;

 if (VAR_9)
  return 2;


 if (VAR_8->start_src != VAR_1) {
  if (VAR_8->start_arg != 0) {
   VAR_8->start_arg = 0;
   VAR_9++;
  }
 }
 if (VAR_8->scan_begin_src != VAR_1) {
  if (VAR_8->scan_begin_arg) {
   VAR_8->scan_begin_arg = 0;
   VAR_9++;
  }
 }
 if (VAR_8->convert_src != VAR_1) {
  if (VAR_8->convert_arg) {
   VAR_8->convert_arg = 0;
   VAR_9++;
  }
 }

 if (VAR_8->scan_end_arg != VAR_8->chanlist_len) {
  VAR_8->scan_end_arg = VAR_8->chanlist_len;
  VAR_9++;
 }

 if (VAR_8->stop_src == VAR_4) {
  if (VAR_8->stop_arg != 0) {
   VAR_8->stop_arg = 0;
   VAR_9++;
  }
 }

 if (VAR_9)
  return 3;



 if (VAR_9)
  return 4;

 return 0;
}
