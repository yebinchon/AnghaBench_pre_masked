
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
struct TYPE_5__ {int* dw_MolduleConfiguration; scalar_t__ ui_Address; } ;
struct TYPE_8__ {TYPE_3__* s_ModuleInfo; TYPE_1__ s_BoardInfos; } ;
struct TYPE_6__ {int b_TTLInit; int* b_PortConfiguration; } ;
struct TYPE_7__ {TYPE_2__ s_TTLIOInfo; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_4__* VAR_1 ;
 unsigned int FUNC_2 (scalar_t__) ;

int FUNC_3(struct comedi_device *VAR_2,
 struct comedi_subdevice *VAR_3, struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 int VAR_6 = 0;
 unsigned int VAR_7;
 unsigned char VAR_8;
 unsigned int *VAR_9;

 VAR_8 = (unsigned char) FUNC_0(VAR_4->chanspec);
 VAR_6 = VAR_4->n;
 VAR_9 = (unsigned int *) &VAR_5[0];





 if (VAR_8 < 4) {




  if ((VAR_1->s_BoardInfos.
    dw_MolduleConfiguration[VAR_8] &
    0xFFFF0000UL) == VAR_0) {




   if (VAR_1->
    s_ModuleInfo[VAR_8].
    s_TTLIOInfo.b_TTLInit == 1) {




    VAR_7 = FUNC_2(VAR_1->s_BoardInfos.
     ui_Address + (64 * VAR_8));





    if ((VAR_1->s_BoardInfos.
      dw_MolduleConfiguration
      [VAR_8] & 0xFFFF) ==
     0x3130) {
     *VAR_9 =
      VAR_7 & 0xFFFFFFUL;
    } else {




     if (VAR_1->s_ModuleInfo[VAR_8].
      s_TTLIOInfo.
      b_PortConfiguration[0] == 1) {
      *VAR_9 =
       VAR_7 &
       0x3FFFF00UL;
     }





     if (VAR_1->
      s_ModuleInfo[VAR_8].
      s_TTLIOInfo.
      b_PortConfiguration[1] == 1) {
      *VAR_9 =
       VAR_7 &
       0x3FF00FFUL;
     }





     if (VAR_1->
      s_ModuleInfo[VAR_8].
      s_TTLIOInfo.
      b_PortConfiguration[2] == 1) {
      *VAR_9 =
       VAR_7 &
       0x300FFFFUL;
     }





     if (VAR_1->
      s_ModuleInfo[VAR_8].
      s_TTLIOInfo.
      b_PortConfiguration[3] == 1) {
      *VAR_9 =
       VAR_7 &
       0xFFFFFFUL;
     }
    }
   } else {



    FUNC_1("TTL I/O not initialised\n");
    VAR_6 = -5;
   }
  } else {



   FUNC_1("The module is not a TTL module\n");
   VAR_6 = -3;
  }
 } else {



  FUNC_1("Module number error\n");
  VAR_6 = -2;
 }

 return VAR_6;
}
