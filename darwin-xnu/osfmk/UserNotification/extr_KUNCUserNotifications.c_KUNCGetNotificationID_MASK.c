
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct UNDReply {int dummy; } ;
typedef int ipc_kobject_t ;
typedef TYPE_1__* UNDReplyRef ;
struct TYPE_4__ {scalar_t__ self_port; int userLandNotificationKey; int inprogress; int lock; } ;
typedef int KUNCUserNotificationID ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int *,int *,int ) ;

KUNCUserNotificationID
FUNC_5(void)
{
 UNDReplyRef VAR_6;

 VAR_6 = (UNDReplyRef) FUNC_2(sizeof(struct UNDReply));
 if (VAR_6 != VAR_5) {
  VAR_6->self_port = FUNC_1();
  if (VAR_6->self_port == VAR_2) {
   FUNC_3(VAR_6, sizeof(struct UNDReply));
   VAR_6 = VAR_5;
  } else {
   FUNC_4(&VAR_6->lock, &VAR_4, VAR_3);
   VAR_6->userLandNotificationKey = -1;
   VAR_6->inprogress = VAR_0;
   FUNC_0(VAR_6->self_port,
     (ipc_kobject_t)VAR_6,
     VAR_1);
  }
 }
 return (KUNCUserNotificationID) VAR_6;
}
