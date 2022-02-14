
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_3__ {unsigned int divisor; unsigned int chanspec; } ;
struct TYPE_4__ {TYPE_1__ ext_clock; } ;



 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_2,
           unsigned int *VAR_3)
{
 unsigned int VAR_4 = VAR_3[4];
 int VAR_5 = 0;

 if (VAR_4 < 2) {
  VAR_4 = 2;
  VAR_5 = -VAR_0;
 }

 switch (VAR_3[1]) {
 case 128:
  FUNC_0(VAR_2)->ext_clock.divisor = VAR_4;
  FUNC_0(VAR_2)->ext_clock.chanspec = VAR_3[2];
  break;
 default:
  return -VAR_1;
  break;
 }

 VAR_3[4] = VAR_4;

 return VAR_5 ? VAR_5 : 5;
}
