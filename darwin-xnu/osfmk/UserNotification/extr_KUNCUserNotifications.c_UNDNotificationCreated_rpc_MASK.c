
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int kern_return_t ;
typedef TYPE_1__* UNDReplyRef ;
struct TYPE_6__ {int userLandNotificationKey; scalar_t__ inprogress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;

kern_return_t
FUNC_2 (
        UNDReplyRef VAR_3,
        int VAR_4)
{
 if (VAR_3 == VAR_2)
  return VAR_0;

 FUNC_0(VAR_3);
 if (VAR_3->inprogress || VAR_3->userLandNotificationKey != -1) {
  FUNC_1(VAR_3);
  return VAR_0;
 }
 VAR_3->userLandNotificationKey = VAR_4;
 FUNC_1(VAR_3);
 return VAR_1;
}
