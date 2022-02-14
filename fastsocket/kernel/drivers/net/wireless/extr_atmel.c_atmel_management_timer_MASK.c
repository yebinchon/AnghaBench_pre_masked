
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct net_device {int dummy; } ;
struct atmel_private {int station_state; int CurrentAuthentTransactionSeqNum; int irqlock; int management_timer; int ReAssociationRequestRetryCnt; int station_is_associated; int AssociationRequestRetryCnt; int exclude_unencrypted; int wep_is_on; int AuthenticationRequestRetryCnt; scalar_t__ card; int (* present_callback ) (scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct atmel_private*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *,scalar_t__) ;
 struct atmel_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct atmel_private*) ;
 int FUNC_4 (struct atmel_private*,int) ;
 int FUNC_5 (struct atmel_private*,int,int *,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(u_long VAR_7)
{
 struct net_device *VAR_8 = (struct net_device *) VAR_7;
 struct atmel_private *VAR_9 = FUNC_2(VAR_8);
 unsigned long VAR_10;


 if (VAR_9->card && VAR_9->present_callback &&
  !(*VAR_9->present_callback)(VAR_9->card))
  return;

 FUNC_6(&VAR_9->irqlock, VAR_10);

 switch (VAR_9->station_state) {

 case 129:
  if (VAR_9->AuthenticationRequestRetryCnt >= VAR_1) {
   FUNC_0(VAR_9, VAR_3);
   VAR_9->station_is_associated = 0;
   VAR_9->AuthenticationRequestRetryCnt = 0;
   FUNC_3(VAR_9);
  } else {
   int VAR_11 = VAR_4;
   VAR_9->AuthenticationRequestRetryCnt++;
   VAR_9->CurrentAuthentTransactionSeqNum = 0x0001;
   FUNC_1(&VAR_9->management_timer, VAR_6 + VAR_2);
   if (VAR_9->wep_is_on && VAR_9->exclude_unencrypted)
    VAR_11 = VAR_5;
   FUNC_5(VAR_9, VAR_11, ((void*)0), 0);
   }
   break;

 case 130:
  if (VAR_9->AssociationRequestRetryCnt == VAR_0) {
   FUNC_0(VAR_9, VAR_3);
   VAR_9->station_is_associated = 0;
   VAR_9->AssociationRequestRetryCnt = 0;
   FUNC_3(VAR_9);
  } else {
   VAR_9->AssociationRequestRetryCnt++;
   FUNC_1(&VAR_9->management_timer, VAR_6 + VAR_2);
   FUNC_4(VAR_9, 0);
  }
   break;

 case 128:
  if (VAR_9->ReAssociationRequestRetryCnt == VAR_0) {
   FUNC_0(VAR_9, VAR_3);
   VAR_9->station_is_associated = 0;
   VAR_9->ReAssociationRequestRetryCnt = 0;
   FUNC_3(VAR_9);
  } else {
   VAR_9->ReAssociationRequestRetryCnt++;
   FUNC_1(&VAR_9->management_timer, VAR_6 + VAR_2);
   FUNC_4(VAR_9, 1);
  }
  break;

 default:
  break;
 }

 FUNC_7(&VAR_9->irqlock, VAR_10);
}
