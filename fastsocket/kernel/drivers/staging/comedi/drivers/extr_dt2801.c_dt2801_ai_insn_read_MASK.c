
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct comedi_device*,int) ;
 int FUNC_3 (struct comedi_device*,int*) ;
 int FUNC_4 (struct comedi_device*,int ) ;
 int FUNC_5 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_1,
          struct comedi_subdevice *VAR_2,
          struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3->n; VAR_7++) {
  VAR_6 = FUNC_4(VAR_1, VAR_0);
  FUNC_5(VAR_1, FUNC_1(VAR_3->chanspec));
  FUNC_5(VAR_1, FUNC_0(VAR_3->chanspec));
  VAR_6 = FUNC_3(VAR_1, &VAR_5);

  if (VAR_6 != 0)
   return FUNC_2(VAR_1, VAR_6);

  VAR_4[VAR_7] = VAR_5;
 }

 return VAR_7;
}
