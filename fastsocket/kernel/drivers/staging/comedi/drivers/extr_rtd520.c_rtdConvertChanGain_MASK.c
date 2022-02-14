
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_4__ {int chanBipolar; } ;
struct TYPE_3__ {unsigned int range10Start; unsigned int rangeUniStart; } ;






 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static unsigned short FUNC_5(struct comedi_device *VAR_2,
      unsigned int VAR_3, int VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;
 unsigned short VAR_8 = 0;

 VAR_5 = FUNC_3(VAR_3);
 VAR_6 = FUNC_4(VAR_3);
 VAR_7 = FUNC_2(VAR_3);

 VAR_8 |= VAR_5 & 0xf;


 if (VAR_6 < VAR_1->range10Start) {
  VAR_8 |= 0x000;
  VAR_8 |= (VAR_6 & 0x7) << 4;
  FUNC_1(VAR_0->chanBipolar, VAR_4);
 } else if (VAR_6 < VAR_1->rangeUniStart) {
  VAR_8 |= 0x100;
  VAR_8 |= ((VAR_6 - VAR_1->range10Start) & 0x7) << 4;
  FUNC_1(VAR_0->chanBipolar, VAR_4);
 } else {
  VAR_8 |= 0x200;
  VAR_8 |= ((VAR_6 - VAR_1->rangeUniStart) & 0x7) << 4;
  FUNC_0(VAR_0->chanBipolar, VAR_4);
 }

 switch (VAR_7) {
 case 129:
  break;

 case 131:
  VAR_8 |= 0x80;
  break;

 case 130:
  VAR_8 |= 0x400;
  break;

 case 128:
  break;
 }


 return VAR_8;
}
