
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; scalar_t__ start_arg; scalar_t__ scan_begin_arg; int convert_arg; int chanlist_len; int scan_end_arg; int stop_arg; int flags; } ;
struct TYPE_4__ {scalar_t__ use_ext_trg; } ;
struct TYPE_3__ {int ai_ns_min; int n_aichan; int i8254_osc_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_0 (int ,int*,int*,int*,int) ;
 int FUNC_1 (int,struct comedi_cmd*) ;
 int FUNC_2 (char*,...) ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_10,
        struct comedi_subdevice *VAR_11, struct comedi_cmd *VAR_12)
{
 int VAR_13 = 0;
 int VAR_14, VAR_15, VAR_16;







 VAR_14 = VAR_12->start_src;
 VAR_12->start_src &= VAR_5;
 if (!VAR_12->start_src || VAR_14 != VAR_12->start_src)
  VAR_13++;

 VAR_14 = VAR_12->scan_begin_src;
 VAR_12->scan_begin_src &= VAR_3;
 if (!VAR_12->scan_begin_src || VAR_14 != VAR_12->scan_begin_src)
  VAR_13++;

 VAR_14 = VAR_12->convert_src;
 if (VAR_8->use_ext_trg) {
  VAR_12->convert_src &= VAR_2;
 } else {
  VAR_12->convert_src &= VAR_7;
 }
 if (!VAR_12->convert_src || VAR_14 != VAR_12->convert_src)
  VAR_13++;

 VAR_14 = VAR_12->scan_end_src;
 VAR_12->scan_end_src &= VAR_1;
 if (!VAR_12->scan_end_src || VAR_14 != VAR_12->scan_end_src)
  VAR_13++;

 VAR_14 = VAR_12->stop_src;
 VAR_12->stop_src &= VAR_1 | VAR_4;
 if (!VAR_12->stop_src || VAR_14 != VAR_12->stop_src)
  VAR_13++;

 if (VAR_13) {






  return 1;
 }



 if (VAR_12->start_src != VAR_5) {
  VAR_12->start_src = VAR_5;
  VAR_13++;
 }

 if (VAR_12->scan_begin_src != VAR_3) {
  VAR_12->scan_begin_src = VAR_3;
  VAR_13++;
 }

 if (VAR_8->use_ext_trg) {
  if (VAR_12->convert_src != VAR_2) {
   VAR_12->convert_src = VAR_2;
   VAR_13++;
  }
 } else {
  if (VAR_12->convert_src != VAR_7) {
   VAR_12->convert_src = VAR_7;
   VAR_13++;
  }
 }

 if (VAR_12->scan_end_src != VAR_1) {
  VAR_12->scan_end_src = VAR_1;
  VAR_13++;
 }

 if (VAR_12->stop_src != VAR_4 && VAR_12->stop_src != VAR_1)
  VAR_13++;

 if (VAR_13) {






  return 2;
 }



 if (VAR_12->start_arg != 0) {
  VAR_12->start_arg = 0;
  VAR_13++;
 }

 if (VAR_12->scan_begin_arg != 0) {
  VAR_12->scan_begin_arg = 0;
  VAR_13++;
 }

 if (VAR_12->convert_src == VAR_7) {
  if (VAR_12->convert_arg < VAR_9->ai_ns_min) {
   VAR_12->convert_arg = VAR_9->ai_ns_min;
   VAR_13++;
  }
 } else {
  if (VAR_12->convert_arg != 0) {
   VAR_12->convert_arg = 0;
   VAR_13++;
  }
 }

 if (!VAR_12->chanlist_len) {
  VAR_12->chanlist_len = 1;
  VAR_13++;
 }
 if (VAR_12->chanlist_len > VAR_0) {
  VAR_12->chanlist_len = VAR_9->n_aichan;
  VAR_13++;
 }
 if (VAR_12->scan_end_arg != VAR_12->chanlist_len) {
  VAR_12->scan_end_arg = VAR_12->chanlist_len;
  VAR_13++;
 }
 if (VAR_12->stop_src == VAR_1) {
  if (!VAR_12->stop_arg) {
   VAR_12->stop_arg = 1;
   VAR_13++;
  }
 } else {
  if (VAR_12->stop_arg != 0) {
   VAR_12->stop_arg = 0;
   VAR_13++;
  }
 }

 if (VAR_13) {






  return 3;
 }



 if (VAR_12->convert_src == VAR_7) {
  VAR_14 = VAR_12->convert_arg;
  FUNC_0(VAR_9->i8254_osc_base, &VAR_15,
       &VAR_16, &VAR_12->convert_arg,
       VAR_12->flags & VAR_6);
  if (VAR_12->convert_arg < VAR_9->ai_ns_min)
   VAR_12->convert_arg = VAR_9->ai_ns_min;
  if (VAR_14 != VAR_12->convert_arg)
   VAR_13++;
 }

 if (VAR_13) {





  return 4;
 }

 return 0;
}
