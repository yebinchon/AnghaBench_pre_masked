
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; scalar_t__ start_arg; int convert_arg; int chanlist_len; int scan_end_arg; int stop_arg; int flags; int * chanlist; } ;
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
 int VAR_8 ;
 int FUNC_2 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_9 ;
 int FUNC_3 (int ,int *,int *,int*,int) ;
 TYPE_1__* VAR_10 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_11,
    struct comedi_subdevice *VAR_12,
    struct comedi_cmd *VAR_13)
{
 int VAR_14 = 0;
 int VAR_15;
 int VAR_16, VAR_17;
 int VAR_18;



 VAR_15 = VAR_13->start_src;
 VAR_13->start_src &= VAR_6 | VAR_3;
 if (!VAR_13->start_src || VAR_15 != VAR_13->start_src)
  VAR_14++;

 VAR_15 = VAR_13->scan_begin_src;
 VAR_13->scan_begin_src &= VAR_4;
 if (!VAR_13->scan_begin_src || VAR_15 != VAR_13->scan_begin_src)
  VAR_14++;

 VAR_15 = VAR_13->convert_src;
 VAR_13->convert_src &= VAR_8 | VAR_3;
 if (!VAR_13->convert_src || VAR_15 != VAR_13->convert_src)
  VAR_14++;

 VAR_15 = VAR_13->scan_end_src;
 VAR_13->scan_end_src &= VAR_2;
 if (!VAR_13->scan_end_src || VAR_15 != VAR_13->scan_end_src)
  VAR_14++;

 VAR_15 = VAR_13->stop_src;
 VAR_13->stop_src &= VAR_2 | VAR_5;
 if (!VAR_13->stop_src || VAR_15 != VAR_13->stop_src)
  VAR_14++;

 if (VAR_14)
  return 1;



 if (VAR_13->start_src != VAR_6 && VAR_13->start_src != VAR_3)
  VAR_14++;
 if (VAR_13->convert_src != VAR_8 && VAR_13->convert_src != VAR_3)
  VAR_14++;
 if (VAR_13->stop_src != VAR_2 && VAR_13->stop_src != VAR_5)
  VAR_14++;

 if (VAR_14)
  return 2;



 if (VAR_13->start_arg != 0) {
  VAR_13->start_arg = 0;
  VAR_14++;
 }
 if (VAR_13->convert_src == VAR_8) {
  if (VAR_13->convert_arg < VAR_10->ai_speed) {
   VAR_13->convert_arg = VAR_10->ai_speed;
   VAR_14++;
  }
 }
 if (!VAR_13->chanlist_len) {
  VAR_13->chanlist_len = 1;
  VAR_14++;
 }
 if (VAR_13->scan_end_arg != VAR_13->chanlist_len) {
  VAR_13->scan_end_arg = VAR_13->chanlist_len;
  VAR_14++;
 }
 if (VAR_13->stop_src == VAR_2) {
  if (!VAR_13->stop_arg) {
   VAR_13->stop_arg = 1;
   VAR_14++;
  }
 } else {
  if (VAR_13->stop_arg != 0) {
   VAR_13->stop_arg = 0;
   VAR_14++;
  }
 }

 if (VAR_14)
  return 3;



 if (VAR_13->convert_src == VAR_8) {
  VAR_15 = VAR_13->convert_arg;

  FUNC_3(VAR_1, &(VAR_9->divisor1),
            &(VAR_9->divisor2),
            &(VAR_13->convert_arg),
            VAR_13->flags & VAR_7);
  if (VAR_15 != VAR_13->convert_arg)
   VAR_14++;
 }

 if (VAR_14)
  return 4;


 if (VAR_13->chanlist) {
  VAR_16 = FUNC_1(VAR_13->chanlist[0]);
  VAR_17 = FUNC_0(VAR_13->chanlist[0]);
  for (VAR_18 = 1; VAR_18 < VAR_13->chanlist_len; VAR_18++) {
   if (FUNC_0(VAR_13->chanlist[VAR_18]) !=
       (VAR_17 + VAR_18) % VAR_0) {
    FUNC_2(VAR_11,
          "entries in chanlist must be consecutive channels, counting upwards\n");
    VAR_14++;
   }
   if (FUNC_1(VAR_13->chanlist[VAR_18]) != VAR_16) {
    FUNC_2(VAR_11,
          "entries in chanlist must all have the same gain\n");
    VAR_14++;
   }
  }
 }

 if (VAR_14)
  return 5;

 return 0;
}
