
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int flags; int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; unsigned int start_arg; int scan_begin_arg; scalar_t__ convert_arg; scalar_t__ scan_end_arg; scalar_t__ chanlist_len; int stop_arg; } ;
struct TYPE_4__ {int ao_speed; } ;
struct TYPE_3__ {int clock_ns; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_1 (struct comedi_device*,int,int) ;
 int FUNC_2 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_12, struct comedi_subdevice *VAR_13,
    struct comedi_cmd *VAR_14)
{
 int VAR_15 = 0;
 int VAR_16;



 if ((VAR_14->flags & VAR_0) == 0) {
  VAR_14->flags |= VAR_0;
 }

 VAR_16 = VAR_14->start_src;
 VAR_14->start_src &= VAR_5 | VAR_4;
 if (!VAR_14->start_src || VAR_16 != VAR_14->start_src)
  VAR_15++;

 VAR_16 = VAR_14->scan_begin_src;
 VAR_14->scan_begin_src &= VAR_9 | VAR_4;
 if (!VAR_14->scan_begin_src || VAR_16 != VAR_14->scan_begin_src)
  VAR_15++;

 VAR_16 = VAR_14->convert_src;
 VAR_14->convert_src &= VAR_7;
 if (!VAR_14->convert_src || VAR_16 != VAR_14->convert_src)
  VAR_15++;

 VAR_16 = VAR_14->scan_end_src;
 VAR_14->scan_end_src &= VAR_3;
 if (!VAR_14->scan_end_src || VAR_16 != VAR_14->scan_end_src)
  VAR_15++;

 VAR_16 = VAR_14->stop_src;
 VAR_14->stop_src &= VAR_3 | VAR_6;
 if (!VAR_14->stop_src || VAR_16 != VAR_14->stop_src)
  VAR_15++;

 if (VAR_15)
  return 1;



 if (VAR_14->stop_src != VAR_3 && VAR_14->stop_src != VAR_6)
  VAR_15++;

 if (VAR_15)
  return 2;



 if (VAR_14->start_src == VAR_4) {

  unsigned int VAR_17 = FUNC_0(VAR_14->start_arg);

  if (VAR_17 > 18)
   VAR_17 = 18;
  VAR_17 |= (VAR_14->start_arg & (VAR_2 | VAR_1));
  if (VAR_14->start_arg != VAR_17) {
   VAR_14->start_arg = VAR_17;
   VAR_15++;
  }
 } else {
  if (VAR_14->start_arg != 0) {

   VAR_14->start_arg = 0;
   VAR_15++;
  }
 }
 if (VAR_14->scan_begin_src == VAR_9) {
  if (VAR_14->scan_begin_arg < VAR_10.ao_speed) {
   VAR_14->scan_begin_arg = VAR_10.ao_speed;
   VAR_15++;
  }
  if (VAR_14->scan_begin_arg > VAR_11->clock_ns * 0xffffff) {
   VAR_14->scan_begin_arg = VAR_11->clock_ns * 0xffffff;
   VAR_15++;
  }
 }
 if (VAR_14->convert_arg != 0) {
  VAR_14->convert_arg = 0;
  VAR_15++;
 }
 if (VAR_14->scan_end_arg != VAR_14->chanlist_len) {
  VAR_14->scan_end_arg = VAR_14->chanlist_len;
  VAR_15++;
 }
 if (VAR_14->stop_src == VAR_3) {
  if (VAR_14->stop_arg > 0x00ffffff) {
   VAR_14->stop_arg = 0x00ffffff;
   VAR_15++;
  }
 } else {

  if (VAR_14->stop_arg != 0) {
   VAR_14->stop_arg = 0;
   VAR_15++;
  }
 }

 if (VAR_15)
  return 3;


 if (VAR_14->scan_begin_src == VAR_9) {
  VAR_16 = VAR_14->scan_begin_arg;
  VAR_14->scan_begin_arg =
      FUNC_2(VAR_12, FUNC_1(VAR_12,
             VAR_14->scan_begin_arg,
             VAR_14->
             flags &
             VAR_8));
  if (VAR_16 != VAR_14->scan_begin_arg)
   VAR_15++;
 }
 if (VAR_15)
  return 4;



 if (VAR_15)
  return 5;

 return 0;
}
