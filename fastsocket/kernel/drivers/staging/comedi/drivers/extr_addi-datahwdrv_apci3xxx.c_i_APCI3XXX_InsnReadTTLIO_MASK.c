
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
 int FUNC_2 (char*,...) ;

int FUNC_3(struct comedi_device *VAR_1,
 struct comedi_subdevice *VAR_2, struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 unsigned char VAR_5 = (unsigned char) FUNC_0(VAR_3->chanspec);
 int VAR_6 = VAR_3->n;
 unsigned int *VAR_7 = VAR_4;





 if (VAR_3->n >= 1) {




  if (VAR_5 < 8) {




   VAR_7[0] = FUNC_1(VAR_0->iobase + 80);
   VAR_7[0] = (VAR_7[0] >> VAR_5) & 1;
  } else {




   if ((VAR_5 > 7) && (VAR_5 < 16)) {




    VAR_7[0] = FUNC_1(VAR_0->iobase + 64);
    VAR_7[0] =
     (VAR_7[0] >> (VAR_5 -
      8)) & 1;
   } else {




    if ((VAR_5 > 15) && (VAR_5 < 24)) {




     if ((VAR_0->ul_TTLPortConfiguration[0]
       & 0xFF) == 0) {
      VAR_7[0] =
       FUNC_1(VAR_0->iobase +
       96);
      VAR_7[0] =
       (VAR_7[0] >>
       (VAR_5 - 16)) & 1;
     } else {
      VAR_7[0] =
       FUNC_1(VAR_0->iobase +
       112);
      VAR_7[0] =
       (VAR_7[0] >>
       (VAR_5 - 16)) & 1;
     }
    } else {




     VAR_6 = -3;
     FUNC_2("Channel %d selection error\n",
      VAR_5);
    }
   }
  }
 } else {




  FUNC_2("Buffer size error\n");
  VAR_6 = -101;
 }

 return VAR_6;
}
