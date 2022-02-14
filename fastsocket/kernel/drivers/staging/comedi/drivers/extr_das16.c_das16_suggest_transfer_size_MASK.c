
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct comedi_cmd {scalar_t__ convert_src; int convert_arg; scalar_t__ scan_begin_src; int scan_begin_arg; int chanlist_len; int flags; scalar_t__ stop_src; } ;
struct TYPE_2__ {unsigned int adc_byte_count; scalar_t__ timer_mode; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 unsigned int VAR_5 ;

__attribute__((used)) static unsigned int FUNC_0(struct comedi_device *VAR_6,
      struct comedi_cmd VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9;




 if (VAR_4->timer_mode)
  return VAR_0;



 if (VAR_7.convert_src == VAR_2)
  VAR_9 = 1000000000 / VAR_7.convert_arg;
 else if (VAR_7.scan_begin_src == VAR_2)
  VAR_9 = (1000000000 / VAR_7.scan_begin_arg) * VAR_7.chanlist_len;

 else
  VAR_9 = 0xffffffff;

 if (VAR_7.flags & VAR_3) {
  VAR_8 = VAR_5 * VAR_7.chanlist_len;
 } else {

  VAR_8 = (VAR_9 / 3) * VAR_5;
 }


 if (VAR_8 > VAR_0)
  VAR_8 = VAR_0 - VAR_0 % VAR_5;
 else if (VAR_8 < VAR_5)
  VAR_8 = VAR_5;

 if (VAR_7.stop_src == VAR_1 && VAR_8 > VAR_4->adc_byte_count)
  VAR_8 = VAR_4->adc_byte_count;

 return VAR_8;
}
