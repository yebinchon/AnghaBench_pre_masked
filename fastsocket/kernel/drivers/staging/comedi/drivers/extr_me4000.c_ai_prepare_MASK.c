
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {scalar_t__ start_src; scalar_t__ scan_begin_src; scalar_t__ convert_src; scalar_t__ stop_src; unsigned long chanlist_len; unsigned long stop_arg; scalar_t__ scan_end_src; unsigned long scan_end_arg; } ;
struct TYPE_3__ {int ctrl_reg; int sample_counter_reg; } ;
struct TYPE_4__ {TYPE_1__ ai_context; } ;


 int FUNC_0 (char*) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_cmd*) ;
 int FUNC_2 (struct comedi_device*,unsigned int,unsigned int,unsigned int) ;
 TYPE_2__* VAR_12 ;
 int FUNC_3 (struct comedi_device*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_13,
        struct comedi_subdevice *VAR_14,
        struct comedi_cmd *VAR_15,
        unsigned int VAR_16,
        unsigned int VAR_17, unsigned int VAR_18)
{

 unsigned long VAR_19 = 0;

 FUNC_0("In ai_prepare()\n");


 FUNC_2(VAR_13, VAR_16, VAR_17, VAR_18);


 FUNC_3(VAR_13, VAR_19, VAR_12->ai_context.ctrl_reg);


 if ((VAR_15->start_src == VAR_8 &&
      VAR_15->scan_begin_src == VAR_11 &&
      VAR_15->convert_src == VAR_11) ||
     (VAR_15->start_src == VAR_8 &&
      VAR_15->scan_begin_src == VAR_9 &&
      VAR_15->convert_src == VAR_11)) {
  VAR_19 = VAR_4 |
      VAR_0 |
      VAR_1;
 } else if (VAR_15->start_src == VAR_8 &&
     VAR_15->scan_begin_src == VAR_8 &&
     VAR_15->convert_src == VAR_11) {
  VAR_19 = VAR_5 |
      VAR_0 |
      VAR_1;
 } else if (VAR_15->start_src == VAR_8 &&
     VAR_15->scan_begin_src == VAR_8 &&
     VAR_15->convert_src == VAR_8) {
  VAR_19 = VAR_3 |
      VAR_4 |
      VAR_0 |
      VAR_1;
 } else {
  VAR_19 = VAR_3 |
      VAR_0 |
      VAR_1;
 }


 if (VAR_15->stop_src == VAR_7) {
  FUNC_3(VAR_13, VAR_15->chanlist_len * VAR_15->stop_arg,
       VAR_12->ai_context.sample_counter_reg);
  VAR_19 |= VAR_2 | VAR_6;
 } else if (VAR_15->stop_src == VAR_10 &&
     VAR_15->scan_end_src == VAR_7) {
  FUNC_3(VAR_13, VAR_15->scan_end_arg,
       VAR_12->ai_context.sample_counter_reg);
  VAR_19 |= VAR_2 | VAR_6;
 } else {
  VAR_19 |= VAR_2;
 }


 FUNC_3(VAR_13, VAR_19, VAR_12->ai_context.ctrl_reg);


 FUNC_1(VAR_13, VAR_14, VAR_15);

 return 0;
}
