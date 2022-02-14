
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int length; } ;
union iwreq_data {TYPE_1__ data; } ;
typedef scalar_t__ u8 ;
struct atmel_private {int fast_scan; int CurrentAuthentTransactionSeqNum; int exclude_unencrypted; int wep_is_on; int management_timer; int AuthenticationRequestRetryCnt; int station_is_associated; int station_was_associated; int operating_mode; int dev; void* site_survey_state; int SSID_size; scalar_t__ CurrentBSSID; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct atmel_private*,int ) ;
 int FUNC_1 (struct atmel_private*,int ) ;
 int FUNC_2 (struct atmel_private*,int ,int ,scalar_t__*,int) ;
 int FUNC_3 (struct atmel_private*,int) ;
 scalar_t__ FUNC_4 (struct atmel_private*,int ) ;
 int FUNC_5 (struct atmel_private*,int) ;
 scalar_t__ VAR_16 ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (struct atmel_private*) ;
 int FUNC_8 (struct atmel_private*,int,int *,int ) ;
 int FUNC_9 (struct atmel_private*,int ) ;
 int FUNC_10 (int ,int ,union iwreq_data*,int *) ;

__attribute__((used)) static void FUNC_11(struct atmel_private *VAR_17)
{
 u8 VAR_18 = FUNC_4(VAR_17, FUNC_0(VAR_17, VAR_2));
 u8 VAR_19 = FUNC_4(VAR_17, FUNC_0(VAR_17, VAR_1));
 int VAR_20;
 union iwreq_data VAR_21;

 if (VAR_18 == VAR_4 ||
     VAR_18 == VAR_5)
  return;

 switch (VAR_19) {
 case 128:
  if (VAR_18 == VAR_3) {
   VAR_17->station_was_associated = VAR_17->station_is_associated;
   FUNC_2(VAR_17, VAR_9, VAR_7,
          (u8 *)VAR_17->CurrentBSSID, 6);
   FUNC_1(VAR_17, VAR_13);
  }
  break;

 case 130:
  VAR_20 = VAR_17->fast_scan;
  VAR_17->fast_scan = 0;

  if (VAR_18 != VAR_3) {
   FUNC_5(VAR_17, 1);
  } else {
   int VAR_22 = FUNC_7(VAR_17);
   int VAR_23 = 1;
   if (VAR_22 != -1) {
    FUNC_3(VAR_17, VAR_22);
   } else if (VAR_17->operating_mode == VAR_6 &&
       VAR_17->SSID_size != 0) {
    FUNC_9(VAR_17, VAR_0);
   } else {
    VAR_17->fast_scan = !VAR_20;
    FUNC_5(VAR_17, 1);
    VAR_23 = 0;
   }
   VAR_17->site_survey_state = VAR_11;
   if (VAR_23) {
    VAR_21.data.length = 0;
    VAR_21.data.flags = 0;
    FUNC_10(VAR_17->dev, VAR_10, &VAR_21, ((void*)0));
   }
  }
  break;

 case 129:
  VAR_17->fast_scan = 0;

  if (VAR_18 != VAR_3)
   return;

  VAR_17->site_survey_state = VAR_11;
  if (VAR_17->station_is_associated) {
   FUNC_1(VAR_17, VAR_13);
   VAR_21.data.length = 0;
   VAR_21.data.flags = 0;
   FUNC_10(VAR_17->dev, VAR_10, &VAR_21, ((void*)0));
  } else {
   FUNC_5(VAR_17, 1);
  }
  break;

 case 131:
  if (VAR_18 == VAR_3) {
   if (VAR_17->operating_mode == VAR_6) {
    VAR_17->station_was_associated = VAR_17->station_is_associated;
    FUNC_1(VAR_17, VAR_13);
   } else {
    int VAR_24 = VAR_14;
    VAR_17->AuthenticationRequestRetryCnt = 0;
    FUNC_1(VAR_17, VAR_12);

    FUNC_6(&VAR_17->management_timer, VAR_16 + VAR_8);
    VAR_17->CurrentAuthentTransactionSeqNum = 0x0001;
    if (VAR_17->wep_is_on && VAR_17->exclude_unencrypted)
     VAR_24 = VAR_15;
    FUNC_8(VAR_17, VAR_24, ((void*)0), 0);
   }
   return;
  }

  FUNC_5(VAR_17, 1);
 }
}
