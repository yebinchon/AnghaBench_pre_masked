
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (int ,struct comedi_insn*,unsigned int*) ;
 int FUNC_1 (struct comedi_subdevice*) ;

__attribute__((used)) static int
FUNC_2(struct comedi_device *VAR_0, struct comedi_subdevice *VAR_1,
    struct comedi_insn *VAR_2, unsigned int *VAR_3)
{
 return FUNC_0(FUNC_1(VAR_1), VAR_2, VAR_3);
}
