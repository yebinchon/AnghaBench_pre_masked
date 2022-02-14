
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; int scan_begin_arg; int chanlist_len; int scan_end_arg; int * chanlist; int flags; } ;
struct TYPE_2__ {int ao_scan_speed; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*,char*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_8, struct comedi_subdevice *VAR_9,
        struct comedi_cmd *VAR_10)
{
 int VAR_11 = 0;
 int VAR_12;
 unsigned int VAR_13;
 int VAR_14;



 VAR_12 = VAR_10->start_src;
 VAR_10->start_src &= VAR_3 | VAR_2;
 if (!VAR_10->start_src || VAR_12 != VAR_10->start_src)
  VAR_11++;

 VAR_12 = VAR_10->scan_begin_src;
 VAR_10->scan_begin_src &= VAR_6 | VAR_2;
 if (!VAR_10->scan_begin_src || VAR_12 != VAR_10->scan_begin_src)
  VAR_11++;

 VAR_12 = VAR_10->convert_src;
 VAR_10->convert_src &= VAR_5;
 if (!VAR_10->convert_src || VAR_12 != VAR_10->convert_src)
  VAR_11++;

 VAR_12 = VAR_10->scan_end_src;
 VAR_10->scan_end_src &= VAR_1;
 if (!VAR_10->scan_end_src || VAR_12 != VAR_10->scan_end_src)
  VAR_11++;

 VAR_12 = VAR_10->stop_src;
 VAR_10->stop_src &= VAR_4;
 if (!VAR_10->stop_src || VAR_12 != VAR_10->stop_src)
  VAR_11++;

 if (VAR_11)
  return 1;




 if (VAR_10->start_src != VAR_3 && VAR_10->start_src != VAR_2)
  VAR_11++;
 if (VAR_10->scan_begin_src != VAR_6 &&
     VAR_10->scan_begin_src != VAR_2)
  VAR_11++;


 if (VAR_10->convert_src == VAR_2 && VAR_10->scan_begin_src == VAR_6)
  VAR_11++;
 if (VAR_10->stop_src != VAR_1 &&
     VAR_10->stop_src != VAR_4 && VAR_10->stop_src != VAR_2)
  VAR_11++;

 if (VAR_11)
  return 2;



 if (VAR_10->scan_begin_src == VAR_6) {
  if (VAR_10->scan_begin_arg < FUNC_1(VAR_8)->ao_scan_speed) {
   VAR_10->scan_begin_arg = FUNC_1(VAR_8)->ao_scan_speed;
   VAR_11++;
  }
  if (FUNC_3(VAR_10->scan_begin_arg,
       VAR_10->flags) > VAR_7) {
   VAR_10->scan_begin_arg =
       (VAR_7 + 2) * VAR_0;
   VAR_11++;
  }
 }

 if (!VAR_10->chanlist_len) {
  VAR_10->chanlist_len = 1;
  VAR_11++;
 }
 if (VAR_10->scan_end_arg != VAR_10->chanlist_len) {
  VAR_10->scan_end_arg = VAR_10->chanlist_len;
  VAR_11++;
 }

 if (VAR_11)
  return 3;



 if (VAR_10->scan_begin_src == VAR_6) {
  VAR_13 = VAR_10->scan_begin_arg;
  VAR_10->scan_begin_arg =
      FUNC_4(VAR_10->scan_begin_arg, VAR_10->flags) * VAR_0;
  if (VAR_13 != VAR_10->scan_begin_arg)
   VAR_11++;
 }

 if (VAR_11)
  return 4;

 if (VAR_10->chanlist) {
  unsigned int VAR_15 = FUNC_0(VAR_10->chanlist[0]);
  for (VAR_14 = 1; VAR_14 < VAR_10->chanlist_len; VAR_14++) {
   if (FUNC_0(VAR_10->chanlist[VAR_14]) != VAR_15 + VAR_14) {
    FUNC_2(VAR_8,
          "chanlist must use consecutive channels");
    VAR_11++;
    break;
   }
  }
 }

 if (VAR_11)
  return 5;

 return 0;
}
