
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ ai16bits; scalar_t__ usedma; } ;


 short FUNC_0 (short) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_1,
        struct comedi_subdevice *VAR_2, void *VAR_3,
        unsigned int VAR_4,
        unsigned int VAR_5)
{
 unsigned int VAR_6, VAR_7 = VAR_4 / sizeof(short);
 short *VAR_8 = VAR_3;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  if (VAR_0->usedma)
   VAR_8[VAR_6] = FUNC_0(VAR_8[VAR_6]);
  if (VAR_0->ai16bits) {
   VAR_8[VAR_6] ^= 0x8000;
  } else {
   VAR_8[VAR_6] = (VAR_8[VAR_6] >> 4) & 0x0fff;
  }
 }
}
