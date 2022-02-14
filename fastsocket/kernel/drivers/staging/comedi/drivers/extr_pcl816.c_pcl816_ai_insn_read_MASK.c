
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct comedi_device*,char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_9,
          struct comedi_subdevice *VAR_10,
          struct comedi_insn *VAR_11, unsigned int *VAR_12)
{
 int VAR_13;
 int VAR_14;

 FUNC_2("mode 0 analog input\n");

 FUNC_5(0, VAR_9->iobase + VAR_4);

 FUNC_5(0, VAR_9->iobase + VAR_3);


 FUNC_5(FUNC_0(VAR_11->chanspec) & 0xf, VAR_9->iobase + VAR_5);
 FUNC_5(FUNC_1(VAR_11->chanspec), VAR_9->iobase + VAR_6);

 for (VAR_13 = 0; VAR_13 < VAR_11->n; VAR_13++) {

  FUNC_5(0, VAR_9->iobase + VAR_2);

  VAR_14 = 100;
  while (VAR_14--) {
   if (!(FUNC_4(VAR_9->iobase + VAR_7) &
         VAR_8)) {

    VAR_12[VAR_13] =
        ((FUNC_4(VAR_9->iobase +
       VAR_1) << 8) |
         (FUNC_4(VAR_9->iobase + VAR_2)));

    FUNC_5(0, VAR_9->iobase + VAR_3);
    break;
   }
   FUNC_6(1);
  }

  if (!VAR_14) {
   FUNC_3(VAR_9, "A/D insn timeout\n");
   VAR_12[0] = 0;
   FUNC_5(0, VAR_9->iobase + VAR_3);
   return -VAR_0;
  }

 }
 return VAR_13;
}
