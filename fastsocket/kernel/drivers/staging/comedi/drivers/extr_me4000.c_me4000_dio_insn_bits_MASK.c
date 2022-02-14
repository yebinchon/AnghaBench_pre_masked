
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {unsigned int io_bits; unsigned int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int minor; } ;
struct TYPE_3__ {int port_3_reg; int port_2_reg; int port_1_reg; int port_0_reg; } ;
struct TYPE_4__ {TYPE_1__ dio_context; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*,int,int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_3,
    struct comedi_subdevice *VAR_4,
    struct comedi_insn *VAR_5, unsigned int *VAR_6)
{

 FUNC_0("In me4000_dio_insn_bits()\n");


 if (VAR_5->n == 0)
  return 0;

 if (VAR_5->n != 2) {
  FUNC_3
      ("comedi%d: me4000: me4000_dio_insn_bits(): Invalid instruction length\n",
       VAR_3->minor);
  return -VAR_0;
 }







 if (VAR_6[0]) {

  if ((VAR_4->io_bits & VAR_6[0]) != VAR_6[0])
   return -VAR_1;

  VAR_4->state &= ~VAR_6[0];
  VAR_4->state |= VAR_6[0] & VAR_6[1];


  FUNC_2(VAR_3, (VAR_4->state >> 0) & 0xFF,
       VAR_2->dio_context.port_0_reg);
  FUNC_2(VAR_3, (VAR_4->state >> 8) & 0xFF,
       VAR_2->dio_context.port_1_reg);
  FUNC_2(VAR_3, (VAR_4->state >> 16) & 0xFF,
       VAR_2->dio_context.port_2_reg);
  FUNC_2(VAR_3, (VAR_4->state >> 24) & 0xFF,
       VAR_2->dio_context.port_3_reg);
 }



 VAR_6[1] =
     ((FUNC_1(VAR_3, VAR_2->dio_context.port_0_reg) & 0xFF) << 0) |
     ((FUNC_1(VAR_3, VAR_2->dio_context.port_1_reg) & 0xFF) << 8) |
     ((FUNC_1(VAR_3, VAR_2->dio_context.port_2_reg) & 0xFF) << 16) |
     ((FUNC_1(VAR_3, VAR_2->dio_context.port_3_reg) & 0xFF) << 24);

 return 2;
}
