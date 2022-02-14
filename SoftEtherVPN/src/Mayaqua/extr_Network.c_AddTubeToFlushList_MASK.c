
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int IsInFlushList; int Ref; } ;
struct TYPE_7__ {int List; } ;
typedef TYPE_1__ TUBE_FLUSH_LIST ;
typedef TYPE_2__ TUBE ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;

void FUNC_3(TUBE_FLUSH_LIST *VAR_0, TUBE *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_1->IsInFlushList)
 {
  return;
 }

 if (FUNC_2(VAR_0->List, VAR_1) == 0)
 {
  FUNC_0(VAR_0->List, VAR_1);

  FUNC_1(VAR_1->Ref);

  VAR_1->IsInFlushList = 1;
 }
}
