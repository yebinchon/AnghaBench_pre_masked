
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_device*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
       struct comedi_subdevice *VAR_1,
       struct comedi_insn *VAR_2, unsigned int *VAR_3)
{
 uint8_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, FUNC_0(VAR_2->chanspec), &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_3[0] = VAR_4;

 return 1;
}
