
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int kern_return_t ;
typedef int UNDServerRef ;
typedef TYPE_1__* UNDReplyRef ;
struct TYPE_6__ {int userLandNotificationKey; scalar_t__ inprogress; } ;
typedef int KUNCUserNotificationID ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 TYPE_1__* VAR_4 ;

kern_return_t FUNC_7(
 KUNCUserNotificationID VAR_5)
{
 UNDReplyRef VAR_6 = (UNDReplyRef)VAR_5;
 kern_return_t VAR_7;
 int VAR_8;

 if (VAR_6 == VAR_4)
  return VAR_1;

 FUNC_3(VAR_6);
 if (!VAR_6->inprogress) {
  FUNC_4(VAR_6);
  return VAR_1;
 }

 VAR_6->inprogress = VAR_0;
 if ((VAR_8 = VAR_6->userLandNotificationKey) != 0) {
  UNDServerRef VAR_9;

  VAR_6->userLandNotificationKey = 0;
  FUNC_4(VAR_6);

  VAR_9 = FUNC_6();
  if (FUNC_0(VAR_9)) {
   VAR_7 = FUNC_1(VAR_9,VAR_8);
   FUNC_5(VAR_9);
  } else
   VAR_7 = VAR_3;
 } else {
  FUNC_4(VAR_6);
  VAR_7 = VAR_2;
 }
 FUNC_2(VAR_6);
 return VAR_7;
}
