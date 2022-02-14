
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int clock_ns; unsigned int pwm_up_count; unsigned int pwm_down_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 TYPE_1__* VAR_4 ;
 int FUNC_0 (struct comedi_device*,unsigned int*) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_5,
         struct comedi_subdevice *VAR_6,
         struct comedi_insn *VAR_7, unsigned int *VAR_8)
{
 unsigned VAR_9, VAR_10;
 switch (VAR_8[0]) {
 case 131:
  switch (VAR_8[1]) {
  case 129:
   VAR_9 =
       (VAR_8[2] +
        VAR_4->clock_ns / 2) / VAR_4->clock_ns;
   break;
  case 130:
   VAR_9 = VAR_8[2] / VAR_4->clock_ns;
   break;
  case 128:
   VAR_9 =
       (VAR_8[2] + VAR_4->clock_ns -
        1) / VAR_4->clock_ns;
   break;
  default:
   return -VAR_3;
   break;
  }
  switch (VAR_8[3]) {
  case 129:
   VAR_10 =
       (VAR_8[4] +
        VAR_4->clock_ns / 2) / VAR_4->clock_ns;
   break;
  case 130:
   VAR_10 = VAR_8[4] / VAR_4->clock_ns;
   break;
  case 128:
   VAR_10 =
       (VAR_8[4] + VAR_4->clock_ns -
        1) / VAR_4->clock_ns;
   break;
  default:
   return -VAR_3;
   break;
  }
  if (VAR_9 * VAR_4->clock_ns != VAR_8[2] ||
      VAR_10 * VAR_4->clock_ns != VAR_8[4]) {
   VAR_8[2] = VAR_9 * VAR_4->clock_ns;
   VAR_8[4] = VAR_10 * VAR_4->clock_ns;
   return -VAR_2;
  }
  FUNC_1(VAR_9, VAR_0);
  VAR_4->pwm_up_count = VAR_9;
  FUNC_1(VAR_10, VAR_1);
  VAR_4->pwm_down_count = VAR_10;
  return 5;
  break;
 case 132:
  return FUNC_0(VAR_5, VAR_8);
 default:
  return -VAR_3;
  break;
 }
 return 0;
}
