
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {int* ul_TTLPortConfiguration; scalar_t__ b_OutputMemoryStatus; scalar_t__ iobase; TYPE_1__* ps_BoardInfo; } ;
struct TYPE_3__ {int i_NbrTTLChannel; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char FUNC_0 (int ) ;
 unsigned char FUNC_1 (int ) ;
 TYPE_2__* VAR_5 ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 int FUNC_4 (char*,...) ;

int FUNC_5(struct comedi_device *VAR_6,
 struct comedi_subdevice *VAR_7, struct comedi_insn *VAR_8, unsigned int *VAR_9)
{
 int VAR_10 = VAR_8->n;
 unsigned char VAR_11 = 0;
 unsigned char VAR_12 =
  (unsigned char) (VAR_5->ps_BoardInfo->i_NbrTTLChannel / 8);
 unsigned char VAR_13 = FUNC_1(VAR_8->chanspec);
 unsigned char VAR_14 = FUNC_0(VAR_8->chanspec);
 unsigned int VAR_15 = 0;





 if (VAR_8->n >= 1) {




  VAR_11 = (unsigned char) VAR_9[0];





  if ((VAR_11 == VAR_2) ||
   (VAR_11 == VAR_4) ||
   (VAR_11 == VAR_1) ||
   (VAR_11 == VAR_3)) {




   if (VAR_13 < VAR_12) {




    if (((VAR_5->ul_TTLPortConfiguration
       [VAR_13 /
        4] >> (8 *
        (VAR_13
         %
         4))) &
      0xFF) == 0xFF) {




     if (((VAR_11 == VAR_2) || (VAR_11 == VAR_1)) && (VAR_14 > 7)) {




      FUNC_4("\nChannel selection error");
      VAR_10 = -103;
     }

     if (((VAR_11 == VAR_1) || (VAR_11 == VAR_3)) && (VAR_5->b_OutputMemoryStatus == VAR_0)) {




      FUNC_4("\nOutput memory disabled");
      VAR_10 = -104;
     }





     if (((VAR_11 == VAR_4) || (VAR_11 == VAR_3)) && (VAR_8->n < 2)) {




      FUNC_4("\nBuffer size error");
      VAR_10 = -101;
     }
    } else {




     FUNC_4("\nPort selection error %lX",
      (unsigned long)VAR_5->
      ul_TTLPortConfiguration[0]);
     VAR_10 = -102;
    }
   } else {




    FUNC_4("\nPort selection error %d %d",
     VAR_13, VAR_12);
    VAR_10 = -102;
   }
  } else {




   FUNC_4("\nCommand selection error");
   VAR_10 = -100;
  }
 } else {




  FUNC_4("\nBuffer size error");
  VAR_10 = -101;
 }





 if (VAR_10 >= 0) {




  VAR_15 =
   FUNC_2(VAR_5->iobase + 20 + ((VAR_13 / 4) * 4));





  if (VAR_5->b_OutputMemoryStatus == VAR_0) {




   VAR_15 =
    VAR_15 & (0xFFFFFFFFUL -
    (0xFFUL << (8 * (VAR_13 % 4))));
  }





  if (VAR_11 == VAR_2) {
   VAR_15 =
    VAR_15 | (1UL << ((8 * (VAR_13 %
       4)) + VAR_14));
  }





  if (VAR_11 == VAR_4) {
   VAR_15 =
    VAR_15 | ((VAR_9[1] & 0xFF) << (8 *
     (VAR_13 % 4)));
  }





  if (VAR_11 == VAR_1) {
   VAR_15 =
    VAR_15 & (0xFFFFFFFFUL -
    (1UL << ((8 * (VAR_13 % 4)) +
      VAR_14)));
  }





  if (VAR_11 == VAR_3) {
   VAR_15 =
    VAR_15 & (0xFFFFFFFFUL -
    ((VAR_9[1] & 0xFF) << (8 * (VAR_13 %
       4))));
  }

  FUNC_3(VAR_15,
   VAR_5->iobase + 20 + ((VAR_13 / 4) * 4));
 }

 return VAR_10;
}
