
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; int convert_arg; int chanlist_len; int scan_begin_arg; int scan_end_arg; int stop_arg; int * chanlist; } ;
struct TYPE_2__ {scalar_t__ layout; int ai_speed; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;


 unsigned int VAR_1 ;

 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_1__* FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_4 (struct comedi_device*,char*) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_5, struct comedi_subdevice *VAR_6,
        struct comedi_cmd *VAR_7)
{
 int VAR_8 = 0;
 int VAR_9;
 unsigned int VAR_10, VAR_11;
 int VAR_12;
 int VAR_13;
 unsigned int VAR_14;



 VAR_9 = VAR_7->start_src;
 VAR_7->start_src &= VAR_2 | 129;
 if (!VAR_7->start_src || VAR_9 != VAR_7->start_src)
  VAR_8++;

 VAR_9 = VAR_7->scan_begin_src;
 VAR_14 = VAR_4;
 if (FUNC_2(VAR_5)->layout == VAR_0)
  VAR_14 |= VAR_3;
 else
  VAR_14 |= VAR_1;
 VAR_7->scan_begin_src &= VAR_14;
 if (!VAR_7->scan_begin_src || VAR_9 != VAR_7->scan_begin_src)
  VAR_8++;

 VAR_9 = VAR_7->convert_src;
 VAR_14 = VAR_4;
 if (FUNC_2(VAR_5)->layout == VAR_0)
  VAR_14 |= VAR_2;
 else
  VAR_14 |= 129;
 VAR_7->convert_src &= VAR_14;
 if (!VAR_7->convert_src || VAR_9 != VAR_7->convert_src)
  VAR_8++;

 VAR_9 = VAR_7->scan_end_src;
 VAR_7->scan_end_src &= 130;
 if (!VAR_7->scan_end_src || VAR_9 != VAR_7->scan_end_src)
  VAR_8++;

 VAR_9 = VAR_7->stop_src;
 VAR_7->stop_src &= 130 | 129 | 128;
 if (!VAR_7->stop_src || VAR_9 != VAR_7->stop_src)
  VAR_8++;

 if (VAR_8)
  return 1;




 if (VAR_7->start_src != VAR_2 && VAR_7->start_src != 129)
  VAR_8++;
 if (VAR_7->scan_begin_src != VAR_4 &&
     VAR_7->scan_begin_src != VAR_3 &&
     VAR_7->scan_begin_src != VAR_1)
  VAR_8++;
 if (VAR_7->convert_src != VAR_4 &&
     VAR_7->convert_src != 129 && VAR_7->convert_src != VAR_2)
  VAR_8++;
 if (VAR_7->stop_src != 130 &&
     VAR_7->stop_src != 128 && VAR_7->stop_src != 129)
  VAR_8++;


 if (VAR_7->convert_src == 129 && VAR_7->scan_begin_src == VAR_4)
  VAR_8++;
 if (VAR_7->stop_src != 130 &&
     VAR_7->stop_src != 128 && VAR_7->stop_src != 129)
  VAR_8++;

 if (VAR_8)
  return 2;



 if (VAR_7->convert_src == VAR_4) {
  if (FUNC_2(VAR_5)->layout == VAR_0) {
   if (VAR_7->convert_arg) {
    VAR_7->convert_arg = 0;
    VAR_8++;
   }
  } else {
   if (VAR_7->convert_arg < FUNC_2(VAR_5)->ai_speed) {
    VAR_7->convert_arg = FUNC_2(VAR_5)->ai_speed;
    VAR_8++;
   }
   if (VAR_7->scan_begin_src == VAR_4) {

    if (VAR_7->convert_arg * VAR_7->chanlist_len >
        VAR_7->scan_begin_arg) {
     VAR_7->scan_begin_arg =
         VAR_7->convert_arg *
         VAR_7->chanlist_len;
     VAR_8++;
    }
   }
  }
 }

 if (!VAR_7->chanlist_len) {
  VAR_7->chanlist_len = 1;
  VAR_8++;
 }
 if (VAR_7->scan_end_arg != VAR_7->chanlist_len) {
  VAR_7->scan_end_arg = VAR_7->chanlist_len;
  VAR_8++;
 }

 switch (VAR_7->stop_src) {
 case 129:
  break;
 case 130:
  if (!VAR_7->stop_arg) {
   VAR_7->stop_arg = 1;
   VAR_8++;
  }
  break;
 case 128:
  if (VAR_7->stop_arg != 0) {
   VAR_7->stop_arg = 0;
   VAR_8++;
  }
  break;
 default:
  break;
 }

 if (VAR_8)
  return 3;



 if (VAR_7->convert_src == VAR_4) {
  VAR_10 = VAR_7->convert_arg;
  VAR_11 = VAR_7->scan_begin_arg;
  FUNC_3(VAR_5, VAR_7);
  if (VAR_10 != VAR_7->convert_arg)
   VAR_8++;
  if (VAR_11 != VAR_7->scan_begin_arg)
   VAR_8++;
 }

 if (VAR_8)
  return 4;


 if (VAR_7->chanlist) {
  VAR_13 = FUNC_0(VAR_7->chanlist[0]);
  for (VAR_12 = 1; VAR_12 < VAR_7->chanlist_len; VAR_12++) {
   if (VAR_13 != FUNC_0(VAR_7->chanlist[VAR_12])) {
    FUNC_4(VAR_5,
          "all elements in chanlist must use the same analog reference");
    VAR_8++;
    break;
   }
  }

  if (FUNC_2(VAR_5)->layout == VAR_0) {
   unsigned int VAR_15 = FUNC_1(VAR_7->chanlist[0]);
   for (VAR_12 = 1; VAR_12 < VAR_7->chanlist_len; VAR_12++) {
    if (FUNC_1(VAR_7->chanlist[VAR_12]) !=
        VAR_15 + VAR_12) {
     FUNC_4(VAR_5,
           "chanlist must use consecutive channels");
     VAR_8++;
     break;
    }
   }
   if (VAR_7->chanlist_len == 3) {
    FUNC_4(VAR_5,
          "chanlist cannot be 3 channels long, use 1, 2, or 4 channels");
    VAR_8++;
   }
  }
 }

 if (VAR_8)
  return 5;

 return 0;
}
