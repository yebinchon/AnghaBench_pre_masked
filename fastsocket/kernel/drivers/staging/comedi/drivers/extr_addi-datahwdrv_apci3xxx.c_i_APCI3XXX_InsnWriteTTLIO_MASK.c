
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int* ul_TTLPortConfiguration; scalar_t__ iobase; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (char*,...) ;

int FUNC_4(struct comedi_device *VAR_1,
 struct comedi_subdevice *VAR_2, struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 int VAR_5 = VAR_3->n;
 unsigned char VAR_6 = (unsigned char) FUNC_0(VAR_3->chanspec);
 unsigned char VAR_7 = 0;
 unsigned int VAR_8 = 0;





 if (VAR_3->n >= 1) {
  VAR_7 = (unsigned char) VAR_4[0];





  if (VAR_6 < 8) {




   VAR_8 = FUNC_1(VAR_0->iobase + 80);
   VAR_8 =
    (VAR_8 & (0xFF -
     (1 << VAR_6))) | ((VAR_7 & 1) <<
    VAR_6);
   FUNC_2(VAR_8, VAR_0->iobase + 80);
  } else {




   if ((VAR_6 > 15) && (VAR_6 < 24)) {




    if ((VAR_0->ul_TTLPortConfiguration[0] & 0xFF)
     == 0xFF) {




     VAR_8 = FUNC_1(VAR_0->iobase + 112);
     VAR_8 =
      (VAR_8 & (0xFF -
       (1 << (VAR_6 -
         16)))) |
      ((VAR_7 & 1) << (VAR_6 -
       16));
     FUNC_2(VAR_8, VAR_0->iobase + 112);
    } else {




     VAR_5 = -3;
     FUNC_3("Channel %d selection error\n",
      VAR_6);
    }
   } else {




    VAR_5 = -3;
    FUNC_3("Channel %d selection error\n",
     VAR_6);
   }
  }
 } else {




  FUNC_3("Buffer size error\n");
  VAR_5 = -101;
 }

 return VAR_5;
}
