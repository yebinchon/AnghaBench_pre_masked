
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbduxsub {TYPE_1__* interface; int probed; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int minor; struct usbduxsub* private; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; scalar_t__ start_arg; int scan_begin_arg; int convert_arg; scalar_t__ scan_end_arg; scalar_t__ chanlist_len; scalar_t__ stop_arg; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,int ,...) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_9,
        struct comedi_subdevice *VAR_10, struct comedi_cmd *VAR_11)
{
 int VAR_12 = 0, VAR_13;
 struct usbduxsub *VAR_14 = VAR_9->private;

 if (!VAR_14)
  return -VAR_0;

 if (!(VAR_14->probed))
  return -VAR_1;

 FUNC_0(&VAR_14->interface->dev,
  "comedi%d: usbdux_ao_cmdtest\n", VAR_9->minor);



 VAR_13 = VAR_11->start_src;
 VAR_11->start_src &= VAR_7 | VAR_5;
 if (!VAR_11->start_src || VAR_13 != VAR_11->start_src)
  VAR_12++;


 VAR_13 = VAR_11->scan_begin_src;


 if (0) {


  VAR_11->scan_begin_src &= VAR_4;
 } else {

  VAR_11->scan_begin_src &= VAR_8;
 }
 if (!VAR_11->scan_begin_src || VAR_13 != VAR_11->scan_begin_src)
  VAR_12++;


 VAR_13 = VAR_11->convert_src;

 if (0) {



  VAR_11->convert_src &= VAR_8;
 } else {


  VAR_11->convert_src &= VAR_7;
 }
 if (!VAR_11->convert_src || VAR_13 != VAR_11->convert_src)
  VAR_12++;


 VAR_13 = VAR_11->scan_end_src;
 VAR_11->scan_end_src &= VAR_2;
 if (!VAR_11->scan_end_src || VAR_13 != VAR_11->scan_end_src)
  VAR_12++;


 VAR_13 = VAR_11->stop_src;
 VAR_11->stop_src &= VAR_2 | VAR_6;
 if (!VAR_11->stop_src || VAR_13 != VAR_11->stop_src)
  VAR_12++;

 if (VAR_12)
  return 1;





 if (VAR_11->scan_begin_src != VAR_4 &&
     VAR_11->scan_begin_src != VAR_3 &&
     VAR_11->scan_begin_src != VAR_8)
  VAR_12++;
 if (VAR_11->stop_src != VAR_2 && VAR_11->stop_src != VAR_6)
  VAR_12++;

 if (VAR_12)
  return 2;



 if (VAR_11->start_arg != 0) {
  VAR_11->start_arg = 0;
  VAR_12++;
 }

 if (VAR_11->scan_begin_src == VAR_4) {

  if (VAR_11->scan_begin_arg != 0) {
   VAR_11->scan_begin_arg = 0;
   VAR_12++;
  }
 }

 if (VAR_11->scan_begin_src == VAR_8) {

  if (VAR_11->scan_begin_arg < 1000000) {
   VAR_11->scan_begin_arg = 1000000;
   VAR_12++;
  }
 }

 if (VAR_11->convert_src == VAR_8) {
  if (VAR_11->convert_arg < 125000) {
   VAR_11->convert_arg = 125000;
   VAR_12++;
  }
 }


 if (VAR_11->scan_end_arg != VAR_11->chanlist_len) {
  VAR_11->scan_end_arg = VAR_11->chanlist_len;
  VAR_12++;
 }

 if (VAR_11->stop_src == VAR_2) {

 } else {

  if (VAR_11->stop_arg != 0) {
   VAR_11->stop_arg = 0;
   VAR_12++;
  }
 }

 FUNC_0(&VAR_14->interface->dev, "comedi%d: err=%d, "
  "scan_begin_src=%d, scan_begin_arg=%d, convert_src=%d, "
  "convert_arg=%d\n", VAR_9->minor, VAR_12, VAR_11->scan_begin_src,
  VAR_11->scan_begin_arg, VAR_11->convert_src, VAR_11->convert_arg);

 if (VAR_12)
  return 3;

 return 0;
}
