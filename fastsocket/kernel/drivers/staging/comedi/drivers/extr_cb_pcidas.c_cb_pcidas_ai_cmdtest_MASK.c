
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int n_chan; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; scalar_t__ start_arg; int scan_begin_arg; int chanlist_len; int convert_arg; int scan_end_arg; scalar_t__ stop_arg; int flags; int * chanlist; } ;
struct TYPE_4__ {int divisor2; int divisor1; } ;
struct TYPE_3__ {int ai_speed; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_8 ;
 int FUNC_3 (int ,int *,int *,int*,int) ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_10,
    struct comedi_subdevice *VAR_11,
    struct comedi_cmd *VAR_12)
{
 int VAR_13 = 0;
 int VAR_14;
 int VAR_15, VAR_16, VAR_17;
 VAR_14 = VAR_12->start_src;
 VAR_12->start_src &= VAR_5 | VAR_2;
 if (!VAR_12->start_src || VAR_14 != VAR_12->start_src)
  VAR_13++;

 VAR_14 = VAR_12->scan_begin_src;
 VAR_12->scan_begin_src &= VAR_3 | VAR_7 | VAR_2;
 if (!VAR_12->scan_begin_src || VAR_14 != VAR_12->scan_begin_src)
  VAR_13++;

 VAR_14 = VAR_12->convert_src;
 VAR_12->convert_src &= VAR_7 | VAR_5 | VAR_2;
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



 if (VAR_12->start_src != VAR_5 && VAR_12->start_src != VAR_2)
  VAR_13++;
 if (VAR_12->scan_begin_src != VAR_3 &&
     VAR_12->scan_begin_src != VAR_7 &&
     VAR_12->scan_begin_src != VAR_2)
  VAR_13++;
 if (VAR_12->convert_src != VAR_7 &&
     VAR_12->convert_src != VAR_2 && VAR_12->convert_src != VAR_5)
  VAR_13++;
 if (VAR_12->stop_src != VAR_1 && VAR_12->stop_src != VAR_4)
  VAR_13++;


 if (VAR_12->scan_begin_src == VAR_3 && VAR_12->convert_src == VAR_5)
  VAR_13++;
 if (VAR_12->scan_begin_src != VAR_3 && VAR_12->convert_src != VAR_5)
  VAR_13++;
 if (VAR_12->start_src == VAR_2 &&
     (VAR_12->convert_src == VAR_2 || VAR_12->scan_begin_src == VAR_2))
  VAR_13++;

 if (VAR_13)
  return 2;



 if (VAR_12->start_arg != 0) {
  VAR_12->start_arg = 0;
  VAR_13++;
 }

 if (VAR_12->scan_begin_src == VAR_7) {
  if (VAR_12->scan_begin_arg <
      VAR_9->ai_speed * VAR_12->chanlist_len) {
   VAR_12->scan_begin_arg =
       VAR_9->ai_speed * VAR_12->chanlist_len;
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
 if (VAR_12->stop_src == VAR_4) {

  if (VAR_12->stop_arg != 0) {
   VAR_12->stop_arg = 0;
   VAR_13++;
  }
 }

 if (VAR_13)
  return 3;



 if (VAR_12->scan_begin_src == VAR_7) {
  VAR_14 = VAR_12->scan_begin_arg;
  FUNC_3(VAR_0,
            &(VAR_8->divisor1),
            &(VAR_8->divisor2),
            &(VAR_12->scan_begin_arg),
            VAR_12->flags & VAR_6);
  if (VAR_14 != VAR_12->scan_begin_arg)
   VAR_13++;
 }
 if (VAR_12->convert_src == VAR_7) {
  VAR_14 = VAR_12->convert_arg;
  FUNC_3(VAR_0,
            &(VAR_8->divisor1),
            &(VAR_8->divisor2),
            &(VAR_12->convert_arg),
            VAR_12->flags & VAR_6);
  if (VAR_14 != VAR_12->convert_arg)
   VAR_13++;
 }

 if (VAR_13)
  return 4;


 if (VAR_12->chanlist) {
  VAR_16 = FUNC_1(VAR_12->chanlist[0]);
  VAR_17 = FUNC_0(VAR_12->chanlist[0]);
  for (VAR_15 = 1; VAR_15 < VAR_12->chanlist_len; VAR_15++) {
   if (FUNC_0(VAR_12->chanlist[VAR_15]) !=
       (VAR_17 + VAR_15) % VAR_11->n_chan) {
    FUNC_2(VAR_10,
          "entries in chanlist must be consecutive channels, counting upwards\n");
    VAR_13++;
   }
   if (FUNC_1(VAR_12->chanlist[VAR_15]) != VAR_16) {
    FUNC_2(VAR_10,
          "entries in chanlist must all have the same gain\n");
    VAR_13++;
   }
  }
 }

 if (VAR_13)
  return 5;

 return 0;
}
