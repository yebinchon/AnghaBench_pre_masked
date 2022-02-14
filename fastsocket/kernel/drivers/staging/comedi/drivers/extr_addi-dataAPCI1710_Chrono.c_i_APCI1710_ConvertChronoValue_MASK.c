
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_5__ {int* dw_MolduleConfiguration; } ;
struct TYPE_8__ {TYPE_3__* s_ModuleInfo; TYPE_1__ s_BoardInfos; } ;
struct TYPE_6__ {int b_ChronoInit; int b_TimingUnit; scalar_t__ d_TimingInterval; } ;
struct TYPE_7__ {TYPE_2__ s_ChronoModuleInfo; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_4__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3(struct comedi_device *VAR_2,
 unsigned char VAR_3,
 unsigned int VAR_4,
 unsigned int *VAR_5,
 unsigned char *VAR_6,
 unsigned char *VAR_7,
 unsigned int *VAR_8, unsigned int *VAR_9, unsigned int *VAR_10)
{
 int VAR_11 = 0;
 double VAR_12;
 double VAR_13;
 double VAR_14;
 double VAR_15;
 double VAR_16;
 double VAR_17;





 if (VAR_3 < 4) {




  if ((VAR_1->s_BoardInfos.
    dw_MolduleConfiguration[VAR_3] &
    0xFFFF0000UL) == VAR_0) {




   if (VAR_1->
    s_ModuleInfo[VAR_3].
    s_ChronoModuleInfo.b_ChronoInit == 1) {
    FUNC_1();

    VAR_12 = (double)VAR_4 *(double)
     VAR_1->s_ModuleInfo[VAR_3].
     s_ChronoModuleInfo.d_TimingInterval;

    switch (VAR_1->
     s_ModuleInfo[VAR_3].
     s_ChronoModuleInfo.b_TimingUnit) {
    case 0:
     VAR_12 = VAR_12 / (double)1000.0;

    case 1:
     VAR_12 = VAR_12 / (double)1000.0;

    case 2:
     VAR_12 = VAR_12 / (double)1000.0;

    case 3:
     VAR_12 = VAR_12 / (double)60.0;

    case 4:




     VAR_12 = VAR_12 / (double)60.0;
     *VAR_5 = (unsigned int) VAR_12;





     VAR_13 = VAR_12 - *VAR_5;
     VAR_13 = VAR_13 * 60;
     *VAR_6 = (unsigned char) VAR_13;





     VAR_14 = VAR_13 - *VAR_6;
     VAR_14 = VAR_14 * 60;
     *VAR_7 = (unsigned char) VAR_14;





     VAR_15 = VAR_14 - *VAR_7;
     VAR_15 = VAR_15 * 1000;
     *VAR_8 = (unsigned int) VAR_15;





     VAR_16 =
      VAR_15 -
      *VAR_8;
     VAR_16 = VAR_16 * 1000;
     *VAR_9 = (unsigned int) VAR_16;





     VAR_17 =
      VAR_16 -
      *VAR_9;
     VAR_17 = VAR_17 * 1000;
     *VAR_10 = (unsigned int) VAR_17;
     break;
    }

    FUNC_2();
   } else {



    FUNC_0("Chronometer not initialised\n");
    VAR_11 = -4;
   }
  } else {



   FUNC_0("The module is not a Chronometer module\n");
   VAR_11 = -3;
  }
 } else {



  FUNC_0("Module number error\n");
  VAR_11 = -2;
 }

 return VAR_11;
}
