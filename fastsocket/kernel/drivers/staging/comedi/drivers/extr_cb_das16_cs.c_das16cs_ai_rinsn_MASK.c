
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int status1; int status2; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_4,
       struct comedi_subdevice *VAR_5,
       struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 static int VAR_13[] = { 0x800, 0x000, 0x100, 0x200 };

 VAR_12 = FUNC_1(VAR_6->chanspec);
 VAR_10 = FUNC_0(VAR_6->chanspec);
 VAR_11 = FUNC_2(VAR_6->chanspec);

 FUNC_4(VAR_12, VAR_4->iobase + 2);

 VAR_3->status1 &= ~0xf320;
 VAR_3->status1 |= (VAR_10 == VAR_0) ? 0 : 0x0020;
 FUNC_4(VAR_3->status1, VAR_4->iobase + 4);

 VAR_3->status2 &= ~0xff00;
 VAR_3->status2 |= VAR_13[VAR_11];
 FUNC_4(VAR_3->status2, VAR_4->iobase + 6);

 for (VAR_8 = 0; VAR_8 < VAR_6->n; VAR_8++) {
  FUNC_4(0, VAR_4->iobase);


  for (VAR_9 = 0; VAR_9 < 1000; VAR_9++) {
   if (FUNC_3(VAR_4->iobase + 4) & 0x0080)
    break;
  }
  if (VAR_9 == 1000) {
   FUNC_5("cb_das16_cs: ai timeout\n");
   return -VAR_1;
  }
  VAR_7[VAR_8] = (unsigned short)FUNC_3(VAR_4->iobase + 0);
 }

 return VAR_8;
}
