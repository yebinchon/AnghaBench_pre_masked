
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int s526_ai_config; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4,
          struct comedi_subdevice *VAR_5,
          struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 int VAR_8 = -VAR_0;

 if (VAR_6->n < 1)
  return VAR_8;

 VAR_8 = VAR_6->n;
 FUNC_1(VAR_1, FUNC_0(VAR_2));

 VAR_3->s526_ai_config = (VAR_7[0] & 0x3FF) << 5;
 if (VAR_7[1] > 0)
  VAR_3->s526_ai_config |= 0x8000;

 VAR_3->s526_ai_config |= 0x0001;

 return VAR_8;
}
