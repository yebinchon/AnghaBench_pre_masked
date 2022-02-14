
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u16_t ;
struct TYPE_4__ {int LEDCtrlFlagFromReg; int LEDCtrlFlag; } ;
struct TYPE_5__ {scalar_t__ scanFrequency; } ;
struct TYPE_6__ {scalar_t__ wlanMode; TYPE_1__ ledStruct; TYPE_2__ sta; int heartBeatNotification; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

u16_t FUNC_8(zdev_t *VAR_5)
{
 u16_t VAR_6 = 1;
 FUNC_6(VAR_5);

 FUNC_2("");

 FUNC_4();

 FUNC_5(VAR_5);

 if (VAR_4->wlanMode == VAR_2) {
  VAR_4->heartBeatNotification |= VAR_0;
  VAR_4->sta.scanFrequency = 0;

  VAR_6 = 0;
 } else {
  goto start_scan;

 }

 FUNC_7(VAR_5);

 return VAR_6;

start_scan:
 FUNC_7(VAR_5);

 if (VAR_4->ledStruct.LEDCtrlFlagFromReg & VAR_1) {

  VAR_4->ledStruct.LEDCtrlFlag |= VAR_1;
 }

 VAR_6 = FUNC_0(VAR_5, VAR_3);

 FUNC_3("ret = ", VAR_6);

 return VAR_6;
}
