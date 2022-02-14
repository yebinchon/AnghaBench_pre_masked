
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_8,
          struct comedi_subdevice *VAR_9,
          struct comedi_insn *VAR_10, unsigned int *VAR_11)
{

 u8 VAR_12;

 int VAR_13 = FUNC_0(VAR_10->chanspec);

 switch (VAR_11[0]) {
 case 129:
 case 130:
  break;
 case 128:
  VAR_11[1] =
      (FUNC_1(VAR_2) & (1 << VAR_13)) ? VAR_1 : VAR_0;
  return VAR_10->n;
  break;
 default:
  return -VAR_4;
  break;
 }






 if ((VAR_13 >= 0) && (VAR_13 <= 7)) {

  FUNC_2(VAR_5, VAR_3);
 } else if ((VAR_13 >= 8) && (VAR_13 <= 15)) {

  VAR_13 -= 8;
  FUNC_2(VAR_6, VAR_3);
 } else if ((VAR_13 >= 16) && (VAR_13 <= 19)) {


  VAR_13 -= 16;
  VAR_13 *= 2;
  FUNC_2(VAR_7, VAR_3);
 } else {
  return -VAR_4;
 }


 VAR_12 = FUNC_1(VAR_2);
 if (VAR_11[0] == VAR_1) {
  VAR_12 |= (1 << VAR_13);
 } else {
  VAR_12 &= ~(1 << VAR_13);
 }
 FUNC_2(VAR_12, VAR_2);

 return 1;

}
