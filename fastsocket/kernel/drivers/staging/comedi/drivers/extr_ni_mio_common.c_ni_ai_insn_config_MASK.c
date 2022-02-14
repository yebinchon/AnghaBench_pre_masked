
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {int reg_type; } ;
struct TYPE_3__ {unsigned int ai_calib_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 TYPE_2__ VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_12,
        struct comedi_subdevice *VAR_13,
        struct comedi_insn *VAR_14, unsigned int *VAR_15)
{
 if (VAR_14->n < 1)
  return -VAR_2;

 switch (VAR_15[0]) {
 case 128:
  return FUNC_0(VAR_12, VAR_13, VAR_14, VAR_15);
 case 129:
  if (VAR_7.reg_type & VAR_11) {
   if (VAR_15[1] & ~(VAR_4 |
     VAR_3 |
     VAR_5 |
     VAR_6)) {
    return -VAR_2;
   }
   VAR_8->ai_calib_source = VAR_15[1];
  } else if (VAR_7.reg_type == VAR_10) {
   unsigned int VAR_16;

   VAR_16 = VAR_15[1] & 0xf;

   if (VAR_16 > 0xF)
    return -VAR_2;

   VAR_8->ai_calib_source = VAR_16;
   FUNC_2(VAR_16, VAR_1);
  } else {
   unsigned int VAR_17;
   unsigned int VAR_18;

   VAR_17 = VAR_15[1] & 0xf;
   VAR_18 = (VAR_15[1] >> 4) & 0xff;

   if (VAR_17 >= 8)
    return -VAR_2;
   VAR_8->ai_calib_source = VAR_17;
   if (VAR_7.reg_type == VAR_9) {
    FUNC_1(VAR_18,
       VAR_0);
   }
  }
  return 2;
 default:
  break;
 }

 return -VAR_2;
}
