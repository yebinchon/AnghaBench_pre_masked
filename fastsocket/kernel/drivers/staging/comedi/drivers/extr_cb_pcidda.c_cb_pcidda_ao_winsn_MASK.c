
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int* ao_range; scalar_t__ dac; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_2 (struct comedi_device*,unsigned int,unsigned int) ;
 TYPE_1__* VAR_9 ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_10,
         struct comedi_subdevice *VAR_11,
         struct comedi_insn *VAR_12, unsigned int *VAR_13)
{
 unsigned int VAR_14;
 unsigned int VAR_15, VAR_16;

 VAR_15 = FUNC_0(VAR_12->chanspec);
 VAR_16 = FUNC_1(VAR_12->chanspec);


 if (VAR_16 != VAR_9->ao_range[VAR_15])
  FUNC_2(VAR_10, VAR_15, VAR_16);


 VAR_14 = VAR_4 | VAR_3;


 switch (VAR_16) {
 case 0:
  VAR_14 |= VAR_0 | VAR_5;
  break;
 case 1:
  VAR_14 |= VAR_0 | VAR_7;
  break;
 case 2:
  VAR_14 |= VAR_0 | VAR_6;
  break;
 case 3:
  VAR_14 |= VAR_8 | VAR_5;
  break;
 case 4:
  VAR_14 |= VAR_8 | VAR_7;
  break;
 case 5:
  VAR_14 |= VAR_8 | VAR_6;
  break;
 };


 VAR_14 |= VAR_15 << 2;
 FUNC_3(VAR_14, VAR_9->dac + VAR_1);


 FUNC_3(VAR_13[0], VAR_9->dac + VAR_2 + VAR_15 * 2);


 return 1;
}
