
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int tsk_Current; } ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (struct comedi_device*,unsigned char*) ;
 int FUNC_3 (struct comedi_device*,int ,unsigned int) ;
 int FUNC_4 (struct comedi_device*,int ,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char) ;
 int FUNC_5 (struct comedi_device*,int ,unsigned char,unsigned char) ;
 int FUNC_6 (struct comedi_device*,int ,unsigned char,unsigned char,unsigned int,unsigned int*) ;
 int FUNC_7 (struct comedi_device*,int ,unsigned char,unsigned char,unsigned char,unsigned char) ;
 int FUNC_8 (struct comedi_device*,int ,unsigned char) ;
 int FUNC_9 (char*) ;

int FUNC_10(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3,
 struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7 = 0;
 VAR_6 = FUNC_1(VAR_4->chanspec);

 FUNC_9("\nINC_CPT");

 VAR_1->tsk_Current = VAR_0;
 switch (VAR_6) {
 case 132:
  VAR_7 = FUNC_4(VAR_2,
   FUNC_0(VAR_4->chanspec),
   (unsigned char) VAR_5[0],
   (unsigned char) VAR_5[1],
   (unsigned char) VAR_5[2], (unsigned char) VAR_5[3], (unsigned char) VAR_5[4]);
  break;

 case 134:
  VAR_7 = FUNC_2(VAR_2,
   (unsigned char *) &VAR_5[0]);
  break;

 case 129:
  VAR_7 = FUNC_7(VAR_2,
   FUNC_0(VAR_4->chanspec),
   (unsigned char) VAR_5[0],
   (unsigned char) VAR_5[1], (unsigned char) VAR_5[2], (unsigned char) VAR_5[3]);
  break;

 case 128:
  VAR_7 = FUNC_8(VAR_2,
   FUNC_0(VAR_4->chanspec), (unsigned char) VAR_5[0]);
  break;

 case 131:
  VAR_7 = FUNC_5(VAR_2,
   FUNC_0(VAR_4->chanspec),
   (unsigned char) VAR_5[0], (unsigned char) VAR_5[1]);
  break;

 case 133:
  VAR_7 = FUNC_3(VAR_2,
   FUNC_0(VAR_4->chanspec), (unsigned int) VAR_5[0]);
  break;

 case 130:
  VAR_7 = FUNC_6(VAR_2,
   FUNC_0(VAR_4->chanspec),
   (unsigned char) VAR_5[0],
   (unsigned char) VAR_5[1], (unsigned int) VAR_5[2], (unsigned int *) &VAR_5[0]);
  break;

 default:
  FUNC_9("Insn Config : Config Parameter Wrong\n");

 }

 if (VAR_7 >= 0)
  VAR_7 = VAR_4->n;
 return VAR_7;
}
