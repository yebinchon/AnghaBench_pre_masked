
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {unsigned int start_src; unsigned int scan_begin_src; unsigned int convert_src; unsigned int scan_end_src; unsigned int stop_src; scalar_t__ start_arg; scalar_t__ scan_begin_arg; scalar_t__ convert_arg; scalar_t__ scan_end_arg; scalar_t__ chanlist_len; int stop_arg; } ;



 unsigned int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct comedi_device *VAR_3,
      struct comedi_subdevice *VAR_4, struct comedi_cmd *VAR_5)
{
 int VAR_6 = 0;
 unsigned int VAR_7;



 VAR_7 = VAR_5->start_src;
 VAR_5->start_src &= (VAR_2 | VAR_1);
 if (!VAR_5->start_src || VAR_7 != VAR_5->start_src)
  VAR_6++;

 VAR_7 = VAR_5->scan_begin_src;
 VAR_5->scan_begin_src &= VAR_0;
 if (!VAR_5->scan_begin_src || VAR_7 != VAR_5->scan_begin_src)
  VAR_6++;

 VAR_7 = VAR_5->convert_src;
 VAR_5->convert_src &= VAR_2;
 if (!VAR_5->convert_src || VAR_7 != VAR_5->convert_src)
  VAR_6++;

 VAR_7 = VAR_5->scan_end_src;
 VAR_5->scan_end_src &= 129;
 if (!VAR_5->scan_end_src || VAR_7 != VAR_5->scan_end_src)
  VAR_6++;

 VAR_7 = VAR_5->stop_src;
 VAR_5->stop_src &= (129 | 128);
 if (!VAR_5->stop_src || VAR_7 != VAR_5->stop_src)
  VAR_6++;

 if (VAR_6)
  return 1;




 if ((VAR_5->start_src & (VAR_5->start_src - 1)) != 0)
  VAR_6++;
 if ((VAR_5->scan_begin_src & (VAR_5->scan_begin_src - 1)) != 0)
  VAR_6++;
 if ((VAR_5->convert_src & (VAR_5->convert_src - 1)) != 0)
  VAR_6++;
 if ((VAR_5->scan_end_src & (VAR_5->scan_end_src - 1)) != 0)
  VAR_6++;
 if ((VAR_5->stop_src & (VAR_5->stop_src - 1)) != 0)
  VAR_6++;

 if (VAR_6)
  return 2;




 if (VAR_5->start_arg != 0) {
  VAR_5->start_arg = 0;
  VAR_6++;
 }


 if (VAR_5->scan_begin_arg != 0) {
  VAR_5->scan_begin_arg = 0;
  VAR_6++;
 }


 if (VAR_5->convert_arg != 0) {
  VAR_5->convert_arg = 0;
  VAR_6++;
 }


 if (VAR_5->scan_end_arg != VAR_5->chanlist_len) {
  VAR_5->scan_end_arg = VAR_5->chanlist_len;
  VAR_6++;
 }

 switch (VAR_5->stop_src) {
 case 129:

  break;
 case 128:
  if (VAR_5->stop_arg != 0) {
   VAR_5->stop_arg = 0;
   VAR_6++;
  }
  break;
 default:
  break;
 }

 if (VAR_6)
  return 3;





 return 0;
}
