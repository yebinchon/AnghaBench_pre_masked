
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {unsigned int start_src; unsigned int scan_begin_src; unsigned int convert_src; unsigned int scan_end_src; unsigned int stop_src; scalar_t__ start_arg; scalar_t__ scan_begin_arg; unsigned int convert_arg; int scan_end_arg; int chanlist_len; scalar_t__ stop_arg; int flags; int * chanlist; } ;
struct TYPE_4__ {int divisor2; int divisor1; } ;
struct TYPE_3__ {unsigned int ai_speed; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_8 ;
 int FUNC_2 (int ,int *,int *,unsigned int*,int) ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_10,
       struct comedi_subdevice *VAR_11, struct comedi_cmd *VAR_12)
{
 unsigned int VAR_13 = 0, VAR_14, VAR_15;


 VAR_14 = VAR_12->start_src;
 VAR_12->start_src &= VAR_5 | VAR_2;
 if (!VAR_12->start_src || VAR_14 != VAR_12->start_src)
  VAR_13++;

 VAR_14 = VAR_12->scan_begin_src;
 VAR_12->scan_begin_src &= VAR_3;
 if (!VAR_12->scan_begin_src || VAR_14 != VAR_12->scan_begin_src)
  VAR_13++;

 VAR_14 = VAR_12->convert_src;
 VAR_12->convert_src &= VAR_7 | VAR_2;
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

 if (VAR_13)
  return 1;


 if (VAR_12->stop_src != VAR_1 && VAR_12->stop_src != VAR_4)
  VAR_13++;
 if (VAR_12->start_src != VAR_5 && VAR_12->start_src != VAR_2)
  VAR_13++;
 if (VAR_12->convert_src != VAR_7 && VAR_12->convert_src != VAR_2)
  VAR_13++;

 if (VAR_13)
  return 2;


 if (VAR_12->start_arg != 0) {
  VAR_12->start_arg = 0;
  VAR_13++;
 }

 if (VAR_12->scan_begin_src == VAR_3) {

  if (VAR_12->scan_begin_arg != 0) {
   VAR_12->scan_begin_arg = 0;
   VAR_13++;
  }
 }

 if (VAR_12->convert_src == VAR_7) {
  if (VAR_12->convert_arg < VAR_9->ai_speed) {
   VAR_12->convert_arg = VAR_9->ai_speed;
   VAR_13++;
  }
 }

 if (VAR_12->scan_end_arg != VAR_12->chanlist_len) {
  VAR_12->scan_end_arg = VAR_12->chanlist_len;
  VAR_13++;
 }

 if (VAR_12->stop_src == VAR_1) {

 } else {

  if (VAR_12->stop_arg != 0) {
   VAR_12->stop_arg = 0;
   VAR_13++;
  }
 }

 if (VAR_13)
  return 3;



 if (VAR_12->convert_src == VAR_7) {
  VAR_14 = VAR_12->convert_arg;

  FUNC_2(VAR_0,
            &(VAR_8->divisor1),
            &(VAR_8->divisor2),
            &(VAR_12->convert_arg),
            VAR_12->flags & VAR_6);
  if (VAR_14 != VAR_12->convert_arg)
   VAR_13++;
 }

 if (VAR_13)
  return 4;


 if (VAR_12->chanlist && VAR_12->chanlist_len > 1) {
  for (VAR_15 = 0; VAR_15 < VAR_12->chanlist_len; VAR_15++) {

   if ((VAR_15 % 2) != (FUNC_0(VAR_12->chanlist[VAR_15]) % 2)) {
    FUNC_1(VAR_10, "bad chanlist:\n"
          " even/odd channels must go have even/odd chanlist indices");
    VAR_13++;
   }
  }
  if ((VAR_12->chanlist_len % 2) != 0) {
   FUNC_1(VAR_10,
         "chanlist must be of even length or length 1");
   VAR_13++;
  }
 }

 if (VAR_13)
  return 5;

 return 0;
}
