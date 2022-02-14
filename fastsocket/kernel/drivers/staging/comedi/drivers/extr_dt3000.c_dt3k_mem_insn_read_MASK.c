
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ io_addr; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (struct comedi_device*,int ) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_4,
         struct comedi_subdevice *VAR_5,
         struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 unsigned int VAR_8 = FUNC_0(VAR_6->chanspec);
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_6->n; VAR_9++) {
  FUNC_4(VAR_2, VAR_3->io_addr + VAR_1);
  FUNC_4(VAR_8, VAR_3->io_addr + FUNC_1(0));
  FUNC_4(1, VAR_3->io_addr + FUNC_1(1));

  FUNC_2(VAR_4, VAR_0);

  VAR_7[VAR_9] = FUNC_3(VAR_3->io_addr + FUNC_1(2));
 }

 return VAR_9;
}
