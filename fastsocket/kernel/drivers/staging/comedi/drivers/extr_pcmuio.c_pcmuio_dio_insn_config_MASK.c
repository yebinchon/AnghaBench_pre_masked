
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned long* iobases; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;



 unsigned char FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned char,unsigned long) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_4,
      struct comedi_subdevice *VAR_5,
      struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 int VAR_8 = FUNC_0(VAR_6->chanspec), VAR_9 = VAR_8 / 8, VAR_10 =
     VAR_8 % 8;
 unsigned long VAR_11;
 unsigned char VAR_12;


 VAR_11 = VAR_3->iobases[VAR_9];
 switch (VAR_7[0]) {
 case 129:


  VAR_5->io_bits |= 1 << VAR_8;
  break;
 case 130:


  VAR_12 = FUNC_1(VAR_11);
  VAR_12 &= ~(1 << VAR_10);





  FUNC_2(VAR_12, VAR_11);


  VAR_5->io_bits &= ~(1 << VAR_8);
  break;

 case 128:

  VAR_7[1] =
      (VAR_5->io_bits & (1 << VAR_8)) ? VAR_1 : VAR_0;
  return VAR_6->n;
  break;

 default:
  return -VAR_2;
  break;
 }

 return VAR_6->n;
}
