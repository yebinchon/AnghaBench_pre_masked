
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {int type; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_6__ {unsigned int* dio_direction; TYPE_1__* mite; } ;
struct TYPE_5__ {unsigned int base_port; } ;
struct TYPE_4__ {scalar_t__ daq_io_addr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;




 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;
 unsigned int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (struct comedi_device*) ;
 TYPE_2__* FUNC_5 (struct comedi_subdevice*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_4,
       struct comedi_subdevice *VAR_5,
       struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 unsigned VAR_8;

 if (VAR_6->n < 1)
  return -VAR_3;
 VAR_8 = FUNC_5(VAR_5)->base_port +
     FUNC_3(FUNC_0(VAR_6->chanspec));
 switch (VAR_7[0]) {
 case 128:
  return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);
  break;
 case 130:
  if (VAR_5->type != VAR_2)
   return -VAR_3;
  FUNC_4(VAR_4)->dio_direction[VAR_8] = VAR_1;
  FUNC_6(0, FUNC_4(VAR_4)->mite->daq_io_addr + FUNC_1(VAR_8));
  return 1;
  break;
 case 131:
  if (VAR_5->type != VAR_2)
   return -VAR_3;
  FUNC_4(VAR_4)->dio_direction[VAR_8] = VAR_0;
  FUNC_6(1, FUNC_4(VAR_4)->mite->daq_io_addr + FUNC_1(VAR_8));
  return 1;
  break;
 case 129:
  if (VAR_5->type != VAR_2)
   return -VAR_3;
  VAR_7[1] = FUNC_4(VAR_4)->dio_direction[VAR_8];
  return VAR_6->n;
  break;
 default:
  break;
 }
 return -VAR_3;
}
