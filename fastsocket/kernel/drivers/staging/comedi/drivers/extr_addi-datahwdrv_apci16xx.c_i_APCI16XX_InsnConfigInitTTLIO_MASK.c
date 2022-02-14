
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {unsigned int* ul_TTLPortConfiguration; int b_OutputMemoryStatus; scalar_t__ iobase; TYPE_1__* ps_BoardInfo; } ;
struct TYPE_3__ {int i_NbrTTLChannel; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (unsigned int*,int ,int) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (char*,...) ;

int FUNC_3(struct comedi_device *VAR_6,
 struct comedi_subdevice *VAR_7, struct comedi_insn *VAR_8, unsigned int *VAR_9)
{
 int VAR_10 = VAR_8->n;
 unsigned char VAR_11 = 0;
 unsigned char VAR_12 = 0;
 unsigned char VAR_13 =
  (unsigned char) (VAR_5->ps_BoardInfo->i_NbrTTLChannel / 8);





 if (VAR_8->n >= 1) {




  VAR_11 = (unsigned char) VAR_9[0];





  if ((VAR_11 == VAR_2) ||
   (VAR_11 == VAR_3) ||
   (VAR_11 == VAR_4)) {




   if ((VAR_11 == VAR_3)
    && ((unsigned char) (VAR_8->n - 1) != VAR_13)) {




    FUNC_2("\nBuffer size error");
    VAR_10 = -101;
   }

   if ((VAR_11 == VAR_4)
    && ((unsigned char) (VAR_8->n) != 2)) {




    FUNC_2("\nBuffer size error");
    VAR_10 = -101;
   }
  } else {




   FUNC_2("\nCommand selection error");
   VAR_10 = -100;
  }
 } else {




  FUNC_2("\nBuffer size error");
  VAR_10 = -101;
 }





 if ((VAR_10 >= 0) && (VAR_11 == VAR_3)) {
  FUNC_0(VAR_5->ul_TTLPortConfiguration, 0,
   sizeof(VAR_5->ul_TTLPortConfiguration));





  for (VAR_12 = 1;
   (VAR_12 <= VAR_13) && (VAR_10 >= 0);
   VAR_12++) {




   if ((VAR_9[VAR_12] != 0) && (VAR_9[VAR_12] != 0xFF)) {




    FUNC_2("\nPort %d direction selection error",
     (int) VAR_12);
    VAR_10 = -(int) VAR_12;
   }





   VAR_5->ul_TTLPortConfiguration[(VAR_12 - 1) / 4] =
    VAR_5->ul_TTLPortConfiguration[(VAR_12 -
     1) / 4] | (VAR_9[VAR_12] << (8 * ((VAR_12 -
       1) % 4)));
  }
 }





 if (VAR_10 >= 0) {




  if ((VAR_11 == VAR_2)
   || (VAR_11 == VAR_3)) {




   for (VAR_12 = 0; VAR_12 <= VAR_13; VAR_12++) {
    if ((VAR_12 % 4) == 0) {




     FUNC_1(VAR_5->
      ul_TTLPortConfiguration[VAR_12 /
       4],
      VAR_5->iobase + 32 + VAR_12);
    }
   }
  }
 }





 if (VAR_11 == VAR_4) {
  if (VAR_9[1]) {
   VAR_5->b_OutputMemoryStatus = VAR_1;
  } else {
   VAR_5->b_OutputMemoryStatus = VAR_0;
  }
 }

 return VAR_10;
}
