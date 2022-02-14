
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,unsigned char*,unsigned char*) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1,
    struct comedi_subdevice *VAR_2,
    struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 int VAR_5;
 unsigned char VAR_6[4] = {
  0x00,
  0x00,
  VAR_0,
  0x00
 };
 unsigned char VAR_7[4];

 if (VAR_4[0]) {
  VAR_2->state &= ~VAR_4[0];
  VAR_2->state |= (VAR_4[0] & VAR_4[1]);
  VAR_6[0] = VAR_2->state;
  VAR_5 = FUNC_0(VAR_1, VAR_6, VAR_7);
  if (!VAR_5)
   return VAR_5;
 }
 VAR_4[1] = VAR_2->state;

 return 2;
}
