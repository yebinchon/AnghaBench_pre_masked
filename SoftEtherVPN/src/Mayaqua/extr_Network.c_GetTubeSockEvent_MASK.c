
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ref; } ;
struct TYPE_5__ {int Lock; TYPE_2__* SockEvent; } ;
typedef TYPE_1__ TUBE ;
typedef TYPE_2__ SOCK_EVENT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

SOCK_EVENT *FUNC_3(TUBE *VAR_0)
{
 SOCK_EVENT *VAR_1 = ((void*)0);

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_1(VAR_0->Lock);
 {
  if (VAR_0->SockEvent != ((void*)0))
  {
   FUNC_0(VAR_0->SockEvent->ref);

   VAR_1 = VAR_0->SockEvent;
  }
 }
 FUNC_2(VAR_0->Lock);

 return VAR_1;
}
