
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (char*,char*,unsigned int,unsigned int,char*) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_4,
     struct comedi_subdevice *VAR_5,
     struct comedi_insn *VAR_6,
     unsigned int *VAR_7,
     char *VAR_8, unsigned short VAR_9)
{
 unsigned int VAR_10, VAR_11;

 char *VAR_12;

 VAR_10 = FUNC_0(VAR_6->chanspec);

 switch (VAR_10) {
 case 0:
  VAR_11 = VAR_1;
  VAR_12 = "X";
  break;
 case 1:
  VAR_11 = VAR_2;
  VAR_12 = "Y";
  break;
 case 2:
  VAR_11 = VAR_3;
  VAR_12 = "Z";
  break;
 case 3:
  VAR_11 = VAR_0;
  VAR_12 = "U";
  break;
 default:
  VAR_11 = VAR_1;
  VAR_12 = "X";
 }

 FUNC_1(VAR_7[0], VAR_4->iobase + VAR_11 + VAR_9);

 FUNC_2("comedi: pci8164 %s write -> %04X:%04X on axis %s\n", VAR_8,
        VAR_7[0], VAR_7[1], VAR_12);

}
