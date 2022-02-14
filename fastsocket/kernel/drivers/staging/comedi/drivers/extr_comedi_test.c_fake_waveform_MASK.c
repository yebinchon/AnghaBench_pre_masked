
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 short FUNC_0 (struct comedi_device*,unsigned int,unsigned long) ;
 short FUNC_1 (struct comedi_device*,unsigned int,unsigned long) ;
 short FUNC_2 (struct comedi_device*,unsigned int,unsigned long) ;

__attribute__((used)) static short FUNC_3(struct comedi_device *VAR_0, unsigned int VAR_1,
      unsigned int VAR_2, unsigned long VAR_3)
{
 enum {
  SAWTOOTH_CHAN,
  SQUARE_CHAN,
 };
 switch (VAR_1) {
 case SAWTOOTH_CHAN:
  return FUNC_1(VAR_0, VAR_2, VAR_3);
  break;
 case SQUARE_CHAN:
  return FUNC_2(VAR_0, VAR_2, VAR_3);
  break;
 default:
  break;
 }

 return FUNC_0(VAR_0, VAR_2, VAR_3);
}
