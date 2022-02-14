
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int* ul_TTLPortConfiguration; scalar_t__ iobase; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (scalar_t__) ;
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





  if (((VAR_7 & 0XFF00FF00) == 0) &&
   (((VAR_0->ul_TTLPortConfiguration[0] & 0xFF) == 0xFF)
    || (((VAR_0->ul_TTLPortConfiguration[0] &
       0xFF) == 0)
     && ((VAR_7 & 0XFF0000) ==
      0)))) {




   if (VAR_7) {




    if (VAR_7 & 0xFF) {




     VAR_9 = FUNC_0(VAR_0->iobase + 80);

     for (VAR_6 = 0; VAR_6 < 8;
      VAR_6++) {
      if ((VAR_7 >>
        VAR_6) &
       1) {
       VAR_9 =
        (VAR_9 &
        (0xFF - (1 << VAR_6))) | (VAR_8 & (1 << VAR_6));
      }
     }

     FUNC_1(VAR_9, VAR_0->iobase + 80);
    }





    if (VAR_7 & 0xFF0000) {
     VAR_8 = VAR_8 >> 16;
     VAR_7 = VAR_7 >> 16;





     VAR_9 = FUNC_0(VAR_0->iobase + 112);

     for (VAR_6 = 0; VAR_6 < 8;
      VAR_6++) {
      if ((VAR_7 >>
        VAR_6) &
       1) {
       VAR_9 =
        (VAR_9 &
        (0xFF - (1 << VAR_6))) | (VAR_8 & (1 << VAR_6));
      }
     }

     FUNC_1(VAR_9, VAR_0->iobase + 112);
    }
   }





   VAR_4[1] = FUNC_0(VAR_0->iobase + 80);





   VAR_4[1] = VAR_4[1] | (FUNC_0(VAR_0->iobase + 64) << 8);





   if ((VAR_0->ul_TTLPortConfiguration[0] & 0xFF) == 0) {
    VAR_4[1] =
     VAR_4[1] | (FUNC_0(VAR_0->iobase +
      96) << 16);
   } else {
    VAR_4[1] =
     VAR_4[1] | (FUNC_0(VAR_0->iobase +
      112) << 16);
   }
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
