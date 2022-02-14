
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {unsigned long iobase; } ;


 char FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char,unsigned long) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_0,
    struct comedi_subdevice *VAR_1, struct comedi_insn *VAR_2,
    unsigned int *VAR_3)
{
 int VAR_4;
 unsigned int VAR_5, VAR_6;
 char VAR_7 = FUNC_0(VAR_2->chanspec);
 unsigned long VAR_8 = VAR_0->iobase;

 for (VAR_4 = 0; VAR_4 < VAR_2->n; VAR_4++) {


  FUNC_2(VAR_7, VAR_8 + 2);
  FUNC_2(0, VAR_8 + 3);

  FUNC_3(30);
  VAR_5 = FUNC_1(VAR_8 + 2);
  VAR_6 = FUNC_1(VAR_8 + 3) & 0xf;
  VAR_3[VAR_4] = VAR_5 + (VAR_6 << 8);
 }
 return VAR_4;
}
