
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int clock_ns; } ;





 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct comedi_device *VAR_1, unsigned VAR_2,
     int VAR_3)
{
 int VAR_4;
 switch (VAR_3) {
 case 129:
 default:
  VAR_4 = (VAR_2 + VAR_0->clock_ns / 2) / VAR_0->clock_ns;
  break;
 case 130:
  VAR_4 = (VAR_2) / VAR_0->clock_ns;
  break;
 case 128:
  VAR_4 = (VAR_2 + VAR_0->clock_ns - 1) / VAR_0->clock_ns;
  break;
 }
 return VAR_4 - 1;
}
