
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;






 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct comedi_device*,unsigned char,unsigned char,unsigned char*) ;
 int FUNC_3 (struct comedi_device*,unsigned char,unsigned char,unsigned char*) ;
 int FUNC_4 (struct comedi_device*,unsigned char,unsigned char,unsigned int*) ;
 int FUNC_5 (struct comedi_device*,unsigned char,unsigned char,unsigned int) ;
 int FUNC_6 (char*) ;

int FUNC_7(struct comedi_device *VAR_0, struct comedi_subdevice *VAR_1,
        struct comedi_insn *VAR_2, unsigned int *VAR_3)
{
 unsigned char VAR_4;
 int VAR_5 = 0;
 VAR_4 = VAR_3[0];

 FUNC_6("\n82X54");

 switch (VAR_4) {
 case 129:
  VAR_5 = FUNC_4(VAR_0,
         (unsigned char)FUNC_0(VAR_2->chanspec),
         (unsigned char)FUNC_1(VAR_2->chanspec),
         (unsigned int *) &VAR_3[0]);
  break;

 case 131:
  VAR_5 = FUNC_2(VAR_0,
              (unsigned char)FUNC_0(VAR_2->chanspec),
              (unsigned char)FUNC_1(VAR_2->chanspec),
              (unsigned char *) &VAR_3[0]);
  break;

 case 130:
  VAR_5 = FUNC_3(VAR_0,
          (unsigned char)FUNC_0(VAR_2->chanspec),
          (unsigned char)FUNC_1(VAR_2->chanspec),
          (unsigned char *)&VAR_3[0]);
  break;

 case 128:
  VAR_5 = FUNC_5(VAR_0,
          (unsigned char)FUNC_0(VAR_2->chanspec),
          (unsigned char)FUNC_1(VAR_2->chanspec),
          (unsigned int)VAR_3[1]);

  break;

 default:
  FUNC_6("Bits Config Parameter Wrong\n");
  VAR_5 = -1;
 }

 if (VAR_5 >= 0)
  VAR_5 = VAR_2->n;
 return VAR_5;
}
