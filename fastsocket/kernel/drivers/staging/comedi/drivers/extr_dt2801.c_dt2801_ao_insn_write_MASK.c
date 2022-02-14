
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int* ao_readback; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*,size_t) ;
 int FUNC_3 (struct comedi_device*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2,
    struct comedi_subdevice *VAR_3,
    struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 FUNC_1(VAR_2, VAR_0);
 FUNC_2(VAR_2, FUNC_0(VAR_4->chanspec));
 FUNC_3(VAR_2, VAR_5[0]);

 VAR_1->ao_readback[FUNC_0(VAR_4->chanspec)] = VAR_5[0];

 return 1;
}
