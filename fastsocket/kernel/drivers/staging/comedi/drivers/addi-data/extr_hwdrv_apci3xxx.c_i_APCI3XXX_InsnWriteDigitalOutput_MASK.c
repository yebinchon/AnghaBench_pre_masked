
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ iobase; TYPE_1__* ps_BoardInfo; } ;
struct TYPE_3__ {unsigned char i_NbrDoChannel; } ;


 unsigned char FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct comedi_device *VAR_1,
 struct comedi_subdevice *VAR_2, struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 int VAR_5 = VAR_3->n;
 unsigned char VAR_6 = FUNC_0(VAR_3->chanspec);
 unsigned char VAR_7 = 0;
 unsigned int VAR_8 = 0;





 if (VAR_3->n >= 1) {




  if (VAR_6 < VAR_0->ps_BoardInfo->i_NbrDoChannel) {




   VAR_7 = (unsigned char) VAR_4[0];





   VAR_8 = FUNC_1(VAR_0->iobase + 48);

   VAR_8 =
    (VAR_8 & (0xF -
     (1 << VAR_6))) | ((VAR_7 & 1) <<
    VAR_6);
   FUNC_2(VAR_8, VAR_0->iobase + 48);
  } else {




   FUNC_3("Channel selection error\n");
   VAR_5 = -3;
  }
 } else {




  FUNC_3("Buffer size error\n");
  VAR_5 = -101;
 }

 return VAR_5;
}
