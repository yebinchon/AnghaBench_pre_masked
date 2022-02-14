
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct comedi_device*,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned char,scalar_t__) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_5,
          struct comedi_subdevice *VAR_6,
          struct comedi_insn *VAR_7, unsigned int *VAR_8)
{
 int VAR_9;
 unsigned char VAR_10 =
     VAR_0 |
     (FUNC_1(VAR_7->chanspec) << 3) | FUNC_0(VAR_7->chanspec);


 FUNC_3(VAR_5->iobase + VAR_2);

 for (VAR_9 = 0; VAR_9 < VAR_7->n; VAR_9++) {
  int VAR_11 = 5;


  FUNC_5(VAR_10, VAR_5->iobase + VAR_1);


  while (VAR_11 &&
         !(FUNC_3(VAR_5->iobase + VAR_2) & VAR_4)) {
   VAR_11--;
   FUNC_6("timeout %d\n", VAR_11);
   FUNC_7(1);
  }
  if (VAR_11 == 0) {
   FUNC_2(VAR_5, "ADC timeout");
   return -VAR_3;
  }

  VAR_8[VAR_9] = FUNC_4(VAR_5->iobase + VAR_1) & 0x0FFF;
 }
 return VAR_9;
}
