
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int serial_hw_mode; int dio_control; unsigned int serial_interval_ns; int clock_and_fout; int (* stc_writew ) (struct comedi_device*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,unsigned char,unsigned char*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,unsigned char,unsigned char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct comedi_device*,int,int ) ;
 int FUNC_4 (struct comedi_device*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_13,
     struct comedi_subdevice *VAR_14,
     struct comedi_insn *VAR_15, unsigned int *VAR_16)
{
 int VAR_17 = VAR_15->n;
 unsigned char VAR_18, VAR_19 = 0;

 if (VAR_15->n != 2)
  return -VAR_6;

 switch (VAR_16[0]) {
 case 128:




  VAR_12->serial_hw_mode = 1;
  VAR_12->dio_control |= VAR_2;

  if (VAR_16[1] == VAR_10) {
   VAR_12->serial_hw_mode = 0;
   VAR_12->dio_control &= ~(VAR_2 |
        VAR_5);
   VAR_16[1] = VAR_10;
   VAR_12->serial_interval_ns = VAR_16[1];
  } else if (VAR_16[1] <= VAR_9) {


   VAR_12->dio_control &= ~VAR_3;
   VAR_12->clock_and_fout |= VAR_11;
   VAR_12->clock_and_fout &= ~VAR_4;
   VAR_16[1] = VAR_9;
   VAR_12->serial_interval_ns = VAR_16[1];
  } else if (VAR_16[1] <= VAR_8) {
   VAR_12->dio_control &= ~VAR_3;
   VAR_12->clock_and_fout |= VAR_11 |
       VAR_4;
   VAR_16[1] = VAR_8;
   VAR_12->serial_interval_ns = VAR_16[1];
  } else if (VAR_16[1] <= VAR_7) {
   VAR_12->dio_control |= VAR_3;
   VAR_12->clock_and_fout |= VAR_11 |
       VAR_4;




   VAR_16[1] = VAR_7;
   VAR_12->serial_interval_ns = VAR_16[1];
  } else {
   VAR_12->dio_control &= ~(VAR_2 |
        VAR_5);
   VAR_12->serial_hw_mode = 0;
   VAR_16[1] = (VAR_16[1] / 1000) * 1000;
   VAR_12->serial_interval_ns = VAR_16[1];
  }

  VAR_12->stc_writew(VAR_13, VAR_12->dio_control,
        VAR_1);
  VAR_12->stc_writew(VAR_13, VAR_12->clock_and_fout,
        VAR_0);
  return 1;

  break;

 case 129:

  if (VAR_12->serial_interval_ns == 0) {
   return -VAR_6;
  }

  VAR_18 = VAR_16[1] & 0xFF;

  if (VAR_12->serial_hw_mode) {
   VAR_17 = FUNC_0(VAR_13, VAR_14, VAR_18,
            &VAR_19);
  } else if (VAR_12->serial_interval_ns > 0) {
   VAR_17 = FUNC_1(VAR_13, VAR_14, VAR_18,
            &VAR_19);
  } else {
   FUNC_2("ni_serial_insn_config: serial disabled!\n");
   return -VAR_6;
  }
  if (VAR_17 < 0)
   return VAR_17;
  VAR_16[1] = VAR_19 & 0xFF;
  return VAR_15->n;

  break;
 default:
  return -VAR_6;
 }

}
