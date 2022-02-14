
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int reg_type; int ai_speed; } ;


 TYPE_1__ VAR_0 ;



__attribute__((used)) static unsigned FUNC_0(struct comedi_device *VAR_1,
      unsigned VAR_2)
{
 switch (VAR_0.reg_type) {
 case 129:
 case 128:

  return VAR_0.ai_speed;
  break;
 default:

  break;
 };
 return VAR_0.ai_speed * VAR_2;
}
