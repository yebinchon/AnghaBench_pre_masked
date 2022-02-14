
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int config_bits; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_2,
         unsigned int VAR_3,
         unsigned int VAR_4)
{
 if (VAR_3 + VAR_4 > 4)
  return -1;

 VAR_1->config_bits &= ~VAR_0;

 switch (VAR_4) {
 case 1:
  VAR_1->config_bits |= FUNC_0(0x4 | VAR_3);
  break;
 case 2:
  if (VAR_3 == 0) {
   VAR_1->config_bits |= FUNC_0(0x2);
  } else if (VAR_3 == 2) {
   VAR_1->config_bits |= FUNC_0(0x3);
  } else {
   return -1;
  }
  break;
 case 4:
  VAR_1->config_bits |= FUNC_0(0x1);
  break;
 default:
  return -1;
  break;
 }

 return 0;
}
