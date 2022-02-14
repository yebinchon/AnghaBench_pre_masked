
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int* ao_readback; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (unsigned short,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4,
    struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 int VAR_7;
 int VAR_8 = FUNC_1(VAR_5->chanspec);
 unsigned short VAR_9;


 VAR_9 = VAR_8 << 1;

 FUNC_2(VAR_9, FUNC_0(VAR_1));



 for (VAR_7 = 0; VAR_7 < VAR_5->n; VAR_7++) {


  FUNC_2(VAR_6[VAR_7], FUNC_0(VAR_0));
  VAR_2->ao_readback[VAR_8] = VAR_6[VAR_7];

  FUNC_2(VAR_9 + 1, FUNC_0(VAR_1));
 }


 return VAR_7;
}
