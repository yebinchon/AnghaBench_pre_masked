
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int minor; } ;
struct TYPE_4__ {TYPE_1__* ao_context; } ;
struct TYPE_3__ {unsigned int mirror; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
          struct comedi_subdevice *VAR_3,
          struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_4->chanspec);

 if (VAR_4->n == 0) {
  return 0;
 } else if (VAR_4->n > 1) {
  FUNC_1
      ("comedi%d: me4000: me4000_ao_insn_read(): Invalid instruction length\n",
       VAR_2->minor);
  return -VAR_0;
 }

 VAR_5[0] = VAR_1->ao_context[VAR_6].mirror;

 return 1;
}
