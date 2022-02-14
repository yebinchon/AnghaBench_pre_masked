
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int scan_begin_src; unsigned int scan_begin_arg; } ;
struct TYPE_3__ {unsigned int divisor; } ;
struct TYPE_4__ {TYPE_1__ ext_clock; } ;


 unsigned int VAR_0 ;


 int FUNC_0 (struct comedi_device*,char*) ;
 TYPE_2__* FUNC_1 (struct comedi_device*) ;

__attribute__((used)) static uint32_t FUNC_2(struct comedi_device *VAR_1,
     struct comedi_cmd *VAR_2)
{
 unsigned int VAR_3;

 switch (VAR_2->scan_begin_src) {
 case 128:
  VAR_3 = VAR_2->scan_begin_arg / VAR_0;
  break;
 case 129:
  VAR_3 = FUNC_1(VAR_1)->ext_clock.divisor;
  break;
 default:
  FUNC_0(VAR_1, "bug! failed to set ai pacing!");
  VAR_3 = 1000;
  break;
 }


 return VAR_3 - 2;
}
