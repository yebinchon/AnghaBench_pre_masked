
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {unsigned int n_adchan; int has_analog_trig; } ;
struct TYPE_3__ {unsigned int atrig_low; unsigned int atrig_high; int atrig_mode; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_0(struct comedi_device *VAR_5,
        struct comedi_subdevice *VAR_6,
        struct comedi_insn *VAR_7,
        unsigned int *VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11;
 int VAR_12 = 0;





 if (!VAR_3.has_analog_trig)
  return -VAR_2;
 if ((VAR_8[1] & 0xffff0000) != VAR_0) {
  VAR_8[1] &= (VAR_0 | 0xffff);
  VAR_12++;
 }
 if (VAR_8[2] >= VAR_3.n_adchan) {
  VAR_8[2] = VAR_3.n_adchan - 1;
  VAR_12++;
 }
 if (VAR_8[3] > 255) {
  VAR_8[3] = 255;
  VAR_12++;
 }
 if (VAR_8[4] > 255) {
  VAR_8[4] = 255;
  VAR_12++;
 }
 VAR_9 = VAR_8[3];
 VAR_10 = VAR_8[4];
 VAR_11 = VAR_8[1] & 0xff;
 if (VAR_11 & 0xf0) {

  if (VAR_10 < VAR_9) {

   VAR_9 = VAR_8[4];
   VAR_10 = VAR_8[3];
   VAR_11 =
       ((VAR_8[1] & 0xf) << 4) | ((VAR_8[1] & 0xf0) >> 4);
  }
  VAR_4->atrig_low = VAR_9;
  VAR_4->atrig_high = VAR_10;
  switch (VAR_11) {
  case 0x81:
   VAR_4->atrig_mode = 6;
   break;
  case 0x42:
   VAR_4->atrig_mode = 3;
   break;
  case 0x96:
   VAR_4->atrig_mode = 2;
   break;
  default:
   VAR_8[1] &= ~0xff;
   VAR_12++;
  }
 } else {

  if (VAR_10 != 0) {
   VAR_8[4] = 0;
   VAR_12++;
  }
  switch (VAR_11) {
  case 0x06:
   VAR_4->atrig_high = VAR_9;
   VAR_4->atrig_mode = 0;
   break;
  case 0x09:
   VAR_4->atrig_low = VAR_9;
   VAR_4->atrig_mode = 1;
   break;
  default:
   VAR_8[1] &= ~0xff;
   VAR_12++;
  }
 }
 if (VAR_12)
  return -VAR_1;
 return 5;
}
