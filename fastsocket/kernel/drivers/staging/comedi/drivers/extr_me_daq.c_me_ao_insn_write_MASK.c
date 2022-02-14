
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {unsigned int maxdata; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int control_2; int dac_control; unsigned int* ao_readback; scalar_t__ me_regbase; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_11,
       struct comedi_subdevice *VAR_12,
       struct comedi_insn *VAR_13, unsigned int *VAR_14)
{
 int VAR_15;
 int VAR_16;
 int VAR_17;


 VAR_10->control_2 |= VAR_4;
 FUNC_3(VAR_10->control_2, VAR_10->me_regbase + VAR_5);


 VAR_10->control_2 |= VAR_0;
 FUNC_3(VAR_10->control_2, VAR_10->me_regbase + VAR_5);


 for (VAR_17 = 0; VAR_17 < VAR_13->n; VAR_17++) {
  VAR_15 = FUNC_0((&VAR_13->chanspec)[VAR_17]);
  VAR_16 = FUNC_1((&VAR_13->chanspec)[VAR_17]);


  VAR_10->dac_control &= ~(0x0880 >> VAR_15);
  if (VAR_16 == 0)
   VAR_10->dac_control |=
       ((VAR_1 | VAR_3) >> VAR_15);
  else if (VAR_16 == 1)
   VAR_10->dac_control |=
       ((VAR_1 | VAR_2) >> VAR_15);
 }
 FUNC_3(VAR_10->dac_control,
        VAR_10->me_regbase + VAR_6);


 FUNC_2(VAR_10->me_regbase + VAR_7);


 for (VAR_17 = 0; VAR_17 < VAR_13->n; VAR_17++) {
  VAR_15 = FUNC_0((&VAR_13->chanspec)[VAR_17]);
  FUNC_3((VAR_14[0] & VAR_12->maxdata),
         VAR_10->me_regbase + VAR_8 + (VAR_15 << 1));
  VAR_10->ao_readback[VAR_15] = (VAR_14[0] & VAR_12->maxdata);
 }


 FUNC_2(VAR_10->me_regbase + VAR_9);

 return VAR_17;
}
