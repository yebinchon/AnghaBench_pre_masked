
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
struct TYPE_6__ {int* dw_MolduleConfiguration; scalar_t__ ui_Address; } ;
struct TYPE_10__ {TYPE_4__* s_ModuleInfo; TYPE_1__ s_BoardInfos; } ;
struct TYPE_8__ {TYPE_2__* s_82X54TimerInfo; } ;
struct TYPE_9__ {TYPE_3__ s_82X54ModuleInfo; } ;
struct TYPE_7__ {int b_82X54Init; unsigned int b_OutputLevel; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_5__* VAR_1 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

int FUNC_3(struct comedi_device *VAR_2,
       unsigned char VAR_3, unsigned char VAR_4,
       unsigned char *VAR_5)
{
 int VAR_6 = 0;
 unsigned int VAR_7;


 if (VAR_3 < 4) {

  if ((VAR_1->s_BoardInfos.dw_MolduleConfiguration[VAR_3] & 0xFFFF0000UL) == VAR_0) {

   if (VAR_4 <= 2) {

    if (VAR_1->s_ModuleInfo[VAR_3].s_82X54ModuleInfo.s_82X54TimerInfo[VAR_4].b_82X54Init == 1) {

     FUNC_2((2 << VAR_4) | 0xE0, VAR_1->s_BoardInfos.ui_Address + 12 + (64 * VAR_3));


     VAR_7 = FUNC_1(VAR_1->s_BoardInfos.ui_Address + 16 + (VAR_4 * 4) + (64 * VAR_3));

     *VAR_5 = (unsigned char) (((VAR_7 >> 7) & 1) ^ VAR_1-> s_ModuleInfo[VAR_3].s_82X54ModuleInfo.s_82X54TimerInfo[VAR_4].b_OutputLevel);
    } else {

     FUNC_0("Timer not initialised see function\n");
     VAR_6 = -5;
    }
   } else {

    FUNC_0("Timer selection wrong\n");
    VAR_6 = -3;
   }
  } else {

   FUNC_0("The module is not a TIMER module\n");
   VAR_6 = -4;
  }
 } else {

  FUNC_0("Module number error\n");
  VAR_6 = -2;
 }

 return VAR_6;
}
