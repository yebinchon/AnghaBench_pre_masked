
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int WRDOut; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_device*,int ,int) ;
 int VAR_0 ;

 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
    struct comedi_subdevice *VAR_3,
    struct comedi_insn *VAR_4, unsigned int *VAR_5)
{

 switch (VAR_5[0]) {
 case 128:
  VAR_5[1] =
      (VAR_3->
       io_bits & (1 << FUNC_0(VAR_4->chanspec))) ? 129 :
      130;
  return VAR_4->n;
  break;
 case 130:
  VAR_3->io_bits &= ~(1 << FUNC_0(VAR_4->chanspec));
  break;
 case 129:
  VAR_3->io_bits |= 1 << FUNC_0(VAR_4->chanspec);
  break;
 default:
  return -VAR_0;
  break;
 }
 FUNC_1(VAR_2, VAR_1->WRDOut, VAR_3->io_bits);

 return 1;
}
