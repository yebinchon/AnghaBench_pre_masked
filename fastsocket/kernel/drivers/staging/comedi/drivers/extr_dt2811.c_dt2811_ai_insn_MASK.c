
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
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_7, struct comedi_subdevice *VAR_8,
     struct comedi_insn *VAR_9, unsigned int *VAR_10)
{
 int VAR_11 = FUNC_0(VAR_9->chanspec);
 int VAR_12 = VAR_5;
 int VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_9->n; VAR_13++) {
  FUNC_2(VAR_11, VAR_7->iobase + VAR_4);

  while (VAR_12
         && FUNC_1(VAR_7->iobase + VAR_1) & VAR_0)
   VAR_12--;
  if (!VAR_12)
   return -VAR_6;

  VAR_10[VAR_13] = FUNC_1(VAR_7->iobase + VAR_3);
  VAR_10[VAR_13] |= FUNC_1(VAR_7->iobase + VAR_2) << 8;
  VAR_10[VAR_13] &= 0xfff;
 }

 return VAR_13;
}
