
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_9,
    struct comedi_subdevice *VAR_10,
    struct comedi_insn *VAR_11, unsigned int *VAR_12)
{
 int VAR_13, VAR_14;
 int VAR_15;
 unsigned int VAR_16, VAR_17;

 VAR_15 = FUNC_0(VAR_11->chanspec);
 FUNC_3(VAR_4 | VAR_2 | (VAR_15 << 3),
      VAR_9->iobase + VAR_3);

 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
  if (FUNC_2(VAR_9->iobase + VAR_5) & VAR_6)
   break;
 }
 if (VAR_13 == VAR_8)
  return -VAR_0;

 for (VAR_14 = 0; VAR_14 < VAR_11->n; VAR_14++) {
  FUNC_3(0, VAR_9->iobase + VAR_1);
  for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
   if (FUNC_2(VAR_9->iobase +
    VAR_5) & VAR_7)
    break;
  }
  if (VAR_13 == VAR_8)
   return -VAR_0;

  VAR_16 = FUNC_1(VAR_9->iobase + VAR_1);
  VAR_17 = FUNC_1(VAR_9->iobase + VAR_1);
  VAR_12[VAR_14] = (((VAR_16 << 8) | VAR_17) + 0x1000) & 0x1fff;
 }

 return VAR_14;
}
