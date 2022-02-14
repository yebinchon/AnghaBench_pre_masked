
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int reg_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_5,
       struct comedi_subdevice *VAR_6,
       struct comedi_insn *VAR_7, unsigned int *VAR_8)
{
 if ((VAR_3.reg_type & VAR_4) == 0) {
  return -VAR_0;
 }
 if (VAR_8[0]) {
  VAR_6->state &= ~VAR_8[0];
  VAR_6->state |= (VAR_8[0] & VAR_8[1]);
  FUNC_1(VAR_6->state, VAR_2);
 }
 VAR_8[1] = FUNC_0(VAR_1);
 return 2;
}
