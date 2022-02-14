
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct comedi_device*,int,int,unsigned int) ;

__attribute__((used)) static int
FUNC_3(struct comedi_device *VAR_0, struct comedi_subdevice *VAR_1,
       struct comedi_insn *VAR_2, unsigned int *VAR_3)
{
 int VAR_4;
 int VAR_5, VAR_6;


 VAR_5 = FUNC_0(VAR_2->chanspec);
 VAR_6 = FUNC_1(VAR_2->chanspec);



 for (VAR_4 = 0; VAR_4 < VAR_2->n; VAR_4++) {
  FUNC_2(VAR_0, VAR_5, VAR_6, VAR_3[VAR_4]);
 }
 return VAR_4;
}
