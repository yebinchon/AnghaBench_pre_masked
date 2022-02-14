
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* Name; struct TYPE_7__* Buf; TYPE_1__* Parent; } ;
struct TYPE_6__ {int Items; } ;
typedef TYPE_2__ ITEM ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(ITEM *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }


 FUNC_0(VAR_0->Parent->Items, VAR_0);


 FUNC_1(VAR_0->Buf);
 FUNC_1(VAR_0->Name);
 FUNC_1(VAR_0);
}
