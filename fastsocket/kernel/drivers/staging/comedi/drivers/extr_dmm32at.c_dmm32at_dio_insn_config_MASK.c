
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned char dio_config; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_1 (struct comedi_device*,int ,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_10,
       struct comedi_subdevice *VAR_11,
       struct comedi_insn *VAR_12, unsigned int *VAR_13)
{
 unsigned char VAR_14;
 int VAR_15 = FUNC_0(VAR_12->chanspec);

 if (VAR_12->n != 1)
  return -VAR_8;

 if (VAR_15 < 8)
  VAR_14 = VAR_4;
 else if (VAR_15 < 16)
  VAR_14 = VAR_5;
 else if (VAR_15 < 20)
  VAR_14 = VAR_7;
 else
  VAR_14 = VAR_6;







 if (VAR_13[0] == VAR_0) {
  VAR_9->dio_config &= ~VAR_14;
 } else {
  VAR_9->dio_config |= VAR_14;
 }

 FUNC_1(VAR_10, VAR_1, VAR_2);

 FUNC_1(VAR_10, VAR_3, VAR_9->dio_config);

 return 1;
}
