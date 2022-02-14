
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1,
    struct comedi_subdevice *VAR_2,
    struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 unsigned int VAR_5;





 VAR_4[0] &= VAR_0;

 VAR_5 = VAR_2->state;
 VAR_5 &= ~VAR_4[0];
 VAR_5 |= VAR_4[0] & VAR_4[1];
 VAR_2->state = VAR_5;

 FUNC_0(VAR_5);

 VAR_4[1] = VAR_5;

 return 2;
}
