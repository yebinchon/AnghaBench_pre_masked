
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbduxsub {scalar_t__ high_speed; TYPE_1__* interface; int probed; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int minor; struct usbduxsub* private; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; scalar_t__ start_arg; int scan_begin_arg; int chanlist_len; int scan_end_arg; scalar_t__ stop_arg; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_8,
        struct comedi_subdevice *VAR_9, struct comedi_cmd *VAR_10)
{
 int VAR_11 = 0, VAR_12, VAR_13;
 unsigned int VAR_14;
 struct usbduxsub *VAR_15 = VAR_8->private;

 if (!(VAR_15->probed))
  return -VAR_0;

 FUNC_0(&VAR_15->interface->dev,
  "comedi%d: usbdux_ai_cmdtest\n", VAR_8->minor);



 VAR_12 = VAR_10->start_src;
 VAR_10->start_src &= VAR_6 | VAR_4;
 if (!VAR_10->start_src || VAR_12 != VAR_10->start_src)
  VAR_11++;


 VAR_12 = VAR_10->scan_begin_src;

 VAR_10->scan_begin_src &= VAR_7;
 if (!VAR_10->scan_begin_src || VAR_12 != VAR_10->scan_begin_src)
  VAR_11++;


 VAR_12 = VAR_10->convert_src;
 VAR_10->convert_src &= VAR_6;
 if (!VAR_10->convert_src || VAR_12 != VAR_10->convert_src)
  VAR_11++;


 VAR_12 = VAR_10->scan_end_src;
 VAR_10->scan_end_src &= VAR_1;
 if (!VAR_10->scan_end_src || VAR_12 != VAR_10->scan_end_src)
  VAR_11++;


 VAR_12 = VAR_10->stop_src;
 VAR_10->stop_src &= VAR_1 | VAR_5;
 if (!VAR_10->stop_src || VAR_12 != VAR_10->stop_src)
  VAR_11++;

 if (VAR_11)
  return 1;





 if (VAR_10->scan_begin_src != VAR_3 &&
     VAR_10->scan_begin_src != VAR_2 &&
     VAR_10->scan_begin_src != VAR_7)
  VAR_11++;
 if (VAR_10->stop_src != VAR_1 && VAR_10->stop_src != VAR_5)
  VAR_11++;

 if (VAR_11)
  return 2;


 if (VAR_10->start_arg != 0) {
  VAR_10->start_arg = 0;
  VAR_11++;
 }

 if (VAR_10->scan_begin_src == VAR_3) {

  if (VAR_10->scan_begin_arg != 0) {
   VAR_10->scan_begin_arg = 0;
   VAR_11++;
  }
 }

 if (VAR_10->scan_begin_src == VAR_7) {
  if (VAR_15->high_speed) {






   VAR_13 = 1;

   while (VAR_13 < (VAR_10->chanlist_len))
    VAR_13 = VAR_13 * 2;

   if (VAR_10->scan_begin_arg < (1000000 / 8 * VAR_13)) {
    VAR_10->scan_begin_arg = 1000000 / 8 * VAR_13;
    VAR_11++;
   }


   VAR_14 =
       ((unsigned int)(VAR_10->scan_begin_arg / 125000)) *
       125000;
   if (VAR_10->scan_begin_arg != VAR_14) {
    VAR_10->scan_begin_arg = VAR_14;
    VAR_11++;
   }
  } else {


   if (VAR_10->scan_begin_arg < 1000000) {
    VAR_10->scan_begin_arg = 1000000;
    VAR_11++;
   }



   VAR_14 = ((unsigned int)(VAR_10->scan_begin_arg /
         1000000)) * 1000000;
   if (VAR_10->scan_begin_arg != VAR_14) {
    VAR_10->scan_begin_arg = VAR_14;
    VAR_11++;
   }
  }
 }

 if (VAR_10->scan_end_arg != VAR_10->chanlist_len) {
  VAR_10->scan_end_arg = VAR_10->chanlist_len;
  VAR_11++;
 }

 if (VAR_10->stop_src == VAR_1) {

 } else {

  if (VAR_10->stop_arg != 0) {
   VAR_10->stop_arg = 0;
   VAR_11++;
  }
 }

 if (VAR_11)
  return 3;

 return 0;
}
