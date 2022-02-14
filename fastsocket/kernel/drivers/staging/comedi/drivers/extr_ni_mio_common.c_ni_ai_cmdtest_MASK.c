
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int flags; int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; int start_arg; int scan_begin_arg; int chanlist_len; int convert_arg; int scan_end_arg; unsigned int stop_arg; } ;
struct TYPE_4__ {scalar_t__ reg_type; int ai_speed; } ;
struct TYPE_3__ {int clock_ns; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__ VAR_12 ;
 TYPE_1__* VAR_13 ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,int,int) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 void* FUNC_3 (struct comedi_device*,int ) ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_17, struct comedi_subdevice *VAR_18,
    struct comedi_cmd *VAR_19)
{
 int VAR_20 = 0;
 int VAR_21;
 int VAR_22;



 if ((VAR_19->flags & VAR_0)) {
  VAR_19->flags &= ~VAR_0;
 }

 VAR_21 = VAR_19->start_src;
 VAR_19->start_src &= VAR_8 | VAR_6 | VAR_5;
 if (!VAR_19->start_src || VAR_21 != VAR_19->start_src)
  VAR_20++;

 VAR_21 = VAR_19->scan_begin_src;
 VAR_19->scan_begin_src &= VAR_11 | VAR_5;
 if (!VAR_19->scan_begin_src || VAR_21 != VAR_19->scan_begin_src)
  VAR_20++;

 VAR_21 = VAR_19->convert_src;
 VAR_22 = VAR_11 | VAR_5;
 if ((VAR_12.reg_type == VAR_14)
     || (VAR_12.reg_type == VAR_15))
  VAR_22 |= VAR_8;
 VAR_19->convert_src &= VAR_22;
 if (!VAR_19->convert_src || VAR_21 != VAR_19->convert_src)
  VAR_20++;

 VAR_21 = VAR_19->scan_end_src;
 VAR_19->scan_end_src &= VAR_4;
 if (!VAR_19->scan_end_src || VAR_21 != VAR_19->scan_end_src)
  VAR_20++;

 VAR_21 = VAR_19->stop_src;
 VAR_19->stop_src &= VAR_4 | VAR_7;
 if (!VAR_19->stop_src || VAR_21 != VAR_19->stop_src)
  VAR_20++;

 if (VAR_20)
  return 1;




 if (VAR_19->start_src != VAR_8 &&
     VAR_19->start_src != VAR_6 && VAR_19->start_src != VAR_5)
  VAR_20++;
 if (VAR_19->scan_begin_src != VAR_11 &&
     VAR_19->scan_begin_src != VAR_5 &&
     VAR_19->scan_begin_src != VAR_9)
  VAR_20++;
 if (VAR_19->convert_src != VAR_11 &&
     VAR_19->convert_src != VAR_5 && VAR_19->convert_src != VAR_8)
  VAR_20++;
 if (VAR_19->stop_src != VAR_4 && VAR_19->stop_src != VAR_7)
  VAR_20++;

 if (VAR_20)
  return 2;



