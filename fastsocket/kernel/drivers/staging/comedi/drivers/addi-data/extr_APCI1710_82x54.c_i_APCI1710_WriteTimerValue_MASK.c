
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
struct TYPE_9__ {int* dw_MolduleConfiguration; scalar_t__ ui_Address; } ;
struct TYPE_10__ {TYPE_4__ s_BoardInfos; TYPE_3__* s_ModuleInfo; } ;
struct TYPE_7__ {TYPE_1__* s_82X54TimerInfo; } ;
struct TYPE_8__ {TYPE_2__ s_82X54ModuleInfo; } ;
struct TYPE_6__ {int b_82X54Init; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_5__* VAR_1 ;
 int FUNC_1 (unsigned int,scalar_t__) ;

int FUNC_2(struct comedi_device *VAR_2,
          unsigned char VAR_3, unsigned char VAR_4,
          unsigned int VAR_5)
{
 int VAR_6 = 0;


 if (VAR_3 < 4) {

  if ((VAR_1->s_BoardInfos.dw_MolduleConfiguration[VAR_3] & 0xFFFF0000UL) == VAR_0) {

   if (VAR_4 <= 2) {

    if (VAR_1->s_ModuleInfo[VAR_3].s_82X54ModuleInfo.s_82X54TimerInfo[VAR_4].b_82X54Init == 1) {

     FUNC_1(VAR_5, VAR_1->s_BoardInfos.ui_Address + (VAR_4 * 4) + (64 * VAR_3));
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
