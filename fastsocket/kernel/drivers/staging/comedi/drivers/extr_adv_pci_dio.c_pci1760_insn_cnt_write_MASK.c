
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int* CntResValue; unsigned char IDICntEnable; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct comedi_device*,unsigned char*,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4,
      struct comedi_subdevice *VAR_5,
      struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 int VAR_8;
 unsigned char VAR_9 = FUNC_0(VAR_6->chanspec) & 0x07;
 unsigned char VAR_10 = 1 << VAR_9;
 unsigned char VAR_11[4] = {
  VAR_7[0] & 0xff,
  (VAR_7[0] >> 8) & 0xff,
  VAR_2 + VAR_9,
  0x00
 };
 unsigned char VAR_12[4];

 if (VAR_3->CntResValue[VAR_9] != (VAR_7[0] & 0xffff)) {
  VAR_8 = FUNC_1(VAR_4, VAR_11, VAR_12);
  if (!VAR_8)
   return VAR_8;
  VAR_3->CntResValue[VAR_9] = VAR_7[0] & 0xffff;
 }

 VAR_11[0] = VAR_10;
 VAR_11[2] = VAR_1;
 VAR_8 = FUNC_1(VAR_4, VAR_11, VAR_12);
 if (!VAR_8)
  return VAR_8;

 if (!(VAR_10 & VAR_3->IDICntEnable)) {
  VAR_11[0] = VAR_10;
  VAR_11[2] = VAR_0;
  VAR_8 = FUNC_1(VAR_4, VAR_11, VAR_12);
  if (!VAR_8)
   return VAR_8;
  VAR_3->IDICntEnable |= VAR_10;
 }
 return 1;
}
