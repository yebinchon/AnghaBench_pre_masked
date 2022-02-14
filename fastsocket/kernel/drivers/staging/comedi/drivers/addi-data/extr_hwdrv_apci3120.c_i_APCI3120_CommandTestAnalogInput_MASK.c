
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; scalar_t__ start_arg; int scan_begin_arg; int convert_arg; int chanlist_len; int stop_arg; int scan_end_arg; } ;
struct TYPE_2__ {int ui_MinDelaytimeNs; int ui_MinAcquisitiontimeNs; int i_AiChannelList; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;

int FUNC_0(struct comedi_device *VAR_7, struct comedi_subdevice *VAR_8,
 struct comedi_cmd *VAR_9)
{
 int VAR_10 = 0;
 int VAR_11;



 VAR_11 = VAR_9->start_src;
 VAR_9->start_src &= VAR_4 | VAR_1;
 if (!VAR_9->start_src || VAR_11 != VAR_9->start_src)
  VAR_10++;

 VAR_11 = VAR_9->scan_begin_src;
 VAR_9->scan_begin_src &= VAR_5 | VAR_2;
 if (!VAR_9->scan_begin_src || VAR_11 != VAR_9->scan_begin_src)
  VAR_10++;

 VAR_11 = VAR_9->convert_src;
 VAR_9->convert_src &= VAR_5;
 if (!VAR_9->convert_src || VAR_11 != VAR_9->convert_src)
  VAR_10++;

 VAR_11 = VAR_9->scan_end_src;
 VAR_9->scan_end_src &= VAR_0;
 if (!VAR_9->scan_end_src || VAR_11 != VAR_9->scan_end_src)
  VAR_10++;

 VAR_11 = VAR_9->stop_src;
 VAR_9->stop_src &= VAR_0 | VAR_3;
 if (!VAR_9->stop_src || VAR_11 != VAR_9->stop_src)
  VAR_10++;

 if (VAR_10)
  return 1;



 if (VAR_9->start_src != VAR_4 && VAR_9->start_src != VAR_1) {
  VAR_10++;
 }

 if (VAR_9->scan_begin_src != VAR_5 &&
  VAR_9->scan_begin_src != VAR_2)
  VAR_10++;

 if (VAR_9->convert_src != VAR_5)
  VAR_10++;

 if (VAR_9->scan_end_src != VAR_0) {
  VAR_9->scan_end_src = VAR_0;
  VAR_10++;
 }

 if (VAR_9->stop_src != VAR_3 && VAR_9->stop_src != VAR_0)
  VAR_10++;

 if (VAR_10)
  return 2;



 if (VAR_9->start_arg != 0) {
  VAR_9->start_arg = 0;
  VAR_10++;
 }

 if (VAR_9->scan_begin_src == VAR_5)
 {
  if (VAR_9->scan_begin_arg < VAR_6->ui_MinDelaytimeNs) {
   VAR_9->scan_begin_arg = VAR_6->ui_MinDelaytimeNs;
   VAR_10++;
  }
 }

 if (VAR_9->convert_src == VAR_5)
 {
  if (VAR_9->scan_begin_src == VAR_5) {
   if ((VAR_9->convert_arg)
    && (VAR_9->convert_arg <
     VAR_6->ui_MinAcquisitiontimeNs)) {
    VAR_9->convert_arg =
     VAR_6->ui_MinAcquisitiontimeNs;
    VAR_10++;
   }
  } else {
   if (VAR_9->convert_arg <
    VAR_6->ui_MinAcquisitiontimeNs) {
    VAR_9->convert_arg =
     VAR_6->ui_MinAcquisitiontimeNs;
    VAR_10++;

   }
  }
 }

 if (!VAR_9->chanlist_len) {
  VAR_9->chanlist_len = 1;
  VAR_10++;
 }
 if (VAR_9->chanlist_len > VAR_6->i_AiChannelList) {
  VAR_9->chanlist_len = VAR_6->i_AiChannelList;
  VAR_10++;
 }
 if (VAR_9->stop_src == VAR_0) {
  if (!VAR_9->stop_arg) {
   VAR_9->stop_arg = 1;
   VAR_10++;
  }
 } else {
  if (VAR_9->stop_arg != 0) {
   VAR_9->stop_arg = 0;
   VAR_10++;
  }
 }

 if (VAR_10)
  return 3;



 if (VAR_9->convert_src == VAR_5) {

  if (VAR_9->scan_begin_src == VAR_5 &&
   VAR_9->scan_begin_arg <
   VAR_9->convert_arg * VAR_9->scan_end_arg) {
   VAR_9->scan_begin_arg =
    VAR_9->convert_arg * VAR_9->scan_end_arg;
   VAR_10++;
  }
 }

 if (VAR_10)
  return 4;

 return 0;
}
