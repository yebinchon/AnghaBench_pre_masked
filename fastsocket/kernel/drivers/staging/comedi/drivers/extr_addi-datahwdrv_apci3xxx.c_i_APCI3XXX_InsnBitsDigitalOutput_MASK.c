
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iobase; } ;


 TYPE_1__* VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct comedi_device *VAR_1,
 struct comedi_subdevice *VAR_2, struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 int VAR_5 = VAR_3->n;
 unsigned char VAR_6 = 0;
 unsigned int VAR_7 = 0;
 unsigned int VAR_8 = 0;
 unsigned int VAR_9 = 0;





 if (VAR_3->n >= 2) {




  VAR_7 = VAR_4[0];
  VAR_8 = VAR_4[1];





  if ((VAR_7 & 0XFFFFFFF0) == 0) {




   if (VAR_7 & 0xF) {




    VAR_9 = FUNC_0(VAR_0->iobase + 48);

    for (VAR_6 = 0; VAR_6 < 4;
     VAR_6++) {
     if ((VAR_7 >> VAR_6) &
      1) {
      VAR_9 =
       (VAR_9 & (0xF -
        (1 << VAR_6))) | (VAR_8 & (1 << VAR_6));
     }
    }

    FUNC_1(VAR_9, VAR_0->iobase + 48);
   }





   VAR_4[1] = FUNC_0(VAR_0->iobase + 48);
  } else {




   FUNC_2("Channel mask error\n");
   VAR_5 = -4;
  }
 } else {




  FUNC_2("Buffer size error\n");
  VAR_5 = -101;
 }

 return VAR_5;
}
