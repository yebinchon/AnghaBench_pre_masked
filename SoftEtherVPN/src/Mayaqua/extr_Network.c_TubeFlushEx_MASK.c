
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int SockEvent; int Event; TYPE_1__* Queue; } ;
struct TYPE_5__ {scalar_t__ num_item; } ;
typedef TYPE_2__ TUBE ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(TUBE *VAR_0, bool VAR_1)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (FUNC_0(VAR_0) == 0)
 {
  return;
 }

 if (VAR_1 == 0)
 {
  if (VAR_0->Queue->num_item == 0)
  {
   return;
  }
 }

 FUNC_1(VAR_0->Event);
 FUNC_2(VAR_0->SockEvent);
}
