
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {unsigned char range_correction; unsigned char old_chan_reg; unsigned char old_gain_reg; int max_812_ai_mode0_rangewait; scalar_t__ use_diff; scalar_t__ use_MPC; } ;


 unsigned char FUNC_0 (unsigned int) ;
 unsigned char FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (unsigned char,scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_3,
    struct comedi_subdevice *VAR_4,
    unsigned int VAR_5, char VAR_6)
{
 unsigned char VAR_7 = FUNC_0(VAR_5);
 unsigned char VAR_8 = FUNC_1(VAR_5) + VAR_2->range_correction;

 if ((VAR_7 == VAR_2->old_chan_reg)
     && (VAR_8 == VAR_2->old_gain_reg))
  return;

 VAR_2->old_chan_reg = VAR_7;
 VAR_2->old_gain_reg = VAR_8;

 if (VAR_2->use_MPC) {
  if (VAR_2->use_diff) {
   VAR_7 = VAR_7 | 0x30;
  } else {
   if (VAR_7 & 0x80) {
    VAR_7 = VAR_7 | 0x20;
   } else {
    VAR_7 = VAR_7 | 0x10;
   }
  }
 }

 FUNC_2(VAR_7, VAR_3->iobase + VAR_1);
 FUNC_2(VAR_8, VAR_3->iobase + VAR_0);

 if (VAR_6) {
  FUNC_3(VAR_2->max_812_ai_mode0_rangewait);
 }
}
