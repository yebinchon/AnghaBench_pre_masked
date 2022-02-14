
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int dio_control; int (* stc_writew ) (struct comedi_device*,int ,int ) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;



 TYPE_1__* VAR_5 ;
 int FUNC_2 (char*,int,unsigned int) ;
 int FUNC_3 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_6,
         struct comedi_subdevice *VAR_7,
         struct comedi_insn *VAR_8, unsigned int *VAR_9)
{




 switch (VAR_9[0]) {
 case 129:
  VAR_7->io_bits |= 1 << FUNC_0(VAR_8->chanspec);
  break;
 case 130:
  VAR_7->io_bits &= ~(1 << FUNC_0(VAR_8->chanspec));
  break;
 case 128:
  VAR_9[1] =
      (VAR_7->
       io_bits & (1 << FUNC_0(VAR_8->chanspec))) ? VAR_1 :
      VAR_0;
  return VAR_8->n;
  break;
 default:
  return -VAR_4;
 }

 VAR_5->dio_control &= ~VAR_3;
 VAR_5->dio_control |= FUNC_1(VAR_7->io_bits);
 VAR_5->stc_writew(VAR_6, VAR_5->dio_control, VAR_2);

 return 1;
}
