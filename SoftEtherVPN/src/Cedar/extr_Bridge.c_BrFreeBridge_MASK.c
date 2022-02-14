
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Session; int * ParentLocalBridge; } ;
typedef TYPE_1__ BRIDGE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(BRIDGE *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->ParentLocalBridge != ((void*)0))
 {
  VAR_0->ParentLocalBridge = ((void*)0);
 }


 FUNC_2(VAR_0->Session);
 FUNC_1(VAR_0->Session);

 FUNC_0(VAR_0);
}
