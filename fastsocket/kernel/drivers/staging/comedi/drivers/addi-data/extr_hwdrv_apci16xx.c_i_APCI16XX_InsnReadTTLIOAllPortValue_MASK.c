
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {unsigned int* ul_TTLPortConfiguration; scalar_t__ iobase; TYPE_1__* ps_BoardInfo; } ;
struct TYPE_3__ {int i_NbrTTLChannel; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* VAR_2 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct comedi_device *VAR_3,
 struct comedi_subdevice *VAR_4, struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 unsigned char VAR_7 = (unsigned char) FUNC_0(VAR_5->chanspec);
 int VAR_8 = VAR_5->n;
 unsigned char VAR_9 = 0;
 unsigned char VAR_10 = 0;
 unsigned int *VAR_11 = VAR_6;





 if ((VAR_7 == VAR_0)
  || (VAR_7 == VAR_1)) {




  VAR_10 =
   (unsigned char) (VAR_2->ps_BoardInfo->i_NbrTTLChannel / 32);
  if ((VAR_10 * 32) <
   VAR_2->ps_BoardInfo->i_NbrTTLChannel) {
   VAR_10 = VAR_10 + 1;
  }





  if (VAR_5->n >= VAR_10) {
   if (VAR_7 == VAR_0) {




    for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {




     VAR_11[VAR_9] =
      FUNC_1(VAR_2->iobase + 8 +
      (VAR_9 * 4));





     VAR_11[VAR_9] =
      VAR_11[VAR_9] &
      (~VAR_2->
      ul_TTLPortConfiguration[VAR_9]);
    }
   } else {




    for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {




     VAR_11[VAR_9] =
      FUNC_1(VAR_2->iobase + 20 +
      (VAR_9 * 4));





     VAR_11[VAR_9] =
      VAR_11[VAR_9] & VAR_2->
      ul_TTLPortConfiguration[VAR_9];
    }
   }
  } else {




   FUNC_2("\nBuffer size error");
   VAR_8 = -101;
  }
 } else {




  FUNC_2("\nCommand selection error");
  VAR_8 = -100;
 }

 return VAR_8;
}
