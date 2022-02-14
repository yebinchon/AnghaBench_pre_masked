
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


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_2 ;



 TYPE_1__* VAR_3 ;
 int FUNC_2 (struct comedi_device*,unsigned int*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_4,
      struct comedi_subdevice *VAR_5,
      struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 unsigned VAR_8, VAR_9;
 switch (VAR_7[0]) {
 case 131:
  switch (VAR_7[1]) {
  case 129:
   VAR_8 =
       (VAR_7[2] +
        VAR_3->clock_ns / 2) / VAR_3->clock_ns;
   break;
  case 130:
   VAR_8 = VAR_7[2] / VAR_3->clock_ns;
   break;
  case 128:
   VAR_8 =
       (VAR_7[2] + VAR_3->clock_ns -
        1) / VAR_3->clock_ns;
   break;
  default:
   return -VAR_1;
   break;
  }
  switch (VAR_7[3]) {
  case 129:
   VAR_9 =
       (VAR_7[4] +
        VAR_3->clock_ns / 2) / VAR_3->clock_ns;
   break;
  case 130:
   VAR_9 = VAR_7[4] / VAR_3->clock_ns;
   break;
  case 128:
   VAR_9 =
       (VAR_7[4] + VAR_3->clock_ns -
        1) / VAR_3->clock_ns;
   break;
  default:
   return -VAR_1;
   break;
  }
  if (VAR_8 * VAR_3->clock_ns != VAR_7[2] ||
      VAR_9 * VAR_3->clock_ns != VAR_7[4]) {
   VAR_7[2] = VAR_8 * VAR_3->clock_ns;
   VAR_7[4] = VAR_9 * VAR_3->clock_ns;
   return -VAR_0;
  }
  FUNC_3(FUNC_0(VAR_8) |
     FUNC_1(VAR_9),
     VAR_2);
  VAR_3->pwm_up_count = VAR_8;
  VAR_3->pwm_down_count = VAR_9;
  return 5;
  break;
 case 132:
  return FUNC_2(VAR_4, VAR_7);
  break;
 default:
  return -VAR_1;
  break;
 }
 return 0;
}
