
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mite; } ;
struct TYPE_3__ {scalar_t__ daq_io_addr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;



 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_4,
     struct comedi_subdevice *VAR_5,
     struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 if (VAR_6->n != 1)
  return -VAR_2;
 switch (VAR_7[0]) {
 case 129:
  VAR_5->io_bits |= 1 << FUNC_0(VAR_6->chanspec);
  break;
 case 130:
  VAR_5->io_bits &= ~(1 << FUNC_0(VAR_6->chanspec));
  break;
 case 128:
  VAR_7[1] =
      (VAR_5->
       io_bits & (1 << FUNC_0(VAR_6->chanspec))) ? VAR_1 :
      VAR_0;
  return VAR_6->n;
  break;
 default:
  return -VAR_2;
 }
 FUNC_2(VAR_5->io_bits, VAR_3->mite->daq_io_addr + FUNC_1(0));

 return 1;
}
