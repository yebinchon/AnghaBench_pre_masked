
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_6__ {int ao_fifo_depth; } ;
struct TYPE_5__ {TYPE_1__* mite; } ;
struct TYPE_4__ {unsigned int fifo_size; } ;




 int VAR_0 ;

 TYPE_3__ VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct comedi_device *VAR_3,
        struct comedi_subdevice *VAR_4,
        struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 switch (VAR_6[0]) {
 case 128:
  switch (VAR_6[1]) {
  case 129:
   VAR_6[2] = 1 + VAR_1.ao_fifo_depth * sizeof(short);
   if (VAR_2->mite)
    VAR_6[2] += VAR_2->mite->fifo_size;
   break;
  case 130:
   VAR_6[2] = 0;
   break;
  default:
   return -VAR_0;
   break;
  }
  return 0;
 default:
  break;
 }

 return -VAR_0;
}
