
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_7__ {int* dw_MolduleConfiguration; int ui_Address; } ;
struct TYPE_8__ {TYPE_3__ s_BoardInfos; TYPE_2__* s_ModuleInfo; } ;
struct TYPE_5__ {int b_OutputMemoryEnabled; int b_DigitalInit; unsigned char b_ChannelAMode; unsigned char b_ChannelBMode; int dw_OutputMemory; } ;
struct TYPE_6__ {TYPE_1__ s_DigitalIOInfo; } ;




 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_4__* VAR_1 ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (char*,int) ;

int FUNC_4(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3,
 struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 unsigned char VAR_6, VAR_7, VAR_8;
 unsigned char VAR_9, VAR_10;
 int VAR_11 = 0;
 unsigned int VAR_12 = 0;

 VAR_6 = (unsigned char) FUNC_0(VAR_4->chanspec);
 VAR_10 = (unsigned char) VAR_5[0];
 VAR_7 = (unsigned char) VAR_5[1];
 VAR_8 = (unsigned char) VAR_5[2];
 VAR_9 = (unsigned char) VAR_5[1];
 VAR_11 = VAR_4->n;





 if (VAR_6 >= 4) {
  FUNC_1("Module Number invalid\n");
  VAR_11 = -2;
  return VAR_11;
 }
 switch (VAR_10) {
 case 128:

  if (VAR_9)
  {




   VAR_1->s_ModuleInfo[VAR_6].
    s_DigitalIOInfo.b_OutputMemoryEnabled = 1;




   VAR_1->s_ModuleInfo[VAR_6].
    s_DigitalIOInfo.dw_OutputMemory = 0;
  } else
  {




   VAR_1->s_ModuleInfo[VAR_6].
    s_DigitalIOInfo.b_OutputMemoryEnabled = 0;
  }
  break;

 case 129:





  if ((VAR_1->s_BoardInfos.
    dw_MolduleConfiguration[VAR_6] &
    0xFFFF0000UL) == VAR_0) {





   if ((VAR_7 == 0) || (VAR_7 == 1)) {




    if ((VAR_8 == 0)
     || (VAR_8 == 1)) {
     VAR_1->s_ModuleInfo[VAR_6].
      s_DigitalIOInfo.b_DigitalInit =
      1;





     VAR_1->s_ModuleInfo[VAR_6].
      s_DigitalIOInfo.
      b_ChannelAMode = VAR_7;





     VAR_1->s_ModuleInfo[VAR_6].
      s_DigitalIOInfo.
      b_ChannelBMode = VAR_8;





     VAR_12 =
      (unsigned int) (VAR_7 |
      (VAR_8 * 2));





     FUNC_2(VAR_12,
      VAR_1->s_BoardInfos.
      ui_Address + 4 +
      (64 * VAR_6));

    } else {



     FUNC_1("Bi-directional channel B configuration error\n");
     VAR_11 = -5;
    }

   } else {



    FUNC_1("Bi-directional channel A configuration error\n");
    VAR_11 = -4;

   }

  } else {



   FUNC_1("The module is not a digital I/O module\n");
   VAR_11 = -3;
  }
 }
 FUNC_3("Return Value %d\n", VAR_11);
 return VAR_11;
}
