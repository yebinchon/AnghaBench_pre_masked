
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_2,
      struct comedi_subdevice *VAR_3, struct comedi_insn *VAR_4,
      unsigned int *VAR_5)
{
 if (VAR_5[0]) {
  VAR_3->state &= ~VAR_5[0];
  VAR_3->state |= (VAR_5[0] & VAR_5[1]);

  if (VAR_5[0] & 0xff)
   FUNC_0(1, VAR_1, VAR_3->state & 0xff,
          VAR_0);
 }

 VAR_5[1] = VAR_3->state & 0xff;
 VAR_5[1] |= FUNC_0(0, VAR_1, 0, VAR_0) << 8;

 return 2;
}
