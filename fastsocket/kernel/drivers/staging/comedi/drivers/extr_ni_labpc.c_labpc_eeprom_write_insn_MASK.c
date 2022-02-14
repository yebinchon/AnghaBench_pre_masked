
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct comedi_device*,int,unsigned int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
       struct comedi_subdevice *VAR_2,
       struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_3->chanspec);
 int VAR_6;


 if (VAR_5 < 16 || VAR_5 > 127) {
  FUNC_2
      ("eeprom writes are only allowed to channels 16 through 127 (the pointer and user areas)");
  return -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_1, VAR_5, VAR_4[0]);
 if (VAR_6 < 0)
  return VAR_6;

 return 1;
}
