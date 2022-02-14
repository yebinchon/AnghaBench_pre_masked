
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; int chanlist_len; int scan_end_arg; int stop_arg; int * chanlist; } ;


 int FUNC_0 (int ) ;

 int VAR_0 ;

 int VAR_1 ;
 int FUNC_1 (struct comedi_device*,char*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3,
         struct comedi_cmd *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;
 int VAR_7;



 VAR_6 = VAR_4->start_src;
 VAR_4->start_src &= VAR_1;
 if (!VAR_4->start_src || VAR_6 != VAR_4->start_src)
  VAR_5++;

 VAR_6 = VAR_4->scan_begin_src;
 VAR_4->scan_begin_src &= VAR_0;
 if (!VAR_4->scan_begin_src || VAR_6 != VAR_4->scan_begin_src)
  VAR_5++;

 VAR_6 = VAR_4->convert_src;
 VAR_4->convert_src &= VAR_1;
 if (!VAR_4->convert_src || VAR_6 != VAR_4->convert_src)
  VAR_5++;

 VAR_6 = VAR_4->scan_end_src;
 VAR_4->scan_end_src &= 129;
 if (!VAR_4->scan_end_src || VAR_6 != VAR_4->scan_end_src)
  VAR_5++;

 VAR_6 = VAR_4->stop_src;
 VAR_4->stop_src &= 129 | 128;
 if (!VAR_4->stop_src || VAR_6 != VAR_4->stop_src)
  VAR_5++;

 if (VAR_5)
  return 1;




 if (VAR_4->stop_src != 129 && VAR_4->stop_src != 128)
  VAR_5++;

 if (VAR_5)
  return 2;



 if (!VAR_4->chanlist_len) {
  VAR_4->chanlist_len = 32;
  VAR_5++;
 }
 if (VAR_4->scan_end_arg != VAR_4->chanlist_len) {
  VAR_4->scan_end_arg = VAR_4->chanlist_len;
  VAR_5++;
 }

 switch (VAR_4->stop_src) {
 case 129:
  if (!VAR_4->stop_arg) {
   VAR_4->stop_arg = 1;
   VAR_5++;
  }
  break;
 case 128:
  if (VAR_4->stop_arg != 0) {
   VAR_4->stop_arg = 0;
   VAR_5++;
  }
  break;
 default:
  break;
 }

 if (VAR_5)
  return 3;



 if (VAR_5)
  return 4;

 if (VAR_4->chanlist) {
  for (VAR_7 = 1; VAR_7 < VAR_4->chanlist_len; VAR_7++) {
   if (FUNC_0(VAR_4->chanlist[VAR_7]) != VAR_7) {

    FUNC_1(VAR_2,
          "chanlist must be channels 0 to 31 in order");
    VAR_5++;
    break;
   }
  }
 }

 if (VAR_5)
  return 5;

 return 0;
}
