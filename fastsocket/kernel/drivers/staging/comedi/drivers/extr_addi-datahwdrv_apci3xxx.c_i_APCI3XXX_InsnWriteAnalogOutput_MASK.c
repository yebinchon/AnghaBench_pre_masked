
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ dw_AiBase; TYPE_1__* ps_BoardInfo; } ;
struct TYPE_3__ {unsigned char i_NbrAoChannel; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (char*,...) ;
 unsigned int FUNC_3 (void*) ;
 int FUNC_4 (unsigned int,void*) ;

int FUNC_5(struct comedi_device *VAR_1,
 struct comedi_subdevice *VAR_2, struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 unsigned char VAR_5 = (unsigned char) FUNC_1(VAR_3->chanspec);
 unsigned char VAR_6 = (unsigned char) FUNC_0(VAR_3->chanspec);
 unsigned int VAR_7 = 0;
 int VAR_8 = VAR_3->n;





 if (VAR_3->n >= 1) {




  if (VAR_6 < VAR_0->ps_BoardInfo->i_NbrAoChannel) {




   if (VAR_5 < 2) {




    FUNC_4(VAR_5,
     (void *)(VAR_0->dw_AiBase + 96));





    FUNC_4((VAR_4[0] << 8) | VAR_6,
     (void *)(VAR_0->dw_AiBase + 100));





    do {
     VAR_7 =
      FUNC_3((void *)(VAR_0->
       dw_AiBase + 96));
    } while ((VAR_7 & 0x100) != 0x100);
   } else {




    VAR_8 = -4;
    FUNC_2("Channel %d range %d selection error\n",
     VAR_6, VAR_5);
   }
  } else {




   VAR_8 = -3;
   FUNC_2("Channel %d selection error\n", VAR_6);
  }
 } else {




  FUNC_2("Buffer size error\n");
  VAR_8 = -101;
 }

 return VAR_8;
}
