
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; scalar_t__ start_arg; int scan_begin_arg; scalar_t__ convert_arg; scalar_t__ scan_end_arg; scalar_t__ chanlist_len; scalar_t__ stop_arg; int flags; } ;
struct TYPE_2__ {int divisor2; int divisor1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_0 (int ,int *,int *,int*,int) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_9,
        struct comedi_subdevice *VAR_10, struct comedi_cmd *VAR_11)
{
 int VAR_12;
 int VAR_13 = 0;


 VAR_12 = VAR_11->start_src;
 VAR_11->start_src &= VAR_5;
 if (!VAR_11->start_src || VAR_12 != VAR_11->start_src)
  VAR_13++;

 VAR_12 = VAR_11->scan_begin_src;
 VAR_11->scan_begin_src &= VAR_7 | VAR_3;
 if (!VAR_11->scan_begin_src || VAR_12 != VAR_11->scan_begin_src)
  VAR_13++;

 VAR_12 = VAR_11->convert_src;
 VAR_11->convert_src &= VAR_5;
 if (!VAR_11->convert_src || VAR_12 != VAR_11->convert_src)
  VAR_13++;

 VAR_12 = VAR_11->scan_end_src;
 VAR_11->scan_end_src &= VAR_2;
 if (!VAR_11->scan_end_src || VAR_12 != VAR_11->scan_end_src)
  VAR_13++;

 VAR_12 = VAR_11->stop_src;
 VAR_11->stop_src &= VAR_2 | VAR_4;
 if (!VAR_11->stop_src || VAR_12 != VAR_11->stop_src)
  VAR_13++;

 if (VAR_13)
  return 1;



 if (VAR_11->scan_begin_src != VAR_7 &&
     VAR_11->scan_begin_src != VAR_3)
  VAR_13++;
 if (VAR_11->stop_src != VAR_2 && VAR_11->stop_src != VAR_4)
  VAR_13++;

 if (VAR_13)
  return 2;



 if (VAR_11->start_arg != 0) {
  VAR_11->start_arg = 0;
  VAR_13++;
 }
 if (VAR_11->scan_begin_src == VAR_3) {
  if (VAR_11->scan_begin_arg != 0) {
   VAR_11->scan_begin_arg = 0;
   VAR_13++;
  }
 } else {


  if (VAR_11->scan_begin_arg < 1000) {
   VAR_11->scan_begin_arg = 1000;
   VAR_13++;
  }
 }
 if (VAR_11->convert_arg != 0) {
  VAR_11->convert_arg = 0;
  VAR_13++;
 }
 if (VAR_11->scan_end_arg != VAR_11->chanlist_len) {
  VAR_11->scan_end_arg = VAR_11->chanlist_len;
  VAR_13++;
 }
 if (VAR_11->stop_src == VAR_4) {
  if (VAR_11->stop_arg != 0) {
   VAR_11->stop_arg = 0;
   VAR_13++;
  }
 } else {

 }

 if (VAR_13)
  return 3;



 if (VAR_11->scan_begin_src == VAR_7) {
  VAR_12 = VAR_11->scan_begin_arg;
  FUNC_0(100,
            &VAR_8->divisor1,
            &VAR_8->divisor2,
            &VAR_11->scan_begin_arg,
            VAR_11->flags & VAR_6);
  if (VAR_12 != VAR_11->scan_begin_arg)
   VAR_13++;
 }

 if (VAR_13)
  return 4;

 return 0;
}
