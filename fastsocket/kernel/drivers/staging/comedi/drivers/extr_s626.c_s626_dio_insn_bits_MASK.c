
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {unsigned int io_bits; unsigned int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int minor; } ;
struct TYPE_2__ {int RDDIn; int WRDOut; } ;


 unsigned int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (struct comedi_device*,int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3,
         struct comedi_subdevice *VAR_4,
         struct comedi_insn *VAR_5, unsigned int *VAR_6)
{


 if (VAR_5->n == 0)
  return 0;

 if (VAR_5->n != 2) {
  FUNC_2
      ("comedi%d: s626: s626_dio_insn_bits(): Invalid instruction length\n",
       VAR_3->minor);
  return -VAR_0;
 }







 if (VAR_6[0]) {

  if ((VAR_4->io_bits & VAR_6[0]) != VAR_6[0])
   return -VAR_1;

  VAR_4->state &= ~VAR_6[0];
  VAR_4->state |= VAR_6[0] & VAR_6[1];



  FUNC_1(VAR_3, VAR_2->WRDOut, VAR_4->state);
 }
 VAR_6[1] = FUNC_0(VAR_3, VAR_2->RDDIn);

 return 2;
}
