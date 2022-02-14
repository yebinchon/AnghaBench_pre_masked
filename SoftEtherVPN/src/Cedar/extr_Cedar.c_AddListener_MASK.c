
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ListenerList; } ;
struct TYPE_6__ {int ref; } ;
typedef TYPE_1__ LISTENER ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(CEDAR *VAR_0, LISTENER *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0->ListenerList);
 {
  FUNC_0(VAR_0->ListenerList, VAR_1);
  FUNC_1(VAR_1->ref);
 }
 FUNC_3(VAR_0->ListenerList);
}
