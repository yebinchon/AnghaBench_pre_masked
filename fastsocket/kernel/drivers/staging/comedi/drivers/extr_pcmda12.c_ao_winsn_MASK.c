
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int* ao_readback; int simultaneous_xfer_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2,
      struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 int VAR_5;
 int VAR_6 = FUNC_0(VAR_3->chanspec);



 for (VAR_5 = 0; VAR_5 < VAR_3->n; ++VAR_5) {






  FUNC_6(FUNC_1(VAR_4[VAR_5]), FUNC_2(VAR_6));

  FUNC_6(FUNC_3(VAR_4[VAR_5]), FUNC_4(VAR_6));


  VAR_0->ao_readback[VAR_6] = VAR_4[VAR_5];

  if (!VAR_0->simultaneous_xfer_mode)
   FUNC_5(FUNC_2(VAR_6));
 }


 return VAR_5;
}
