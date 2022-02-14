
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int* caldac_state; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_device*,int,unsigned int) ;
 TYPE_1__* FUNC_2 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_0,
       struct comedi_subdevice *VAR_1,
       struct comedi_insn *VAR_2, unsigned int *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2->chanspec);



 if (FUNC_2(VAR_0)->caldac_state[VAR_4] == VAR_3[0])
  return 1;

 FUNC_1(VAR_0, VAR_4, VAR_3[0]);

 return 1;
}
