
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned short,scalar_t__) ;

int FUNC_4(struct comedi_device *VAR_4,
         struct comedi_subdevice *VAR_5,
         struct comedi_insn *VAR_6,
         unsigned int *VAR_7)
{
 unsigned int VAR_8, VAR_9;
 unsigned short VAR_10;

 VAR_8 = FUNC_1(VAR_6->chanspec);
 VAR_9 = FUNC_0(VAR_6->chanspec);


 if (VAR_8)
 {

  if (VAR_7[0] != 0)
   VAR_7[0] =
    ((((VAR_9 & 0x03) << 14) & 0xC000) | (1 <<
     13) | (VAR_7[0] + 8191));
  else
   VAR_7[0] =
    ((((VAR_9 & 0x03) << 14) & 0xC000) | (1 <<
     13) | 8192);

 } else
 {
  VAR_7[0] =
   ((((VAR_9 & 0x03) << 14) & 0xC000) | (0 << 13) |
   VAR_7[0]);

 }





 do
 {
  VAR_10 =
   ((unsigned short) FUNC_2(VAR_3->iobase +
    VAR_2)) & 0x0001;
 } while (VAR_10 != 0x0001);

 if (VAR_9 <= 3)




  FUNC_3((unsigned short) VAR_7[0],
   VAR_3->iobase + VAR_0);
 else




  FUNC_3((unsigned short) VAR_7[0],
   VAR_3->iobase + VAR_1);

 return VAR_6->n;
}
