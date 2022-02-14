
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {int* ul_TTLPortConfiguration; scalar_t__ iobase; TYPE_1__* ps_BoardInfo; } ;
struct TYPE_3__ {int i_NbrTTLChannel; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char FUNC_0 (int ) ;
 unsigned char FUNC_1 (int ) ;
 TYPE_2__* VAR_2 ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct comedi_device *VAR_3,
 struct comedi_subdevice *VAR_4, struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 int VAR_7 = VAR_5->n;
 unsigned char VAR_8 = 0;
 unsigned char VAR_9 =
  (unsigned char) (VAR_2->ps_BoardInfo->i_NbrTTLChannel / 8);
 unsigned char VAR_10 = FUNC_1(VAR_5->chanspec);
 unsigned char VAR_11 = FUNC_0(VAR_5->chanspec);
 unsigned char *VAR_12;
 unsigned int VAR_13;





 if (VAR_5->n >= 1) {




  VAR_8 = (unsigned char) VAR_6[0];





  if ((VAR_8 == VAR_0)
   || (VAR_8 == VAR_1)) {




   if (VAR_10 < VAR_9) {




    if (((VAR_2->ul_TTLPortConfiguration
       [VAR_10 /
        4] >> (8 *
        (VAR_10
         %
         4))) &
      0xFF) == 0) {




     if ((VAR_8 ==
       VAR_0)
      && (VAR_11 > 7)) {




      FUNC_3("\nChannel selection error");
      VAR_7 = -103;
     }
    } else {




     FUNC_3("\nPort selection error");
     VAR_7 = -102;
    }
   } else {




    FUNC_3("\nPort selection error");
    VAR_7 = -102;
   }
  } else {




   FUNC_3("\nCommand selection error");
   VAR_7 = -100;
  }
 } else {




  FUNC_3("\nBuffer size error");
  VAR_7 = -101;
 }





 if (VAR_7 >= 0) {
  VAR_12 = (unsigned char *) &VAR_6[0];





  VAR_13 =
   FUNC_2(VAR_2->iobase + 8 + ((VAR_10 / 4) * 4));
  VAR_13 = (VAR_13 >> (8 * (VAR_10 % 4))) & 0xFF;





  *VAR_12 = (unsigned char) VAR_13;





  if (VAR_8 == VAR_0) {
   *VAR_12 = (*VAR_12 >> VAR_11) & 1;
  }
 }

 return VAR_7;
}
