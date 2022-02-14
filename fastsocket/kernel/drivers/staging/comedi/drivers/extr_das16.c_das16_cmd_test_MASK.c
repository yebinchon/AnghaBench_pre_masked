
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int n_chan; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; scalar_t__ start_arg; int scan_begin_arg; int scan_end_arg; int chanlist_len; unsigned int convert_arg; scalar_t__ stop_arg; int flags; int * chanlist; } ;
struct TYPE_4__ {int divisor2; int divisor1; int clockbase; } ;
struct TYPE_3__ {int size; int ai_speed; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_7 ;
 int FUNC_3 (int ,int *,int *,unsigned int*,int) ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_9, struct comedi_subdevice *VAR_10,
     struct comedi_cmd *VAR_11)
{
 int VAR_12 = 0, VAR_13;
 int VAR_14, VAR_15, VAR_16;
 int VAR_17;


 VAR_13 = VAR_11->start_src;
 VAR_11->start_src &= VAR_4;
 if (!VAR_11->start_src || VAR_13 != VAR_11->start_src)
  VAR_12++;

 VAR_13 = VAR_11->scan_begin_src;
 VAR_17 = VAR_2;

 if (VAR_8->size > 0x400)
  VAR_17 |= VAR_6 | VAR_1;
 VAR_11->scan_begin_src &= VAR_17;
 if (!VAR_11->scan_begin_src || VAR_13 != VAR_11->scan_begin_src)
  VAR_12++;

 VAR_13 = VAR_11->convert_src;
 VAR_17 = VAR_6 | VAR_1;

 if (VAR_8->size > 0x400)
  VAR_17 |= VAR_4;
 VAR_11->convert_src &= VAR_17;
 if (!VAR_11->convert_src || VAR_13 != VAR_11->convert_src)
  VAR_12++;

 VAR_13 = VAR_11->scan_end_src;
 VAR_11->scan_end_src &= VAR_0;
 if (!VAR_11->scan_end_src || VAR_13 != VAR_11->scan_end_src)
  VAR_12++;

 VAR_13 = VAR_11->stop_src;
 VAR_11->stop_src &= VAR_0 | VAR_3;
 if (!VAR_11->stop_src || VAR_13 != VAR_11->stop_src)
  VAR_12++;

 if (VAR_12)
  return 1;


 if (VAR_11->scan_begin_src != VAR_6 &&
     VAR_11->scan_begin_src != VAR_1 &&
     VAR_11->scan_begin_src != VAR_2)
  VAR_12++;
 if (VAR_11->convert_src != VAR_6 &&
     VAR_11->convert_src != VAR_1 && VAR_11->convert_src != VAR_4)
  VAR_12++;
 if (VAR_11->stop_src != VAR_3 && VAR_11->stop_src != VAR_0)
  VAR_12++;


 if (VAR_11->scan_begin_src == VAR_2 && VAR_11->convert_src == VAR_4)
  VAR_12++;
 if (VAR_11->scan_begin_src != VAR_2 && VAR_11->convert_src != VAR_4)
  VAR_12++;

 if (VAR_12)
  return 2;


 if (VAR_11->start_arg != 0) {
  VAR_11->start_arg = 0;
  VAR_12++;
 }

 if (VAR_11->scan_begin_src == VAR_2) {

  if (VAR_11->scan_begin_arg != 0) {
   VAR_11->scan_begin_arg = 0;
   VAR_12++;
  }
 }

 if (VAR_11->scan_end_arg != VAR_11->chanlist_len) {
  VAR_11->scan_end_arg = VAR_11->chanlist_len;
  VAR_12++;
 }

 if (VAR_11->scan_begin_src == VAR_6) {
  if (VAR_11->scan_begin_arg <
      VAR_8->ai_speed * VAR_11->chanlist_len) {
   VAR_11->scan_begin_arg =
       VAR_8->ai_speed * VAR_11->chanlist_len;
   VAR_12++;
  }
 }
 if (VAR_11->convert_src == VAR_6) {
  if (VAR_11->convert_arg < VAR_8->ai_speed) {
   VAR_11->convert_arg = VAR_8->ai_speed;
   VAR_12++;
  }
 }

 if (VAR_11->stop_src == VAR_3) {
  if (VAR_11->stop_arg != 0) {
   VAR_11->stop_arg = 0;
   VAR_12++;
  }
 }
 if (VAR_12)
  return 3;


 if (VAR_11->scan_begin_src == VAR_6) {
  unsigned int VAR_18 = VAR_11->scan_begin_arg;

  FUNC_3(VAR_7->clockbase,
            &(VAR_7->divisor1),
            &(VAR_7->divisor2),
            &(VAR_11->scan_begin_arg),
            VAR_11->flags & VAR_5);
  VAR_12 += (VAR_18 != VAR_11->scan_begin_arg);
 }
 if (VAR_11->convert_src == VAR_6) {
  unsigned int VAR_19 = VAR_11->convert_arg;

  FUNC_3(VAR_7->clockbase,
            &(VAR_7->divisor1),
            &(VAR_7->divisor2),
            &(VAR_11->convert_arg),
            VAR_11->flags & VAR_5);
  VAR_12 += (VAR_19 != VAR_11->convert_arg);
 }
 if (VAR_12)
  return 4;


 if (VAR_11->chanlist) {
  VAR_14 = FUNC_1(VAR_11->chanlist[0]);
  VAR_15 = FUNC_0(VAR_11->chanlist[0]);
  for (VAR_16 = 1; VAR_16 < VAR_11->chanlist_len; VAR_16++) {
   if (FUNC_0(VAR_11->chanlist[VAR_16]) !=
       (VAR_15 + VAR_16) % VAR_10->n_chan) {
    FUNC_2(VAR_9,
          "entries in chanlist must be consecutive channels, counting upwards\n");
    VAR_12++;
   }
   if (FUNC_1(VAR_11->chanlist[VAR_16]) != VAR_14) {
    FUNC_2(VAR_9,
          "entries in chanlist must all have the same gain\n");
    VAR_12++;
   }
  }
 }
 if (VAR_12)
  return 5;

 return 0;
}