 if (VAR_19->start_src == VAR_5) {

  unsigned int VAR_23 = FUNC_0(VAR_19->start_arg);

  if (VAR_23 > 16)
   VAR_23 = 16;
  VAR_23 |= (VAR_19->start_arg & (VAR_3 | VAR_2));
  if (VAR_19->start_arg != VAR_23) {
   VAR_19->start_arg = VAR_23;
   VAR_20++;
  }
 } else {
  if (VAR_19->start_arg != 0) {

   VAR_19->start_arg = 0;
   VAR_20++;
  }
 }
 if (VAR_19->scan_begin_src == VAR_11) {
  if (VAR_19->scan_begin_arg < FUNC_1(VAR_17,
           VAR_19->
           chanlist_len))
  {
   VAR_19->scan_begin_arg =
       FUNC_1(VAR_17, VAR_19->chanlist_len);
   VAR_20++;
  }
  if (VAR_19->scan_begin_arg > VAR_13->clock_ns * 0xffffff) {
   VAR_19->scan_begin_arg = VAR_13->clock_ns * 0xffffff;
   VAR_20++;
  }
 } else if (VAR_19->scan_begin_src == VAR_5) {

  unsigned int VAR_24 = FUNC_0(VAR_19->scan_begin_arg);

  if (VAR_24 > 16)
   VAR_24 = 16;
  VAR_24 |= (VAR_19->scan_begin_arg & (VAR_3 | VAR_2));
  if (VAR_19->scan_begin_arg != VAR_24) {
   VAR_19->scan_begin_arg = VAR_24;
   VAR_20++;
  }
 } else {
  if (VAR_19->scan_begin_arg) {
   VAR_19->scan_begin_arg = 0;
   VAR_20++;
  }
 }
 if (VAR_19->convert_src == VAR_11) {
  if ((VAR_12.reg_type == VAR_14)
      || (VAR_12.reg_type == VAR_15)) {
   if (VAR_19->convert_arg != 0) {
    VAR_19->convert_arg = 0;
    VAR_20++;
   }
  } else {
   if (VAR_19->convert_arg < VAR_12.ai_speed) {
    VAR_19->convert_arg = VAR_12.ai_speed;
    VAR_20++;
   }
   if (VAR_19->convert_arg > VAR_13->clock_ns * 0xffff) {
    VAR_19->convert_arg = VAR_13->clock_ns * 0xffff;
    VAR_20++;
   }
  }
 } else if (VAR_19->convert_src == VAR_5) {

  unsigned int VAR_25 = FUNC_0(VAR_19->convert_arg);

  if (VAR_25 > 16)
   VAR_25 = 16;
  VAR_25 |= (VAR_19->convert_arg & (VAR_1 | VAR_3));
  if (VAR_19->convert_arg != VAR_25) {
   VAR_19->convert_arg = VAR_25;
   VAR_20++;
  }
 } else if (VAR_19->convert_src == VAR_8) {
  if (VAR_19->convert_arg != 0) {
   VAR_19->convert_arg = 0;
   VAR_20++;
  }
 }

 if (VAR_19->scan_end_arg != VAR_19->chanlist_len) {
  VAR_19->scan_end_arg = VAR_19->chanlist_len;
  VAR_20++;
 }
 if (VAR_19->stop_src == VAR_4) {
  unsigned int VAR_26 = 0x01000000;

  if (VAR_12.reg_type == VAR_14)
   VAR_26 -= VAR_16;
  if (VAR_19->stop_arg > VAR_26) {
   VAR_19->stop_arg = VAR_26;
   VAR_20++;
  }
  if (VAR_19->stop_arg < 1) {
   VAR_19->stop_arg = 1;
   VAR_20++;
  }
 } else {

  if (VAR_19->stop_arg != 0) {
   VAR_19->stop_arg = 0;
   VAR_20++;
  }
 }

 if (VAR_20)
  return 3;



 if (VAR_19->scan_begin_src == VAR_11) {
  VAR_21 = VAR_19->scan_begin_arg;
  VAR_19->scan_begin_arg =
      FUNC_3(VAR_17, FUNC_2(VAR_17,
             VAR_19->scan_begin_arg,
             VAR_19->
             flags &
             VAR_10));
  if (VAR_21 != VAR_19->scan_begin_arg)
   VAR_20++;
 }
 if (VAR_19->convert_src == VAR_11) {
  if ((VAR_12.reg_type != VAR_14)
      && (VAR_12.reg_type != VAR_15)) {
   VAR_21 = VAR_19->convert_arg;
   VAR_19->convert_arg =
       FUNC_3(VAR_17, FUNC_2(VAR_17,
              VAR_19->convert_arg,
              VAR_19->
              flags &
              VAR_10));
   if (VAR_21 != VAR_19->convert_arg)
    VAR_20++;
   if (VAR_19->scan_begin_src == VAR_11 &&
       VAR_19->scan_begin_arg <
       VAR_19->convert_arg * VAR_19->scan_end_arg) {
    VAR_19->scan_begin_arg =
        VAR_19->convert_arg * VAR_19->scan_end_arg;
    VAR_20++;
   }
  }
 }

 if (VAR_20)
  return 4;

 return 0;
}
