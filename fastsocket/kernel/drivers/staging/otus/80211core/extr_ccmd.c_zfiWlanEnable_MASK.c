
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u16_t ;
struct zsTrafTally {int dummy; } ;
struct TYPE_3__ {int cmMicFailureCount; } ;
struct TYPE_4__ {int queueFlushed; TYPE_1__ sta; int trafTally; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;

u16_t FUNC_8(zdev_t *VAR_3)
{
 u16_t VAR_4;

 FUNC_7(VAR_3);

 FUNC_6(VAR_1, "Enable Wlan");

 FUNC_1(VAR_3);

 FUNC_5((u8_t *) &VAR_2->trafTally, sizeof(struct zsTrafTally));


 if (VAR_2->sta.cmMicFailureCount == 1) {
  FUNC_3(VAR_3, VAR_0);
  VAR_2->sta.cmMicFailureCount = 0;
 }

 FUNC_0(VAR_3);
 if ((VAR_2->queueFlushed & 0x10) != 0)
  FUNC_2(VAR_3);

 VAR_4 = FUNC_4(VAR_3);

 return VAR_4;
}
