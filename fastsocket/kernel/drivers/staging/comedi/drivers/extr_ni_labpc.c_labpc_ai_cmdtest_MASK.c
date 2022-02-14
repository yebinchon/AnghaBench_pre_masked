
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; int start_arg; int chanlist_len; int scan_end_arg; int convert_arg; int scan_begin_arg; int stop_arg; } ;
struct TYPE_2__ {scalar_t__ register_layout; int ai_speed; } ;



 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct comedi_device*,struct comedi_cmd*) ;
 scalar_t__ FUNC_1 (struct comedi_device*,struct comedi_cmd*) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_6,
       struct comedi_subdevice *VAR_7, struct comedi_cmd *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10, VAR_11;
 int VAR_12;



 VAR_10 = VAR_8->start_src;
 VAR_8->start_src &= VAR_2 | VAR_0;
 if (!VAR_8->start_src || VAR_10 != VAR_8->start_src)
  VAR_9++;

 VAR_10 = VAR_8->scan_begin_src;
 VAR_8->scan_begin_src &= VAR_3 | VAR_1 | VAR_0;
 if (!VAR_8->scan_begin_src || VAR_10 != VAR_8->scan_begin_src)
  VAR_9++;

 VAR_10 = VAR_8->convert_src;
 VAR_8->convert_src &= VAR_3 | VAR_0;
 if (!VAR_8->convert_src || VAR_10 != VAR_8->convert_src)
  VAR_9++;

 VAR_10 = VAR_8->scan_end_src;
 VAR_8->scan_end_src &= 129;
 if (!VAR_8->scan_end_src || VAR_10 != VAR_8->scan_end_src)
  VAR_9++;

 VAR_10 = VAR_8->stop_src;
 VAR_12 = 129 | 128;
 if (VAR_5->register_layout == VAR_4)
  VAR_12 |= VAR_0;
 VAR_8->stop_src &= VAR_12;
 if (!VAR_8->stop_src || VAR_10 != VAR_8->stop_src)
  VAR_9++;

 if (VAR_9)
  return 1;



 if (VAR_8->start_src != VAR_2 && VAR_8->start_src != VAR_0)
  VAR_9++;
 if (VAR_8->scan_begin_src != VAR_3 &&
     VAR_8->scan_begin_src != VAR_1 &&
     VAR_8->scan_begin_src != VAR_0)
  VAR_9++;
 if (VAR_8->convert_src != VAR_3 && VAR_8->convert_src != VAR_0)
  VAR_9++;
 if (VAR_8->stop_src != 129 &&
     VAR_8->stop_src != VAR_0 && VAR_8->stop_src != 128)
  VAR_9++;


 if (VAR_8->start_src == VAR_0 && VAR_8->stop_src == VAR_0)
  VAR_9++;

 if (VAR_9)
  return 2;



 if (VAR_8->start_arg == VAR_2 && VAR_8->start_arg != 0) {
  VAR_8->start_arg = 0;
  VAR_9++;
 }

 if (!VAR_8->chanlist_len) {
  VAR_9++;
 }
 if (VAR_8->scan_end_arg != VAR_8->chanlist_len) {
  VAR_8->scan_end_arg = VAR_8->chanlist_len;
  VAR_9++;
 }

 if (VAR_8->convert_src == VAR_3) {
  if (VAR_8->convert_arg < VAR_5->ai_speed) {
   VAR_8->convert_arg = VAR_5->ai_speed;
   VAR_9++;
  }
 }

 if (VAR_8->scan_begin_src == VAR_3) {
  if (VAR_8->convert_src == VAR_3 &&
      VAR_8->scan_begin_arg <
      VAR_8->convert_arg * VAR_8->chanlist_len) {
   VAR_8->scan_begin_arg =
       VAR_8->convert_arg * VAR_8->chanlist_len;
   VAR_9++;
  }
  if (VAR_8->scan_begin_arg <
      VAR_5->ai_speed * VAR_8->chanlist_len) {
   VAR_8->scan_begin_arg =
       VAR_5->ai_speed * VAR_8->chanlist_len;
   VAR_9++;
  }
 }

 switch (VAR_8->stop_src) {
 case 129:
  if (!VAR_8->stop_arg) {
   VAR_8->stop_arg = 1;
   VAR_9++;
  }
  break;
 case 128:
  if (VAR_8->stop_arg != 0) {
   VAR_8->stop_arg = 0;
   VAR_9++;
  }
  break;

 default:
  break;
 }

 if (VAR_9)
  return 3;



 VAR_10 = VAR_8->convert_arg;
 VAR_11 = VAR_8->scan_begin_arg;
 FUNC_0(VAR_6, VAR_8);
 if (VAR_10 != VAR_8->convert_arg || VAR_11 != VAR_8->scan_begin_arg)
  VAR_9++;

 if (VAR_9)
  return 4;

 if (FUNC_1(VAR_6, VAR_8))
  return 5;

 return 0;
}
