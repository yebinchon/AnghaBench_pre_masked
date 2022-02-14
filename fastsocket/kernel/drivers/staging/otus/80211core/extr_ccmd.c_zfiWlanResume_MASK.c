
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_3__ {int connectByReasso; } ;
struct TYPE_4__ {scalar_t__ wlanMode; TYPE_1__ sta; int macAddr; int ExtOffset; int BandWidth40; int frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (int *,int ,int ,int ,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

u16_t FUNC_14(zdev_t *VAR_5, u8_t VAR_6)
{
 u16_t VAR_7;
 FUNC_12(VAR_5);
 FUNC_10();


 FUNC_2(VAR_5, VAR_4->frequency);


 FUNC_0(VAR_5, VAR_4->frequency, VAR_4->BandWidth40,
  VAR_4->ExtOffset, ((void*)0), 1);

 FUNC_3(VAR_5, VAR_4->macAddr, 0);


 FUNC_5(VAR_5);

 FUNC_1(VAR_5);

 if (VAR_4->wlanMode != VAR_3 &&
   VAR_4->wlanMode != VAR_2)
  return 1;

 FUNC_9(VAR_1, "Resume Wlan");
 if ((FUNC_6(VAR_5)) || (FUNC_7(VAR_5))) {
  if (VAR_6 == 1) {
   FUNC_9(VAR_1, "Re-connect...");
   FUNC_11(VAR_5);
   VAR_4->sta.connectByReasso = VAR_0;
   FUNC_13(VAR_5);

   FUNC_8(VAR_5);
  } else if (VAR_6 == 0)
   FUNC_4(VAR_5);
 }

 VAR_7 = 0;

 return VAR_7;
}
