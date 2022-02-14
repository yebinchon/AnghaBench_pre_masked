
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_5,
          struct comedi_subdevice *VAR_6,
          struct comedi_insn *VAR_7, unsigned int *VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;
 int VAR_14 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_7->n; VAR_9++) {
  VAR_13 = FUNC_0(VAR_7->chanspec);

  FUNC_2(VAR_13, VAR_5->iobase + VAR_0);
  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
   VAR_14 = FUNC_1(VAR_5->iobase + VAR_0);
   FUNC_3("dt2814: status: %02x\n", VAR_14);
   FUNC_4(10);
   if (VAR_14 & VAR_2)
    break;
  }
  if (VAR_10 >= VAR_3) {
   FUNC_3("dt2814: status: %02x\n", VAR_14);
   return -VAR_4;
  }

  VAR_11 = FUNC_1(VAR_5->iobase + VAR_1);
  VAR_12 = FUNC_1(VAR_5->iobase + VAR_1);

  VAR_8[VAR_9] = (VAR_11 << 4) | (VAR_12 >> 4);
 }

 return VAR_9;
}
