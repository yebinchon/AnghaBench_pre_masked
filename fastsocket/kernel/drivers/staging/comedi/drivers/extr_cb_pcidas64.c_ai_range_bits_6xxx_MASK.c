
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_krange {int max; scalar_t__ min; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ai_range_table; } ;
struct TYPE_3__ {struct comedi_krange* range; } ;


 TYPE_2__* FUNC_0 (struct comedi_device const*) ;
 int FUNC_1 (struct comedi_device const*,char*) ;

__attribute__((used)) static unsigned int FUNC_2(const struct comedi_device *VAR_0,
           unsigned int VAR_1)
{
 const struct comedi_krange *VAR_2 =
     &FUNC_0(VAR_0)->ai_range_table->range[VAR_1];
 unsigned int VAR_3 = 0;

 switch (VAR_2->max) {
 case 10000000:
  VAR_3 = 0x000;
  break;
 case 5000000:
  VAR_3 = 0x100;
  break;
 case 2000000:
 case 2500000:
  VAR_3 = 0x200;
  break;
 case 1000000:
 case 1250000:
  VAR_3 = 0x300;
  break;
 case 500000:
  VAR_3 = 0x400;
  break;
 case 200000:
 case 250000:
  VAR_3 = 0x500;
  break;
 case 100000:
  VAR_3 = 0x600;
  break;
 case 50000:
  VAR_3 = 0x700;
  break;
 default:
  FUNC_1(VAR_0, "bug! in ai_range_bits_6xxx");
  break;
 }
 if (VAR_2->min == 0)
  VAR_3 += 0x900;
 return VAR_3;
}
