
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ dio_config_output; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_1__* FUNC_1 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2)
{
 if (FUNC_1(VAR_1)->dio_config_output) {
  return -VAR_0;
 } else
  return FUNC_0(VAR_1, VAR_2);
}
