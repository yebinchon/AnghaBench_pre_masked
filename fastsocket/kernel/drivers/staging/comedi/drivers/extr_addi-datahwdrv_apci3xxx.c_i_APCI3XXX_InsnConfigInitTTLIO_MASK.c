
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int* ul_TTLPortConfiguration; scalar_t__ iobase; } ;


 unsigned char VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct comedi_device *VAR_2,
 struct comedi_subdevice *VAR_3, struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 int VAR_6 = VAR_4->n;
 unsigned char VAR_7 = 0;





 if (VAR_4->n >= 1) {




  VAR_7 = (unsigned char) VAR_5[0];





  if (VAR_7 == VAR_0) {




   if ((VAR_7 == VAR_0)
    && (VAR_4->n != 2)) {




    FUNC_1("Buffer size error\n");
    VAR_6 = -101;
   }
  } else {




   FUNC_1("Command selection error\n");
   VAR_6 = -100;
  }
 } else {




  FUNC_1("Buffer size error\n");
  VAR_6 = -101;
 }





 if ((VAR_6 >= 0)
  && (VAR_7 == VAR_0)) {




  if ((VAR_5[1] == 0) || (VAR_5[1] == 0xFF)) {




   VAR_1->ul_TTLPortConfiguration[0] =
    VAR_1->ul_TTLPortConfiguration[0] | VAR_5[1];
  } else {




   FUNC_1("Port 2 direction selection error\n");
   VAR_6 = -1;
  }
 }





 if (VAR_6 >= 0) {




  if (VAR_7 == VAR_0) {




   FUNC_0(VAR_5[1], VAR_1->iobase + 224);
  }
 }

 return VAR_6;
}
