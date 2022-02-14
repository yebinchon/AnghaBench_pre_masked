
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_3,
      struct comedi_subdevice *VAR_4, struct comedi_insn *VAR_5,
      unsigned int *VAR_6)
{
 int VAR_7;
 int VAR_8 = FUNC_1(VAR_5->chanspec);
 unsigned short VAR_9;
 unsigned short VAR_10;


 if (VAR_5->n <= 0) {
  FUNC_3("s526: INSN_READ: n should be > 0\n");
  return -VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->n; VAR_7++) {
  VAR_9 = FUNC_2(FUNC_0(VAR_2, VAR_8));
  VAR_10 = FUNC_2(FUNC_0(VAR_1, VAR_8));
  VAR_6[VAR_7] = (int)(VAR_10 & 0x00FF);
  VAR_6[VAR_7] = (VAR_6[VAR_7] << 16) | (VAR_9 & 0xFFFF);

 }
 return VAR_7;
}
