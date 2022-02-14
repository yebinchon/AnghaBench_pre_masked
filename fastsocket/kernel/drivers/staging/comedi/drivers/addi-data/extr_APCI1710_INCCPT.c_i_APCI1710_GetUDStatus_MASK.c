
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_6__ {scalar_t__ ui_Address; } ;
struct TYPE_10__ {TYPE_1__ s_BoardInfos; TYPE_4__* s_ModuleInfo; } ;
struct TYPE_7__ {int b_CounterInit; } ;
struct TYPE_8__ {TYPE_2__ s_InitFlag; } ;
struct TYPE_9__ {TYPE_3__ s_SiemensCounterInfo; } ;


 int FUNC_0 (char*) ;
 TYPE_5__* VAR_0 ;
 unsigned int FUNC_1 (scalar_t__) ;

int FUNC_2(struct comedi_device *VAR_1,
 unsigned char VAR_2, unsigned char *VAR_3)
{
 int VAR_4 = 0;
 unsigned int VAR_5 = 0;





 if (VAR_2 < 4) {




  if (VAR_0->
   s_ModuleInfo[VAR_2].
   s_SiemensCounterInfo.s_InitFlag.b_CounterInit == 1) {
   VAR_5 = FUNC_1(VAR_0->s_BoardInfos.
    ui_Address + 24 + (64 * VAR_2));

   *VAR_3 = (unsigned char) ((VAR_5 >> 2) & 1);

  } else {





   FUNC_0("Counter not initialised\n");
   VAR_4 = -3;
  }
 } else {




  FUNC_0("The selected module number parameter is wrong\n");
  VAR_4 = -2;
 }

 return VAR_4;
}
