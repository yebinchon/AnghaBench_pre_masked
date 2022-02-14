
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct comedi_device*,char*) ;
 int FUNC_3 (scalar_t__) ;
 int * VAR_8 ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_9,
          struct comedi_subdevice *VAR_10,
          struct comedi_insn *VAR_11, unsigned int *VAR_12)
{
 int VAR_13;
 int VAR_14;


 FUNC_4(0, VAR_9->iobase + VAR_4);


 FUNC_4(VAR_8[FUNC_0(VAR_11->chanspec)], VAR_9->iobase + VAR_5);


 FUNC_4(FUNC_1(VAR_11->chanspec), VAR_9->iobase + VAR_6);

 for (VAR_13 = 0; VAR_13 < VAR_11->n; VAR_13++) {


  FUNC_4(0, VAR_9->iobase + VAR_3);


  FUNC_4(0, VAR_9->iobase + VAR_2);

  VAR_14 = 100;
  while (VAR_14--) {
   if (FUNC_3(VAR_9->iobase + VAR_7) & 0x10)
    goto conv_finish;
   FUNC_5(1);
  }
  FUNC_2(VAR_9, "A/D insn timeout");

  FUNC_4(0, VAR_9->iobase + VAR_3);
  return -VAR_0;

conv_finish:
  VAR_12[VAR_13] = ((FUNC_3(VAR_9->iobase + VAR_1) << 4) |
      (FUNC_3(VAR_9->iobase + VAR_2) >> 4));
 }

 return VAR_13;
}
