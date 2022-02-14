
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int dio_config_output; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct comedi_device*,unsigned int*) ;
 TYPE_1__* FUNC_1 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3,
      struct comedi_subdevice *VAR_4, struct comedi_insn *VAR_5,
      unsigned int *VAR_6)
{
 switch (VAR_6[0]) {
 case 129:
  FUNC_1(VAR_3)->dio_config_output = 1;
  return VAR_5->n;
  break;
 case 130:
  FUNC_1(VAR_3)->dio_config_output = 0;
  return VAR_5->n;
  break;
 case 128:
  VAR_6[1] =
      FUNC_1(VAR_3)->dio_config_output ? VAR_1 : VAR_0;
  return VAR_5->n;
  break;
 case 131:
  return FUNC_0(VAR_3, VAR_6);
  break;
 default:
  break;
 }

 return -VAR_2;
}
