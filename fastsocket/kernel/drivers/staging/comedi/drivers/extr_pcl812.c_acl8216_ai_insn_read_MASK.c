
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; int board_name; int minor; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (char*,int ,int ,scalar_t__) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_7,
    struct comedi_subdevice *VAR_8,
    struct comedi_insn *VAR_9, unsigned int *VAR_10)
{
 int VAR_11;
 int VAR_12;

 FUNC_1(1, VAR_7->iobase + VAR_5);
 FUNC_3(VAR_7, VAR_8, VAR_9->chanspec, 1);
 for (VAR_11 = 0; VAR_11 < VAR_9->n; VAR_11++) {
  FUNC_1(255, VAR_7->iobase + VAR_6);
  FUNC_4(5);
  VAR_12 = 50;
  while (VAR_12--) {
   if (!(FUNC_0(VAR_7->iobase + VAR_1) & VAR_0))
    goto conv_finish;
   FUNC_4(1);
  }
  FUNC_2
      ("comedi%d: pcl812: (%s at 0x%lx) A/D insn read timeout\n",
       VAR_7->minor, VAR_7->board_name, VAR_7->iobase);
  FUNC_1(0, VAR_7->iobase + VAR_5);
  return -VAR_2;

conv_finish:
  VAR_10[VAR_11] =
      (FUNC_0(VAR_7->iobase +
    VAR_3) << 8) | FUNC_0(VAR_7->iobase + VAR_4);
 }
 FUNC_1(0, VAR_7->iobase + VAR_5);
 return VAR_11;
}
