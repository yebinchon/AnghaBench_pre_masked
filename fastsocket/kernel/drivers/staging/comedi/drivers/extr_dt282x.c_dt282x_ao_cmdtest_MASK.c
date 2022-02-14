
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; scalar_t__ start_arg; int scan_begin_arg; scalar_t__ convert_arg; int scan_end_arg; scalar_t__ stop_arg; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,int) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_6,
        struct comedi_subdevice *VAR_7, struct comedi_cmd *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10;



 VAR_10 = VAR_8->start_src;
 VAR_8->start_src &= VAR_1;
 if (!VAR_8->start_src || VAR_10 != VAR_8->start_src)
  VAR_9++;

 VAR_10 = VAR_8->scan_begin_src;
 VAR_8->scan_begin_src &= VAR_5;
 if (!VAR_8->scan_begin_src || VAR_10 != VAR_8->scan_begin_src)
  VAR_9++;

 VAR_10 = VAR_8->convert_src;
 VAR_8->convert_src &= VAR_3;
 if (!VAR_8->convert_src || VAR_10 != VAR_8->convert_src)
  VAR_9++;

 VAR_10 = VAR_8->scan_end_src;
 VAR_8->scan_end_src &= VAR_0;
 if (!VAR_8->scan_end_src || VAR_10 != VAR_8->scan_end_src)
  VAR_9++;

 VAR_10 = VAR_8->stop_src;
 VAR_8->stop_src &= VAR_2;
 if (!VAR_8->stop_src || VAR_10 != VAR_8->stop_src)
  VAR_9++;

 if (VAR_9)
  return 1;




 if (VAR_8->stop_src != VAR_0 && VAR_8->stop_src != VAR_2)
  VAR_9++;

 if (VAR_9)
  return 2;



 if (VAR_8->start_arg != 0) {
  VAR_8->start_arg = 0;
  VAR_9++;
 }
 if (VAR_8->scan_begin_arg < 5000 ) {
  VAR_8->scan_begin_arg = 5000;
  VAR_9++;
 }
 if (VAR_8->convert_arg != 0) {
  VAR_8->convert_arg = 0;
  VAR_9++;
 }
 if (VAR_8->scan_end_arg > 2) {

  VAR_8->scan_end_arg = 2;
  VAR_9++;
 }
 if (VAR_8->stop_src == VAR_0) {

 } else {

  if (VAR_8->stop_arg != 0) {
   VAR_8->stop_arg = 0;
   VAR_9++;
  }
 }

 if (VAR_9)
  return 3;



 VAR_10 = VAR_8->scan_begin_arg;
 FUNC_0(&VAR_8->scan_begin_arg, VAR_8->flags & VAR_4);
 if (VAR_10 != VAR_8->scan_begin_arg)
  VAR_9++;

 if (VAR_9)
  return 4;

 return 0;

}
