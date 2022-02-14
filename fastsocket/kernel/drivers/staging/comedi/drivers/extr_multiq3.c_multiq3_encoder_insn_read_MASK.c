
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_7,
         struct comedi_subdevice *VAR_8,
         struct comedi_insn *VAR_9,
         unsigned int *VAR_10)
{
 int VAR_11;
 int VAR_12 = FUNC_0(VAR_9->chanspec);
 int VAR_13 = VAR_3 | VAR_0 | (VAR_12 << 3);

 for (VAR_11 = 0; VAR_11 < VAR_9->n; VAR_11++) {
  int VAR_14;
  FUNC_3(VAR_13, VAR_7->iobase + VAR_2);
  FUNC_2(VAR_1, VAR_7->iobase + VAR_4);
  FUNC_2(VAR_6, VAR_7->iobase + VAR_4);
  VAR_14 = FUNC_1(VAR_7->iobase + VAR_5);
  VAR_14 |= (FUNC_1(VAR_7->iobase + VAR_5) << 8);
  VAR_14 |= (FUNC_1(VAR_7->iobase + VAR_5) << 16);
  VAR_10[VAR_11] = (VAR_14 + 0x800000) & 0xffffff;
 }

 return VAR_11;
}
