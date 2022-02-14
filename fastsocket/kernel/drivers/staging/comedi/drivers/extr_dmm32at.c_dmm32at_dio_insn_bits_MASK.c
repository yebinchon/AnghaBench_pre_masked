
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int dio_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (struct comedi_device*,int ,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_11,
     struct comedi_subdevice *VAR_12,
     struct comedi_insn *VAR_13, unsigned int *VAR_14)
{
 unsigned char VAR_15;

 if (VAR_13->n != 2)
  return -VAR_9;



 if (VAR_14[0]) {
  VAR_12->state &= ~VAR_14[0];
  VAR_12->state |= VAR_14[0] & VAR_14[1];


 }


 FUNC_1(VAR_11, VAR_0, VAR_2);


 if (((VAR_10->dio_config & VAR_8) == 0) ||
     ((VAR_10->dio_config & VAR_7) == 0)) {
  VAR_15 = (VAR_12->state & 0x00ff0000) >> 16;
  FUNC_1(VAR_11, VAR_4, VAR_15);
 }
 if ((VAR_10->dio_config & VAR_6) == 0) {
  VAR_15 = (VAR_12->state & 0x0000ff00) >> 8;
  FUNC_1(VAR_11, VAR_3, VAR_15);
 }
 if ((VAR_10->dio_config & VAR_5) == 0) {
  VAR_15 = (VAR_12->state & 0x000000ff);
  FUNC_1(VAR_11, VAR_1, VAR_15);
 }


 VAR_12->state = FUNC_0(VAR_11, VAR_4);
 VAR_12->state <<= 8;
 VAR_12->state |= FUNC_0(VAR_11, VAR_3);
 VAR_12->state <<= 8;
 VAR_12->state |= FUNC_0(VAR_11, VAR_1);
 VAR_14[1] = VAR_12->state;
 return 2;
}
