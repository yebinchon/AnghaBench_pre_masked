
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_4__ {int adbits; } ;
struct TYPE_3__ {scalar_t__ ad_2scomp; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_2, short *VAR_3,
    unsigned int VAR_4)
{
 unsigned int VAR_5;
 unsigned short VAR_6 = (1 << VAR_0.adbits) - 1;
 unsigned short VAR_7 = 1 << (VAR_0.adbits - 1);
 int VAR_8;

 if (VAR_1->ad_2scomp) {
  VAR_7 = 1 << (VAR_0.adbits - 1);
 } else {
  VAR_7 = 0;
 }

 if (VAR_4 % 2)
  FUNC_0(VAR_2, "bug! odd number of bytes from dma xfer");
 VAR_8 = VAR_4 / 2;
 for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
  VAR_3[VAR_5] = (VAR_3[VAR_5] & VAR_6) ^ VAR_7;
 }
}
