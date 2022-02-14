
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; scalar_t__ start_arg; scalar_t__ convert_arg; int chanlist_len; int scan_end_arg; int stop_arg; int scan_begin_arg; int * chanlist; int flags; } ;
struct TYPE_2__ {scalar_t__ ai_speed; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct comedi_device*,int*,int ) ;
 int FUNC_3 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_6,
       struct comedi_subdevice *VAR_7, struct comedi_cmd *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10;
 int VAR_11;
 int VAR_12;



 VAR_10 = VAR_8->start_src;
 VAR_8->start_src &= VAR_3 | VAR_1;
 if (!VAR_8->start_src || VAR_10 != VAR_8->start_src)
  VAR_9++;

 VAR_10 = VAR_8->scan_begin_src;
 VAR_8->scan_begin_src &= VAR_4;
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
 VAR_8->stop_src &= VAR_0 | VAR_2;
 if (!VAR_8->stop_src || VAR_10 != VAR_8->stop_src)
  VAR_9++;

 if (VAR_9)
  return 1;



 if (VAR_8->start_src != VAR_3 && VAR_8->start_src != VAR_1)
  VAR_9++;
 if (VAR_8->stop_src != VAR_0 && VAR_8->stop_src != VAR_2)
  VAR_9++;

 if (VAR_9)
  return 2;



 if (VAR_8->start_arg != 0) {
  VAR_8->start_arg = 0;
  VAR_9++;
 }
 if (VAR_8->convert_src == VAR_4) {
  if (VAR_8->convert_arg < VAR_5->ai_speed) {
   VAR_8->convert_arg = VAR_5->ai_speed;
   VAR_9++;
  }
 }
 if (!VAR_8->chanlist_len) {
  VAR_8->chanlist_len = 1;
  VAR_9++;
 }
 if (VAR_8->scan_end_arg != VAR_8->chanlist_len) {
  VAR_8->scan_end_arg = VAR_8->chanlist_len;
  VAR_9++;
 }
 if (VAR_8->stop_src == VAR_0) {
  if (!VAR_8->stop_arg) {
   VAR_8->stop_arg = 1;
   VAR_9++;
  }
 } else {
  if (VAR_8->stop_arg != 0) {
   VAR_8->stop_arg = 0;
   VAR_9++;
  }
 }

 if (VAR_9)
  return 3;



 if (VAR_8->scan_begin_src == VAR_4) {
  VAR_10 = VAR_8->scan_begin_arg;
  FUNC_2(VAR_6, &VAR_8->scan_begin_arg, VAR_8->flags);
  if (VAR_10 != VAR_8->scan_begin_arg)
   VAR_9++;
 }

 if (VAR_9)
  return 4;


 if (VAR_8->chanlist) {
  VAR_11 = FUNC_1(VAR_8->chanlist[0]);
  for (VAR_12 = 1; VAR_12 < VAR_8->chanlist_len; VAR_12++) {
   if (FUNC_1(VAR_8->chanlist[VAR_12]) != (VAR_11 + VAR_12)) {
    FUNC_3(VAR_6,
          "entries in chanlist must be consecutive channels, counting upwards\n");
    VAR_9++;
   }
  }
  if (VAR_8->chanlist_len == 2 && FUNC_1(VAR_8->chanlist[0]) == 1) {
   FUNC_3(VAR_6,
         "length 2 chanlist must be channels 0,1 or channels 2,3");
   VAR_9++;
  }
  if (VAR_8->chanlist_len == 3) {
   FUNC_3(VAR_6,
         "chanlist must have 1,2 or 4 channels");
   VAR_9++;
  }
  if (FUNC_0(VAR_8->chanlist[0]) != FUNC_0(VAR_8->chanlist[1]) ||
      FUNC_0(VAR_8->chanlist[2]) != FUNC_0(VAR_8->chanlist[3])) {
   FUNC_3(VAR_6,
         "channels 0/1 and 2/3 must have the same analog reference");
   VAR_9++;
  }
 }

 if (VAR_9)
  return 5;

 return 0;
}
