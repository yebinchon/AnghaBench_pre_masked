
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_device*,unsigned char*,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
     struct comedi_subdevice *VAR_2,
     struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 int VAR_5, VAR_6;
 unsigned char VAR_7[4] = {
  FUNC_0(VAR_3->chanspec) & 0x07,
  0x00,
  VAR_0,
  0x00
 };
 unsigned char VAR_8[4];

 for (VAR_6 = 0; VAR_6 < VAR_3->n; VAR_6++) {
  VAR_5 = FUNC_1(VAR_1, VAR_7, VAR_8);
  if (!VAR_5)
   return VAR_5;
  VAR_4[VAR_6] = (VAR_8[1] << 8) + VAR_8[0];
 }

 return VAR_6;
}
