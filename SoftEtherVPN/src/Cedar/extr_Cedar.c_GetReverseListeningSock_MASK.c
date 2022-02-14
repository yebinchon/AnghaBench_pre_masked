
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {int ListenerList; } ;
struct TYPE_8__ {scalar_t__ Protocol; int lock; TYPE_1__* Sock; } ;
struct TYPE_7__ {int ref; } ;
typedef TYPE_1__ SOCK ;
typedef TYPE_2__ LISTENER ;
typedef TYPE_3__ CEDAR ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

SOCK *FUNC_7(CEDAR *VAR_1)
{
 SOCK *VAR_2 = ((void*)0);

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_4(VAR_1->ListenerList);
 {
  UINT VAR_3;
  for (VAR_3 = 0;VAR_3 < FUNC_2(VAR_1->ListenerList);VAR_3++)
  {
   LISTENER *VAR_4 = FUNC_1(VAR_1->ListenerList, VAR_3);

   if (VAR_4->Protocol == VAR_0)
   {
    FUNC_3(VAR_4->lock);
    {
     VAR_2 = VAR_4->Sock;

     FUNC_0(VAR_2->ref);
    }
    FUNC_5(VAR_4->lock);
    break;
   }
  }
 }
 FUNC_6(VAR_1->ListenerList);

 return VAR_2;
}
